
// Generated from numbers.g4 by ANTLR 4.7.2


#include "numbers.h"


using namespace antlr4;


numbers::numbers(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

numbers::~numbers() {
  delete _interpreter;
}

std::string numbers::getGrammarFileName() const {
  return "numbers.g4";
}

const std::vector<std::string>& numbers::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& numbers::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& numbers::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& numbers::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& numbers::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> numbers::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& numbers::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> numbers::_decisionToDFA;
atn::PredictionContextCache numbers::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN numbers::_atn;
std::vector<uint16_t> numbers::_serializedATN;

std::vector<std::string> numbers::_ruleNames = {
  u8"Number", u8"Integer", u8"Digit"
};

std::vector<std::string> numbers::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> numbers::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> numbers::_literalNames = {
};

std::vector<std::string> numbers::_symbolicNames = {
  "", u8"Number", u8"Integer", u8"Digit"
};

dfa::Vocabulary numbers::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> numbers::_tokenNames;

numbers::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0x5, 0x14, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0xe, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x11, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x2, 
    0x2, 0x5, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x3, 0x2, 0x2, 0x2, 0x14, 0x2, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x3, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x7, 0x12, 0x3, 0x2, 0x2, 0x2, 0x9, 0xa, 0x5, 0x5, 0x3, 0x2, 0xa, 
    0x4, 0x3, 0x2, 0x2, 0x2, 0xb, 0xf, 0x5, 0x7, 0x4, 0x2, 0xc, 0xe, 0x5, 
    0x7, 0x4, 0x2, 0xd, 0xc, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x6, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 
    0x4, 0x32, 0x3b, 0x2, 0x13, 0x8, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2, 0xf, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

numbers::Initializer numbers::_init;
