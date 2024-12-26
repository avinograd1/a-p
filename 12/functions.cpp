#include "main.h"

int digitNumber(std::string& str) {
    int number = 0;
    for (char c : str) {
        number += isdigit(c);
    }
    return number;
}

void shiftLeft(std::string& s) {
    s = s + s[0];
    s.erase(0, 1);
}

void shiftRight(std::string& s) {
    s = s.insert(0,
        std::string(1, s[s.size() - 1]));
    s.erase(s.size() - 1, 1);
}

bool checkAlpha(char original) {
    char c = std::tolower(original);
    return std::isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


int countCombinations(std::string& str) {
    int count = 0;
    std::string delimiters = " ,.!?-";
    for (size_t i = 0; i < str.size() - 2; ++i) {
        if (checkAlpha(str[i]) && (delimiters.find(str[i + 1]) != std::string::npos) && checkAlpha(str[i + 2])) {
            ++count;
            //std::cout << str[i] << str[i + 1] << str[i + 2] << std::endl;
        }
    }
    return count;
}

std::string removeBetween(std::string& str) {
    int firstSpace = str.find(' ');
    if (firstSpace == std::string::npos) {
        return str;
    }

    int secondSpace = str.find(' ', firstSpace + 1);
    if (secondSpace == std::string::npos) {
        return str;
    }

    int lastSpace = str.rfind(' ');
    if (lastSpace == secondSpace) {
        return str;
    }

    std::string result = str.substr(0, secondSpace + 1);
    result += str.substr(lastSpace + 1);

    return result;
}


std::vector<std::string> splitWords(std::string& str) {
    std::vector<std::string> words;
    std::string word;
    for (char c : str) {
        if (std::isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

std::string joinWords(std::vector<std::string>& words) {
    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }
    return result;
}

std::string cyclicShift(const std::string& word) {
    if (word.empty() || word.length() == 1) {
        return word;
    }
    return word.substr(1) + word[0];
}

std::string stringShift(std::string& str) {
    std::vector<std::string> words = splitWords(str);

    int consonantWordCount = 0;
    for (size_t i = 0; i < words.size(); ++i) {
        if (checkAlpha(words[i][0])) {
            ++consonantWordCount;
            if (consonantWordCount == 3) {
                words[i] = cyclicShift(words[i]);
                break;
            }
        }
    }

    return joinWords(words);
}

std::string reverseFirstWord(std::string& str) {
    size_t start = str.find_first_not_of(" ");
    if (start == std::string::npos) {
        return str;
    }

    size_t end = str.find_first_of(" ", start);
    if (end == std::string::npos) {
        end = str.length();
    }

    std::string firstWord = str.substr(start, end - start);

    std::reverse(firstWord.begin(), firstWord.end());

    str.replace(start, end - start, firstWord);

    return str;
}