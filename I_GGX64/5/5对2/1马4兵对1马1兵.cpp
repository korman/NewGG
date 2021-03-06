#ifndef END_my_m_MT_R_1ma4pawn_B_1ma1pawn
#define END_my_m_MT_R_1ma4pawn_B_1ma1pawn
#include "..\\..\\chess.h"
#include "..\\..\\preGen.h"
 
#include "..\\..\\endgame\mat.h"
#include "1马4兵对1马1兵.cpp"
#include "..\\..\\white.h"
#else
#include "..\\..\\black.h"
#endif 



//1马5兵对马兵
void my_m_MT_R_1ma4pawn_B_1ma1pawn(typePOS &POSITION, EvalInfo &ei){

	Square yk = your_king_pos;
	Square mk = my_king_pos;
	// ADD
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	MY_EV_ADD((sint16)count_1s(bmp) * ADD_MaPawn_To_MaPawnByShi[your_shi_num]);
	// SUB
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(my_king_pos)]);
	MY_EV_SUB((sint16)count_1s(ymp) * ADD_MaPawn_To_MaPawnByShi[my_shi_num]);

	Square ypawn = S90_from_piecelist(POSITION,your_pawn,0);
	if(StoY(ypawn) MY_LARGE_EQL StoY(mk)){
		MY_EV_ADD(64);
		MY_EV_ADD(EV_MY_CAN * 32);
		if(abs(StoX(ypawn) - StoX(mk)) >= 2){
			MY_EV_ADD(EV_MY_CAN * 32);
		}
	}
}

//1马5兵对马兵
//void m_MT_B_1ma4pawn_R_1ma1pawn(typePOS &POSITION, EvalInfo &ei){
///*
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//	
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_MaPawn_To_MaPawnByShi[board->B_shi];
//		}
//	}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_MaPawn_To_MaPawnByShi[board->R_shi];
//		}
//	}
//
//	*/
//}