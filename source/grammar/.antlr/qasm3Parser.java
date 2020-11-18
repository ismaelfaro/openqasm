// Generated from /Users/ismaelfaro/code/openqasm3/source/grammar/qasm3.g4 by ANTLR 4.8
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class qasm3Parser extends Parser {
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, GateDef=15, Gate=16, 
		StdGates=17, Assign=18, StringLiteral=19, OpenBracket=20, CloseBracket=21, 
		Colon=22, SemiColon=23, Dot=24, Comma=25, Identifier=26, SPACE=27, Number=28;
	public static final int
		RULE_program = 0, RULE_header = 1, RULE_include = 2, RULE_statement = 3, 
		RULE_variableDeclarationStatement = 4, RULE_type = 5, RULE_variableDeclarationList = 6, 
		RULE_variableDeclaration = 7, RULE_gateDefinition = 8, RULE_paramsList = 9, 
		RULE_paramDeclaration = 10, RULE_qargsList = 11, RULE_qargDeclaration = 12, 
		RULE_expression = 13, RULE_value = 14, RULE_varType = 15;
	private static String[] makeRuleNames() {
		return new String[] {
			"program", "header", "include", "statement", "variableDeclarationStatement", 
			"type", "variableDeclarationList", "variableDeclaration", "gateDefinition", 
			"paramsList", "paramDeclaration", "qargsList", "qargDeclaration", "expression", 
			"value", "varType"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'OPENQASM 3'", "'include'", "'{'", "'}'", "'qubit'", "'qreg'", 
			"'bit'", "'creg'", "'bool'", "'const'", "'int'", "'uint'", "'angle'", 
			"'fixed'", "'gate'", null, null, "'='", null, "'['", "']'", "':'", "';'", 
			"'.'", "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "GateDef", "Gate", "StdGates", "Assign", "StringLiteral", 
			"OpenBracket", "CloseBracket", "Colon", "SemiColon", "Dot", "Comma", 
			"Identifier", "SPACE", "Number"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "qasm3.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public qasm3Parser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class ProgramContext extends ParserRuleContext {
		public HeaderContext header() {
			return getRuleContext(HeaderContext.class,0);
		}
		public TerminalNode EOF() { return getToken(qasm3Parser.EOF, 0); }
		public List<IncludeContext> include() {
			return getRuleContexts(IncludeContext.class);
		}
		public IncludeContext include(int i) {
			return getRuleContext(IncludeContext.class,i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgramContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_program; }
	}

	public final ProgramContext program() throws RecognitionException {
		ProgramContext _localctx = new ProgramContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_program);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(32);
			header();
			setState(36);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__1) {
				{
				{
				setState(33);
				include();
				}
				}
				setState(38);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(40); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(39);
				statement();
				}
				}
				setState(42); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13) | (1L << Gate))) != 0) );
			setState(44);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class HeaderContext extends ParserRuleContext {
		public TerminalNode SemiColon() { return getToken(qasm3Parser.SemiColon, 0); }
		public TerminalNode Dot() { return getToken(qasm3Parser.Dot, 0); }
		public TerminalNode Number() { return getToken(qasm3Parser.Number, 0); }
		public HeaderContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_header; }
	}

	public final HeaderContext header() throws RecognitionException {
		HeaderContext _localctx = new HeaderContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_header);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(46);
			match(T__0);
			setState(49);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Dot) {
				{
				setState(47);
				match(Dot);
				setState(48);
				match(Number);
				}
			}

			setState(51);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IncludeContext extends ParserRuleContext {
		public TerminalNode StringLiteral() { return getToken(qasm3Parser.StringLiteral, 0); }
		public TerminalNode SemiColon() { return getToken(qasm3Parser.SemiColon, 0); }
		public IncludeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_include; }
	}

	public final IncludeContext include() throws RecognitionException {
		IncludeContext _localctx = new IncludeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_include);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(53);
			match(T__1);
			setState(54);
			match(StringLiteral);
			setState(55);
			match(SemiColon);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public VariableDeclarationStatementContext variableDeclarationStatement() {
			return getRuleContext(VariableDeclarationStatementContext.class,0);
		}
		public TerminalNode SemiColon() { return getToken(qasm3Parser.SemiColon, 0); }
		public GateDefinitionContext gateDefinition() {
			return getRuleContext(GateDefinitionContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_statement);
		try {
			setState(61);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(57);
				variableDeclarationStatement();
				setState(58);
				match(SemiColon);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(60);
				gateDefinition();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationStatementContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public VariableDeclarationListContext variableDeclarationList() {
			return getRuleContext(VariableDeclarationListContext.class,0);
		}
		public TerminalNode Gate() { return getToken(qasm3Parser.Gate, 0); }
		public VariableDeclarationStatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclarationStatement; }
	}

	public final VariableDeclarationStatementContext variableDeclarationStatement() throws RecognitionException {
		VariableDeclarationStatementContext _localctx = new VariableDeclarationStatementContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variableDeclarationStatement);
		try {
			setState(67);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__8:
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case T__13:
				enterOuterAlt(_localctx, 1);
				{
				setState(63);
				type();
				setState(64);
				variableDeclarationList();
				}
				break;
			case Gate:
				enterOuterAlt(_localctx, 2);
				{
				setState(66);
				match(Gate);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TypeContext extends ParserRuleContext {
		public VarTypeContext varType() {
			return getRuleContext(VarTypeContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(qasm3Parser.OpenBracket, 0); }
		public List<TerminalNode> Number() { return getTokens(qasm3Parser.Number); }
		public TerminalNode Number(int i) {
			return getToken(qasm3Parser.Number, i);
		}
		public TerminalNode CloseBracket() { return getToken(qasm3Parser.CloseBracket, 0); }
		public TerminalNode Comma() { return getToken(qasm3Parser.Comma, 0); }
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_type);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(69);
			varType();
			setState(77);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				{
				setState(70);
				match(OpenBracket);
				setState(71);
				match(Number);
				setState(74);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Comma) {
					{
					setState(72);
					match(Comma);
					setState(73);
					match(Number);
					}
				}

				setState(76);
				match(CloseBracket);
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationListContext extends ParserRuleContext {
		public List<VariableDeclarationContext> variableDeclaration() {
			return getRuleContexts(VariableDeclarationContext.class);
		}
		public VariableDeclarationContext variableDeclaration(int i) {
			return getRuleContext(VariableDeclarationContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(qasm3Parser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(qasm3Parser.Comma, i);
		}
		public VariableDeclarationListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclarationList; }
	}

	public final VariableDeclarationListContext variableDeclarationList() throws RecognitionException {
		VariableDeclarationListContext _localctx = new VariableDeclarationListContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_variableDeclarationList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			variableDeclaration();
			setState(84);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(80);
				match(Comma);
				setState(81);
				variableDeclaration();
				}
				}
				setState(86);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariableDeclarationContext extends ParserRuleContext {
		public TerminalNode Identifier() { return getToken(qasm3Parser.Identifier, 0); }
		public TerminalNode OpenBracket() { return getToken(qasm3Parser.OpenBracket, 0); }
		public TerminalNode Number() { return getToken(qasm3Parser.Number, 0); }
		public TerminalNode CloseBracket() { return getToken(qasm3Parser.CloseBracket, 0); }
		public TerminalNode Assign() { return getToken(qasm3Parser.Assign, 0); }
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public VariableDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variableDeclaration; }
	}

	public final VariableDeclarationContext variableDeclaration() throws RecognitionException {
		VariableDeclarationContext _localctx = new VariableDeclarationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_variableDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(Identifier);
			setState(91);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==OpenBracket) {
				{
				setState(88);
				match(OpenBracket);
				setState(89);
				match(Number);
				setState(90);
				match(CloseBracket);
				}
			}

			setState(95);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==Assign) {
				{
				setState(93);
				match(Assign);
				setState(94);
				value();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class GateDefinitionContext extends ParserRuleContext {
		public TerminalNode Gate() { return getToken(qasm3Parser.Gate, 0); }
		public TerminalNode Identifier() { return getToken(qasm3Parser.Identifier, 0); }
		public QargsListContext qargsList() {
			return getRuleContext(QargsListContext.class,0);
		}
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public ParamsListContext paramsList() {
			return getRuleContext(ParamsListContext.class,0);
		}
		public GateDefinitionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_gateDefinition; }
	}

	public final GateDefinitionContext gateDefinition() throws RecognitionException {
		GateDefinitionContext _localctx = new GateDefinitionContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_gateDefinition);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(97);
			match(Gate);
			setState(98);
			match(Identifier);
			{
			setState(99);
			paramsList();
			}
			setState(100);
			qargsList();
			setState(101);
			match(T__2);
			setState(102);
			expression();
			setState(103);
			match(T__3);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamsListContext extends ParserRuleContext {
		public List<ParamDeclarationContext> paramDeclaration() {
			return getRuleContexts(ParamDeclarationContext.class);
		}
		public ParamDeclarationContext paramDeclaration(int i) {
			return getRuleContext(ParamDeclarationContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(qasm3Parser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(qasm3Parser.Comma, i);
		}
		public ParamsListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramsList; }
	}

	public final ParamsListContext paramsList() throws RecognitionException {
		ParamsListContext _localctx = new ParamsListContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_paramsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(105);
			paramDeclaration();
			setState(110);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(106);
				match(Comma);
				setState(107);
				paramDeclaration();
				}
				}
				setState(112);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ParamDeclarationContext extends ParserRuleContext {
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
		public TerminalNode OpenBracket() { return getToken(qasm3Parser.OpenBracket, 0); }
		public TerminalNode Number() { return getToken(qasm3Parser.Number, 0); }
		public TerminalNode CloseBracket() { return getToken(qasm3Parser.CloseBracket, 0); }
		public TerminalNode Colon() { return getToken(qasm3Parser.Colon, 0); }
		public TerminalNode Identifier() { return getToken(qasm3Parser.Identifier, 0); }
		public ParamDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_paramDeclaration; }
	}

	public final ParamDeclarationContext paramDeclaration() throws RecognitionException {
		ParamDeclarationContext _localctx = new ParamDeclarationContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_paramDeclaration);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			type();
			setState(114);
			match(OpenBracket);
			setState(115);
			match(Number);
			setState(116);
			match(CloseBracket);
			setState(117);
			match(Colon);
			setState(118);
			match(Identifier);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QargsListContext extends ParserRuleContext {
		public List<QargDeclarationContext> qargDeclaration() {
			return getRuleContexts(QargDeclarationContext.class);
		}
		public QargDeclarationContext qargDeclaration(int i) {
			return getRuleContext(QargDeclarationContext.class,i);
		}
		public List<TerminalNode> Comma() { return getTokens(qasm3Parser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(qasm3Parser.Comma, i);
		}
		public QargsListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qargsList; }
	}

	public final QargsListContext qargsList() throws RecognitionException {
		QargsListContext _localctx = new QargsListContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_qargsList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(120);
			qargDeclaration();
			setState(125);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==Comma) {
				{
				{
				setState(121);
				match(Comma);
				setState(122);
				qargDeclaration();
				}
				}
				setState(127);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class QargDeclarationContext extends ParserRuleContext {
		public List<TerminalNode> Identifier() { return getTokens(qasm3Parser.Identifier); }
		public TerminalNode Identifier(int i) {
			return getToken(qasm3Parser.Identifier, i);
		}
		public List<TerminalNode> Comma() { return getTokens(qasm3Parser.Comma); }
		public TerminalNode Comma(int i) {
			return getToken(qasm3Parser.Comma, i);
		}
		public QargDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_qargDeclaration; }
	}

	public final QargDeclarationContext qargDeclaration() throws RecognitionException {
		QargDeclarationContext _localctx = new QargDeclarationContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_qargDeclaration);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(Identifier);
			setState(133);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(129);
					match(Comma);
					setState(130);
					match(Identifier);
					}
					} 
				}
				setState(135);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_expression);
		try {
			enterOuterAlt(_localctx, 1);
			{
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ValueContext extends ParserRuleContext {
		public TerminalNode Number() { return getToken(qasm3Parser.Number, 0); }
		public TerminalNode StringLiteral() { return getToken(qasm3Parser.StringLiteral, 0); }
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_value);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(138);
			_la = _input.LA(1);
			if ( !(_la==StringLiteral || _la==Number) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VarTypeContext extends ParserRuleContext {
		public VarTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_varType; }
	}

	public final VarTypeContext varType() throws RecognitionException {
		VarTypeContext _localctx = new VarTypeContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_varType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__4) | (1L << T__5) | (1L << T__6) | (1L << T__7) | (1L << T__8) | (1L << T__9) | (1L << T__10) | (1L << T__11) | (1L << T__12) | (1L << T__13))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\36\u0091\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3\2"+
		"\7\2%\n\2\f\2\16\2(\13\2\3\2\6\2+\n\2\r\2\16\2,\3\2\3\2\3\3\3\3\3\3\5"+
		"\3\64\n\3\3\3\3\3\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\5\5@\n\5\3\6\3\6\3\6"+
		"\3\6\5\6F\n\6\3\7\3\7\3\7\3\7\3\7\5\7M\n\7\3\7\5\7P\n\7\3\b\3\b\3\b\7"+
		"\bU\n\b\f\b\16\bX\13\b\3\t\3\t\3\t\3\t\5\t^\n\t\3\t\3\t\5\tb\n\t\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\7\13o\n\13\f\13\16\13r\13\13"+
		"\3\f\3\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\7\r~\n\r\f\r\16\r\u0081\13\r"+
		"\3\16\3\16\3\16\7\16\u0086\n\16\f\16\16\16\u0089\13\16\3\17\3\17\3\20"+
		"\3\20\3\21\3\21\3\21\2\2\22\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \2"+
		"\4\4\2\25\25\36\36\3\2\7\20\2\u008d\2\"\3\2\2\2\4\60\3\2\2\2\6\67\3\2"+
		"\2\2\b?\3\2\2\2\nE\3\2\2\2\fG\3\2\2\2\16Q\3\2\2\2\20Y\3\2\2\2\22c\3\2"+
		"\2\2\24k\3\2\2\2\26s\3\2\2\2\30z\3\2\2\2\32\u0082\3\2\2\2\34\u008a\3\2"+
		"\2\2\36\u008c\3\2\2\2 \u008e\3\2\2\2\"&\5\4\3\2#%\5\6\4\2$#\3\2\2\2%("+
		"\3\2\2\2&$\3\2\2\2&\'\3\2\2\2\'*\3\2\2\2(&\3\2\2\2)+\5\b\5\2*)\3\2\2\2"+
		"+,\3\2\2\2,*\3\2\2\2,-\3\2\2\2-.\3\2\2\2./\7\2\2\3/\3\3\2\2\2\60\63\7"+
		"\3\2\2\61\62\7\32\2\2\62\64\7\36\2\2\63\61\3\2\2\2\63\64\3\2\2\2\64\65"+
		"\3\2\2\2\65\66\7\31\2\2\66\5\3\2\2\2\678\7\4\2\289\7\25\2\29:\7\31\2\2"+
		":\7\3\2\2\2;<\5\n\6\2<=\7\31\2\2=@\3\2\2\2>@\5\22\n\2?;\3\2\2\2?>\3\2"+
		"\2\2@\t\3\2\2\2AB\5\f\7\2BC\5\16\b\2CF\3\2\2\2DF\7\22\2\2EA\3\2\2\2ED"+
		"\3\2\2\2F\13\3\2\2\2GO\5 \21\2HI\7\26\2\2IL\7\36\2\2JK\7\33\2\2KM\7\36"+
		"\2\2LJ\3\2\2\2LM\3\2\2\2MN\3\2\2\2NP\7\27\2\2OH\3\2\2\2OP\3\2\2\2P\r\3"+
		"\2\2\2QV\5\20\t\2RS\7\33\2\2SU\5\20\t\2TR\3\2\2\2UX\3\2\2\2VT\3\2\2\2"+
		"VW\3\2\2\2W\17\3\2\2\2XV\3\2\2\2Y]\7\34\2\2Z[\7\26\2\2[\\\7\36\2\2\\^"+
		"\7\27\2\2]Z\3\2\2\2]^\3\2\2\2^a\3\2\2\2_`\7\24\2\2`b\5\36\20\2a_\3\2\2"+
		"\2ab\3\2\2\2b\21\3\2\2\2cd\7\22\2\2de\7\34\2\2ef\5\24\13\2fg\5\30\r\2"+
		"gh\7\5\2\2hi\5\34\17\2ij\7\6\2\2j\23\3\2\2\2kp\5\26\f\2lm\7\33\2\2mo\5"+
		"\26\f\2nl\3\2\2\2or\3\2\2\2pn\3\2\2\2pq\3\2\2\2q\25\3\2\2\2rp\3\2\2\2"+
		"st\5\f\7\2tu\7\26\2\2uv\7\36\2\2vw\7\27\2\2wx\7\30\2\2xy\7\34\2\2y\27"+
		"\3\2\2\2z\177\5\32\16\2{|\7\33\2\2|~\5\32\16\2}{\3\2\2\2~\u0081\3\2\2"+
		"\2\177}\3\2\2\2\177\u0080\3\2\2\2\u0080\31\3\2\2\2\u0081\177\3\2\2\2\u0082"+
		"\u0087\7\34\2\2\u0083\u0084\7\33\2\2\u0084\u0086\7\34\2\2\u0085\u0083"+
		"\3\2\2\2\u0086\u0089\3\2\2\2\u0087\u0085\3\2\2\2\u0087\u0088\3\2\2\2\u0088"+
		"\33\3\2\2\2\u0089\u0087\3\2\2\2\u008a\u008b\3\2\2\2\u008b\35\3\2\2\2\u008c"+
		"\u008d\t\2\2\2\u008d\37\3\2\2\2\u008e\u008f\t\3\2\2\u008f!\3\2\2\2\17"+
		"&,\63?ELOV]ap\177\u0087";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}