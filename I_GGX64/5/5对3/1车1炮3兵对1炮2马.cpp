#ifndef END_my_m_MT_R_1che1pao3pawn_B_1pao2ma
#define END_my_m_MT_R_1che1pao3pawn_B_1pao2ma
#include "..\\..\\chess.h"
#include "..\\..\\preGen.h"
 
#include "..\\..\\endgame\mat.h"
#include "1��1��3����1��2��.cpp"
#include "..\\..\\white.h"
#else
#include "..\\..\\black.h"
#endif 

void my_m_MT_R_1che1pao3pawn_B_1pao2ma(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[your_shi_num]);
}

//void m_MT_B_1che1pao3pawn_R_1pao2ma(typePOS &POSITION, EvalInfo &ei){
///*
//
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	//for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//	//	if(StoY(from) > StoY(bk)){
//	//		board->mulScore += ADD_2CheXPawn_2Che1Pawn_ByShi[board->B_shi];
//	//	}
//	//}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_ChePaoXPawn_To_1Pao2Ma_ByPawn[board->R_shi];
//		}
//	}
//
//
//
//	*/
//}