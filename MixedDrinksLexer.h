
// Generated from MixedDrinks.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  MixedDrinksLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, CHUG = 4, UNTIL = 5, DRUNK = 6, THEN = 7, 
    SOBER = 8, IDENTIFIER = 9, INTEGER = 10, MUL_OP = 11, DIV_OP = 12, ADD_OP = 13, 
    SUB_OP = 14, EQ_OP = 15, NE_OP = 16, LT_OP = 17, LE_OP = 18, GT_OP = 19, 
    GE_OP = 20, NEWLINE = 21, WS = 22
  };

  MixedDrinksLexer(antlr4::CharStream *input);
  ~MixedDrinksLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

