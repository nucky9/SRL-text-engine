/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   C:\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IC:\nim-0.18.0\lib -o c:\SRL-text-engine\src\nimcache\stdlib_dynlib.o c:\SRL-text-engine\src\nimcache\stdlib_dynlib.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <windows.h>
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
typedef struct tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw;
typedef struct tyObject_OSError_3XwRQvmzCEOC4QnT706q1g tyObject_OSError_3XwRQvmzCEOC4QnT706q1g;
typedef struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ tySequence_sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
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
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg {
  Exception Sup;
};
struct tyObject_OSError_3XwRQvmzCEOC4QnT706q1g {
  tyObject_SystemError_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
NI32 errorCode;
};
struct tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw {
  tyObject_OSError_3XwRQvmzCEOC4QnT706q1g Sup;
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
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseInvalidLibrary_vniG1MEk2sXRKqmAw0lt4g)(NCSTRING name) __attribute__((noreturn));
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_LIB_PRIVATE N_NIMCALL(void*, checkedSymAddr_fM7lTRTvv9a9axreJA2Bx7jA)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void, libCandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s, tySequence_sM4lkSb7zS6F7OVMvW9cffQ** dest);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, loadLibPattern_WEB1hEy1GGlzZ6WVcUBFGA)(NimStringDesc* pattern, NIM_BOOL global_symbols);
N_LIB_PRIVATE N_NIMCALL(tySequence_sM4lkSb7zS6F7OVMvW9cffQ*, newSeq_9cL6dIz2UWtIh3FeS5x4hxA)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path, NIM_BOOL global_symbols);
N_LIB_PRIVATE N_NIMCALL(void*, loadLib_Z1cxp9aB153T5qRduJpPCFA)(void);
N_LIB_PRIVATE N_NIMCALL(void, unloadLib_Uhnv9b7W8wpT8dy9aV4QNvtg)(void* lib);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib, NCSTRING name);
extern TNimType NTI_TLVXkEbYONqsuh3EtIf38A_;
extern TNimType NTI_F9bh3YCIGu9a7lVBdm5Z1UVw_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_Vbi6rBBOqdMySprhH3iUcg_2, "could not find symbol: ", 23);
STRING_LITERAL(TM_Vbi6rBBOqdMySprhH3iUcg_13, "len(a) == L seq modified while iterating over it", 48);

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

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(398, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(398, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NOINLINE(void, raiseInvalidLibrary_vniG1MEk2sXRKqmAw0lt4g)(NCSTRING name) {
	tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw* e;
	NimStringDesc* T1_;
	NimStringDesc* T2_;
	nimfr_("raiseInvalidLibrary", "dynlib.nim");
	e = (tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw*)0;
	nimln_(35, "dynlib.nim");
	e = (tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw*) newObj((&NTI_TLVXkEbYONqsuh3EtIf38A_), sizeof(tyObject_LibraryError_F9bh3YCIGu9a7lVBdm5Z1UVw));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTI_F9bh3YCIGu9a7lVBdm5Z1UVw_);
	nimln_(36, "dynlib.nim");
	T1_ = (NimStringDesc*)0;
	T2_ = (NimStringDesc*)0;
	T2_ = cstrToNimstr(name);
	T1_ = rawNewString(T2_->Sup.len + 23);
appendString(T1_, ((NimStringDesc*) &TM_Vbi6rBBOqdMySprhH3iUcg_2));
appendString(T1_, T2_);
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.Sup.message), T1_);
	nimln_(37, "dynlib.nim");
	raiseException((Exception*)e, "LibraryError");
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void*, checkedSymAddr_fM7lTRTvv9a9axreJA2Bx7jA)(void* lib, NCSTRING name) {
	void* result;
	nimfr_("checkedSymAddr", "dynlib.nim");
	result = (void*)0;
	nimln_(46, "dynlib.nim");
	result = symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2(lib, name);
	nimln_(47, "dynlib.nim");
	{
		if (!(result == NIM_NIL)) goto LA3_;
		raiseInvalidLibrary_vniG1MEk2sXRKqmAw0lt4g(name);
	}
	LA3_: ;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(250, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(252, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(253, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, libCandidates_z61W6kN39aBKDgNtbcWn9cSg)(NimStringDesc* s, tySequence_sM4lkSb7zS6F7OVMvW9cffQ** dest) {
	NI le;
	NI ri;
	NI TM_Vbi6rBBOqdMySprhH3iUcg_3;
	nimfr_("libCandidates", "dynlib.nim");
	nimln_(51, "dynlib.nim");
	le = nsuFindChar(s, 40, ((NI) 0), ((NI) 0));
	nimln_(52, "dynlib.nim");
	TM_Vbi6rBBOqdMySprhH3iUcg_3 = addInt(le, ((NI) 1));
	ri = nsuFindChar(s, 41, ((NI)chckRange((NI)(TM_Vbi6rBBOqdMySprhH3iUcg_3), ((NI) 0), ((NI) IL64(9223372036854775807)))), ((NI) 0));
	nimln_(53, "dynlib.nim");
	{
		NIM_BOOL T3_;
		NimStringDesc* prefix;
		NI TM_Vbi6rBBOqdMySprhH3iUcg_4;
		NimStringDesc* suffix;
		NI TM_Vbi6rBBOqdMySprhH3iUcg_5;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= le);
		if (!(T3_)) goto LA4_;
		T3_ = (le < ri);
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(54, "dynlib.nim");
		TM_Vbi6rBBOqdMySprhH3iUcg_4 = subInt(le, ((NI) 1));
		prefix = copyStrLast(s, ((NI) 0), (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_4));
		nimln_(55, "dynlib.nim");
		TM_Vbi6rBBOqdMySprhH3iUcg_5 = addInt(ri, ((NI) 1));
		suffix = copyStr(s, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_5));
		{
			NimStringDesc* middle;
			NimStringDesc* colontmp_;
			NI TM_Vbi6rBBOqdMySprhH3iUcg_6;
			NI TM_Vbi6rBBOqdMySprhH3iUcg_7;
			NI last;
			NI splits;
			middle = (NimStringDesc*)0;
			colontmp_ = (NimStringDesc*)0;
			nimln_(56, "dynlib.nim");
			TM_Vbi6rBBOqdMySprhH3iUcg_6 = addInt(le, ((NI) 1));
			TM_Vbi6rBBOqdMySprhH3iUcg_7 = subInt(ri, ((NI) 1));
			colontmp_ = copyStrLast(s, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_6), (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_7));
			nimln_(502, "strutils.nim");
			last = ((NI) 0);
			nimln_(503, "strutils.nim");
			splits = ((NI) -1);
			{
				nimln_(641, "strutils.nim");
				while (1) {
					NI first;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_9;
					NimStringDesc* T18_;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_10;
					NI TM_Vbi6rBBOqdMySprhH3iUcg_11;
					nimln_(505, "strutils.nim");
					nimln_(641, "strutils.nim");
					if (!(last <= (colontmp_ ? colontmp_->Sup.len : 0))) goto LA9;
					nimln_(506, "strutils.nim");
					first = last;
					{
						nimln_(507, "strutils.nim");
						while (1) {
							NIM_BOOL T12_;
							NI TM_Vbi6rBBOqdMySprhH3iUcg_8;
							T12_ = (NIM_BOOL)0;
							nimln_(641, "strutils.nim");
							T12_ = (last < (colontmp_ ? colontmp_->Sup.len : 0));
							if (!(T12_)) goto LA13_;
							nimln_(507, "strutils.nim");
							nimln_(495, "strutils.nim");
							if ((NU)(last) > (NU)(colontmp_->Sup.len)) raiseIndexError();
							T12_ = !(((NU8)(colontmp_->data[last]) == (NU8)(124)));
							LA13_: ;
							if (!T12_) goto LA11;
							nimln_(508, "strutils.nim");
							TM_Vbi6rBBOqdMySprhH3iUcg_8 = addInt(last, ((NI) 1));
							last = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_8);
						} LA11: ;
					}
					nimln_(509, "strutils.nim");
					{
						if (!(splits == ((NI) 0))) goto LA16_;
						nimln_(641, "strutils.nim");
						last = (colontmp_ ? colontmp_->Sup.len : 0);
					}
					LA16_: ;
					nimln_(510, "strutils.nim");
					TM_Vbi6rBBOqdMySprhH3iUcg_9 = subInt(last, ((NI) 1));
					middle = copyStrLast(colontmp_, first, (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_9));
					nimln_(57, "dynlib.nim");
					T18_ = (NimStringDesc*)0;
					T18_ = rawNewString(prefix->Sup.len + middle->Sup.len + suffix->Sup.len + 0);
appendString(T18_, prefix);
appendString(T18_, middle);
appendString(T18_, suffix);
					libCandidates_z61W6kN39aBKDgNtbcWn9cSg(T18_, dest);
					nimln_(511, "strutils.nim");
					{
						if (!(splits == ((NI) 0))) goto LA21_;
						goto LA8;
					}
					LA21_: ;
					nimln_(512, "strutils.nim");
					TM_Vbi6rBBOqdMySprhH3iUcg_10 = subInt(splits, ((NI) 1));
					splits = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_10);
					nimln_(513, "strutils.nim");
					TM_Vbi6rBBOqdMySprhH3iUcg_11 = addInt(last, ((NI) 1));
					last = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_11);
				} LA9: ;
			} LA8: ;
		}
	}
	goto LA1_;
	LA5_: ;
	{
		NI T24_;
		NimStringDesc* T25_;
		nimln_(59, "dynlib.nim");
		(*dest) = (tySequence_sM4lkSb7zS6F7OVMvW9cffQ*) incrSeqV2(&((*dest))->Sup, sizeof(NimStringDesc*));
		T24_ = (*dest)->Sup.len++;
		T25_ = (NimStringDesc*)0;
		T25_ = (*dest)->data[T24_]; (*dest)->data[T24_] = copyStringRC1(s);
		if (T25_) nimGCunrefNoCycle(T25_);
	}
	LA1_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void*, loadLibPattern_WEB1hEy1GGlzZ6WVcUBFGA)(NimStringDesc* pattern, NIM_BOOL global_symbols) {
	void* result;
	tySequence_sM4lkSb7zS6F7OVMvW9cffQ* candidates;
	nimfr_("loadLibPattern", "dynlib.nim");
	result = (void*)0;
	nimln_(65, "dynlib.nim");
	candidates = newSeq_9cL6dIz2UWtIh3FeS5x4hxA(((NI) 0));
	nimln_(66, "dynlib.nim");
	libCandidates_z61W6kN39aBKDgNtbcWn9cSg(pattern, (&candidates));
	{
		NimStringDesc* c;
		NI i;
		NI L;
		NI T2_;
		c = (NimStringDesc*)0;
		nimln_(3805, "system.nim");
		i = ((NI) 0);
		nimln_(3806, "system.nim");
		T2_ = (candidates ? candidates->Sup.len : 0);
		L = T2_;
		{
			nimln_(3807, "system.nim");
			while (1) {
				NI TM_Vbi6rBBOqdMySprhH3iUcg_12;
				if (!(i < L)) goto LA4;
				nimln_(3808, "system.nim");
				if ((NU)(i) >= (NU)(candidates->Sup.len)) raiseIndexError();
				c = candidates->data[i];
				nimln_(68, "dynlib.nim");
				result = loadLib_EFK1MHQsQvQPg5NaJH389bA(c, global_symbols);
				nimln_(69, "dynlib.nim");
				{
					if (!!((result == 0))) goto LA7_;
					goto LA1;
				}
				LA7_: ;
				nimln_(3809, "system.nim");
				TM_Vbi6rBBOqdMySprhH3iUcg_12 = addInt(i, ((NI) 1));
				i = (NI)(TM_Vbi6rBBOqdMySprhH3iUcg_12);
				nimln_(3810, "system.nim");
				{
					NI T11_;
					T11_ = (candidates ? candidates->Sup.len : 0);
					if (!!((T11_ == L))) goto LA12_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_Vbi6rBBOqdMySprhH3iUcg_13));
				}
				LA12_: ;
			} LA4: ;
		}
	} LA1: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void*, loadLib_EFK1MHQsQvQPg5NaJH389bA)(NimStringDesc* path, NIM_BOOL global_symbols) {
	void* result;
	HINSTANCE T1_;
	nimfr_("loadLib", "dynlib.nim");
	result = (void*)0;
	nimln_(120, "dynlib.nim");
	T1_ = (HINSTANCE)0;
	T1_ = LoadLibraryA(path->data);
	result = ((void*) (T1_));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void*, loadLib_Z1cxp9aB153T5qRduJpPCFA)(void) {
	void* result;
	HINSTANCE T1_;
	nimfr_("loadLib", "dynlib.nim");
	result = (void*)0;
	nimln_(122, "dynlib.nim");
	T1_ = (HINSTANCE)0;
	T1_ = LoadLibraryA(NIM_NIL);
	result = ((void*) (T1_));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, unloadLib_Uhnv9b7W8wpT8dy9aV4QNvtg)(void* lib) {
	nimfr_("unloadLib", "dynlib.nim");
	nimln_(123, "dynlib.nim");
	FreeLibrary(((HINSTANCE) (lib)));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void*, symAddr_fM7lTRTvv9a9axreJA2Bx7jA_2)(void* lib, NCSTRING name) {
	void* result;
	nimfr_("symAddr", "dynlib.nim");
	result = (void*)0;
	nimln_(126, "dynlib.nim");
	result = GetProcAddress(((HINSTANCE) (lib)), name);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void) {
	nimfr_("dynlib", "dynlib.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void) {
}

