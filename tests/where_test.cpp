#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "../src/where.hpp"
#include "../src/where_substring.cpp"

TEST_CASE("Character search works correctly", "[sentence_miner]") {
    const char text[] = "The quick brown fox";

    SECTION("Character found") {
        REQUIRE(sentence_miner('e', text) == 2);
        REQUIRE(sentence_miner('T', text) == 0);
    }

    SECTION("Character not found") {
        REQUIRE(sentence_miner('z', text) == -1);
    }
}

TEST_CASE("Substring search works correctly", "[sentence_miner]") {
    const char text[] = "The quick brown fox";

    SECTION("Substring found") {
        REQUIRE(sentence_miner("quick", text) == 4);
        REQUIRE(sentence_miner("The", text) == 0);
    }

    SECTION("Substring not found") {
        REQUIRE(sentence_miner("quiet", text) == -1);
    }
}
