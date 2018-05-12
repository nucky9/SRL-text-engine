/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\nim-0.18.0\lib -o c:\SRL-text-engine\src\nimcache\stdlib_macros.o c:\SRL-text-engine\src\nimcache\stdlib_macros.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_LineInfo_iaJhdGB5Q2GppYhH0fz7tg tyObject_LineInfo_iaJhdGB5Q2GppYhH0fz7tg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ[20];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_LineInfo_iaJhdGB5Q2GppYhH0fz7tg {
NimStringDesc* filename;
NI line;
NI column;
};
typedef NU8 tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__Yy6vNPknrxyp1xFe9a5mM3g)(tyObject_LineInfo_iaJhdGB5Q2GppYhH0fz7tg arg);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA)(NCSTRING a, NCSTRING b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_CHAR, toLower_Fwx7k03EYImpkyEMwVKBpAmacros)(NIM_CHAR c);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(NI, subInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqIdent_4oBKY2udrWe85yjP9cRPFEw)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, max_NcLV09a9aAV9a73H2DkHZVFpQ)(NIM_CHAR* x, NI xLen_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__vQky4Id9aQQanEihYvDcSMg)(tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString_EVMQfsPEOTh38FED2tyJjQ)(tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted_4qH6t7qLgQaPiLcNrFLAxg)(NimStringDesc** s, tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ x);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_;
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ nnkLiterals_9bhEkB9cFodk9cxRUKKgtz1BA = {
0xE0, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ nnkCallKinds_AghZgUfleRQoWZNdKFsmJw = {
0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ nnkPragmaCallKinds_OjXjFcaW9anpC1hvD5L3zhw = {
0x00, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_rY22sBfKo26xl9aV6GtFfSg_2, "(", 1);
STRING_LITERAL(TM_rY22sBfKo26xl9aV6GtFfSg_3, ", ", 2);
STRING_LITERAL(TM_rY22sBfKo26xl9aV6GtFfSg_4, ")", 1);
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ RoutineNodes_QLKlhF4hHbMN9cxu6xm0mcg = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
0x00, 0x80, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x80}
;
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ AtomicNodes_Rq0ynG1tdFv1swPPc9cZhcg = {
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
NIM_CONST tySet_tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ CallNodes_KO9ajNLR9bDAAwecb5g9aCOiA = {
0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__Yy6vNPknrxyp1xFe9a5mM3g)(tyObject_LineInfo_iaJhdGB5Q2GppYhH0fz7tg arg) {
	NimStringDesc* result;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	NimStringDesc* T3_;
	nimfr_("$", "macros.nim");
	result = (NimStringDesc*)0;
	nimln_(345, "macros.nim");
	T1_ = (NimStringDesc*)0;
	T2_ = (NimStringDesc*)0;
	T2_ = nimIntToStr(arg.line);
	T3_ = (NimStringDesc*)0;
	T3_ = nimIntToStr(arg.column);
	T1_ = rawNewString(arg.filename->Sup.len + T2_->Sup.len + T3_->Sup.len + 4);
appendString(T1_, arg.filename);
appendString(T1_, ((NimStringDesc*) &TM_rY22sBfKo26xl9aV6GtFfSg_2));
appendString(T1_, T2_);
appendString(T1_, ((NimStringDesc*) &TM_rY22sBfKo26xl9aV6GtFfSg_3));
appendString(T1_, T3_);
appendString(T1_, ((NimStringDesc*) &TM_rY22sBfKo26xl9aV6GtFfSg_4));
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_CHAR, toLower_Fwx7k03EYImpkyEMwVKBpAmacros)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr_("toLower", "macros.nim");
	result = (NIM_CHAR)0;
	nimln_(1136, "macros.nim");
	{
		NI TM_rY22sBfKo26xl9aV6GtFfSg_7;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		TM_rY22sBfKo26xl9aV6GtFfSg_7 = addInt(((NU8)(c)), ((NI) 32));
		result = ((NIM_CHAR) (((NI)chckRange((NI)(TM_rY22sBfKo26xl9aV6GtFfSg_7), ((NI) 0), ((NI) 255)))));
	}
	goto LA1_;
	LA3_: ;
	{
		nimln_(1137, "macros.nim");
		result = c;
	}
	LA1_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA)(NCSTRING a, NCSTRING b) {
	NI result;
	NI i;
	NI j;
	nimfr_("cmpIgnoreStyle", "macros.nim");
{	result = (NI)0;
	nimln_(1138, "macros.nim");
	i = ((NI) 0);
	nimln_(1139, "macros.nim");
	j = ((NI) 0);
	nimln_(1141, "macros.nim");
	{
		nimln_(398, "system.nim");
		nimln_(1141, "macros.nim");
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		nimln_(1142, "macros.nim");
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_8;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_9;
			NI TM_rY22sBfKo26xl9aV6GtFfSg_10;
			{
				nimln_(1143, "macros.nim");
				while (1) {
					NI TM_rY22sBfKo26xl9aV6GtFfSg_5;
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					TM_rY22sBfKo26xl9aV6GtFfSg_5 = addInt(i, ((NI) 1));
					i = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_5);
				} LA8: ;
			}
			{
				nimln_(1144, "macros.nim");
				while (1) {
					NI TM_rY22sBfKo26xl9aV6GtFfSg_6;
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					TM_rY22sBfKo26xl9aV6GtFfSg_6 = addInt(j, ((NI) 1));
					j = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_6);
				} LA10: ;
			}
			nimln_(1145, "macros.nim");
			aa = toLower_Fwx7k03EYImpkyEMwVKBpAmacros(a[i]);
			nimln_(1146, "macros.nim");
			bb = toLower_Fwx7k03EYImpkyEMwVKBpAmacros(b[j]);
			nimln_(1147, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_8 = subInt(((NU8)(aa)), ((NU8)(bb)));
			result = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_8);
			nimln_(1148, "macros.nim");
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				nimln_(398, "system.nim");
				nimln_(1148, "macros.nim");
				T13_ = !((result == ((NI) 0)));
				if (T13_) goto LA14_;
				T13_ = ((NU8)(aa) == (NU8)(0));
				LA14_: ;
				if (!T13_) goto LA15_;
				goto LA5;
			}
			LA15_: ;
			nimln_(1149, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_9 = addInt(i, ((NI) 1));
			i = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_9);
			nimln_(1150, "macros.nim");
			TM_rY22sBfKo26xl9aV6GtFfSg_10 = addInt(j, ((NI) 1));
			j = (NI)(TM_rY22sBfKo26xl9aV6GtFfSg_10);
		}
	} LA5: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqIdent_4oBKY2udrWe85yjP9cRPFEw)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("eqIdent", "macros.nim");
	result = (NIM_BOOL)0;
	nimln_(1152, "macros.nim");
	T1_ = (NI)0;
	T1_ = cmpIgnoreStyle_qMUI9c5RdcsOHtRhn2D7HqA(a->data, b->data);
	result = (T1_ == ((NI) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void) {
	nimfr_("macros", "macros.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void) {
static TNimNode* TM_rY22sBfKo26xl9aV6GtFfSg_11[160];
NI TM_rY22sBfKo26xl9aV6GtFfSg_13;
static char* NIM_CONST TM_rY22sBfKo26xl9aV6GtFfSg_12[160] = {
"nnkNone", 
"nnkEmpty", 
"nnkIdent", 
"nnkSym", 
"nnkType", 
"nnkCharLit", 
"nnkIntLit", 
"nnkInt8Lit", 
"nnkInt16Lit", 
"nnkInt32Lit", 
"nnkInt64Lit", 
"nnkUIntLit", 
"nnkUInt8Lit", 
"nnkUInt16Lit", 
"nnkUInt32Lit", 
"nnkUInt64Lit", 
"nnkFloatLit", 
"nnkFloat32Lit", 
"nnkFloat64Lit", 
"nnkFloat128Lit", 
"nnkStrLit", 
"nnkRStrLit", 
"nnkTripleStrLit", 
"nnkNilLit", 
"nnkComesFrom", 
"nnkDotCall", 
"nnkCommand", 
"nnkCall", 
"nnkCallStrLit", 
"nnkInfix", 
"nnkPrefix", 
"nnkPostfix", 
"nnkHiddenCallConv", 
"nnkExprEqExpr", 
"nnkExprColonExpr", 
"nnkIdentDefs", 
"nnkVarTuple", 
"nnkPar", 
"nnkObjConstr", 
"nnkCurly", 
"nnkCurlyExpr", 
"nnkBracket", 
"nnkBracketExpr", 
"nnkPragmaExpr", 
"nnkRange", 
"nnkDotExpr", 
"nnkCheckedFieldExpr", 
"nnkDerefExpr", 
"nnkIfExpr", 
"nnkElifExpr", 
"nnkElseExpr", 
"nnkLambda", 
"nnkDo", 
"nnkAccQuoted", 
"nnkTableConstr", 
"nnkBind", 
"nnkClosedSymChoice", 
"nnkOpenSymChoice", 
"nnkHiddenStdConv", 
"nnkHiddenSubConv", 
"nnkConv", 
"nnkCast", 
"nnkStaticExpr", 
"nnkAddr", 
"nnkHiddenAddr", 
"nnkHiddenDeref", 
"nnkObjDownConv", 
"nnkObjUpConv", 
"nnkChckRangeF", 
"nnkChckRange64", 
"nnkChckRange", 
"nnkStringToCString", 
"nnkCStringToString", 
"nnkAsgn", 
"nnkFastAsgn", 
"nnkGenericParams", 
"nnkFormalParams", 
"nnkOfInherit", 
"nnkImportAs", 
"nnkProcDef", 
"nnkMethodDef", 
"nnkConverterDef", 
"nnkMacroDef", 
"nnkTemplateDef", 
"nnkIteratorDef", 
"nnkOfBranch", 
"nnkElifBranch", 
"nnkExceptBranch", 
"nnkElse", 
"nnkAsmStmt", 
"nnkPragma", 
"nnkPragmaBlock", 
"nnkIfStmt", 
"nnkWhenStmt", 
"nnkForStmt", 
"nnkParForStmt", 
"nnkWhileStmt", 
"nnkCaseStmt", 
"nnkTypeSection", 
"nnkVarSection", 
"nnkLetSection", 
"nnkConstSection", 
"nnkConstDef", 
"nnkTypeDef", 
"nnkYieldStmt", 
"nnkDefer", 
"nnkTryStmt", 
"nnkFinally", 
"nnkRaiseStmt", 
"nnkReturnStmt", 
"nnkBreakStmt", 
"nnkContinueStmt", 
"nnkBlockStmt", 
"nnkStaticStmt", 
"nnkDiscardStmt", 
"nnkStmtList", 
"nnkImportStmt", 
"nnkImportExceptStmt", 
"nnkExportStmt", 
"nnkExportExceptStmt", 
"nnkFromStmt", 
"nnkIncludeStmt", 
"nnkBindStmt", 
"nnkMixinStmt", 
"nnkUsingStmt", 
"nnkCommentStmt", 
"nnkStmtListExpr", 
"nnkBlockExpr", 
"nnkStmtListType", 
"nnkBlockType", 
"nnkWith", 
"nnkWithout", 
"nnkTypeOfExpr", 
"nnkObjectTy", 
"nnkTupleTy", 
"nnkTupleClassTy", 
"nnkTypeClassTy", 
"nnkStaticTy", 
"nnkRecList", 
"nnkRecCase", 
"nnkRecWhen", 
"nnkRefTy", 
"nnkPtrTy", 
"nnkVarTy", 
"nnkConstTy", 
"nnkMutableTy", 
"nnkDistinctTy", 
"nnkProcTy", 
"nnkIteratorTy", 
"nnkSharedTy", 
"nnkEnumTy", 
"nnkEnumFieldDef", 
"nnkArglist", 
"nnkPattern", 
"nnkReturnToken", 
"nnkClosure", 
"nnkGotoState", 
"nnkState", 
"nnkBreakState", 
"nnkFuncDef"};
static TNimNode TM_rY22sBfKo26xl9aV6GtFfSg_0[161];
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.size = sizeof(tyEnum_NimNodeKind_4lLLxwA63qqrtZ4Xqlg9bRQ);
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.kind = 14;
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.base = 0;
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.flags = 3;
for (TM_rY22sBfKo26xl9aV6GtFfSg_13 = 0; TM_rY22sBfKo26xl9aV6GtFfSg_13 < 160; TM_rY22sBfKo26xl9aV6GtFfSg_13++) {
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_13+0].kind = 1;
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_13+0].offset = TM_rY22sBfKo26xl9aV6GtFfSg_13;
TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_13+0].name = TM_rY22sBfKo26xl9aV6GtFfSg_12[TM_rY22sBfKo26xl9aV6GtFfSg_13];
TM_rY22sBfKo26xl9aV6GtFfSg_11[TM_rY22sBfKo26xl9aV6GtFfSg_13] = &TM_rY22sBfKo26xl9aV6GtFfSg_0[TM_rY22sBfKo26xl9aV6GtFfSg_13+0];
}
TM_rY22sBfKo26xl9aV6GtFfSg_0[160].len = 160; TM_rY22sBfKo26xl9aV6GtFfSg_0[160].kind = 2; TM_rY22sBfKo26xl9aV6GtFfSg_0[160].sons = &TM_rY22sBfKo26xl9aV6GtFfSg_11[0];
NTI_4lLLxwA63qqrtZ4Xqlg9bRQ_.node = &TM_rY22sBfKo26xl9aV6GtFfSg_0[160];
}

