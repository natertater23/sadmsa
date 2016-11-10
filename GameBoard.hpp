//
//  GameBoard.hpp
//

#pragma once

#include <stdexcept>

#include "ExtendableVector.h"

const int OUTSIDE_BOARD = -1;
const int BOARD_SIZE = 101;

class GameBoard {
public:   
   //enum Ladders { ONE = 1, FOUR = 4, NINE = 9, TWENTY_ONE = 21, TWENTY_EIGHT = 28, THIRTY_SIX = 36, FIFTY_ONE = 51, SEVENTY_ONE = 71, EIGHTY = 80 };
   
  // enum Chutes { SIXTEEN = 16, FORTY_SEVEN = 47, FORTY_NINE = 49, FIFTY_SIX = 56, SIXTY_TWO = 62, SIXTY_FOUR = 64, EIGHTY_SEVEN = 87, NINETY_THREE = 93, NINETY_FIVE = 95, NINETY_EIGHT = 98 };
   
   // Build the gameboard
   // TO DO: implement this function
   void buildBoard(){
      
      
      
   }
   
   GameBoard() {
      // TODO: implement this function properly
      buildboard();
      //throw std::logic_error("not implemented yet");
   }
   
   // If player lands on chutes or ladders, returns the new position.
   // Otherwise, returns the player's current position.
   // If the player's position is outside of the gameboard, throws index out of bounds exception
   // TO DO: implement this function properly
   int checkChutesLadders(int position) {
      if ((position < 0) || (position >= BOARD_SIZE)) {
         throw range_error("index out of bounds");
      }
     for(int i = 0;i<ladders.size();i++){
      if(ladders.at(i)==position)
         return laddersTo.at(i);
     }
       for(int i = 0;i<chutes.size();i++){
      if(chutes.at(i)==position)
         return chutesTo.at(i);
     }
      
         
     
      // TODO: implement this function properly
      //throw std::logic_error("not implemented yet");
   }
   
private:
   // TO DO: add storage for squares including square of chutes and ladders
   // Requirement: use ExtendableVector to store the square
   ExtendableVector<int> ladders = {1,4,9,21,28,36,51,71,80};//where the ladders are at
   ExtendableVector<int> laddersTo = {38,14,31,42,84,44,67,91,100};//where these ladders lead to, index's align
   ExtendableVector<int> chutes = {16,47,49,56,62,64,87,93,95,98};
   ExtendableVector<int> chutesTo = {6,26,11,53,19,60,24,73,75,78};
   //ExtendableVector<int> gameVector;//board ? 
   //for(int i = 0;i < 100 ; i++){
   ///gameVector.insert(0,i+1);
   //}//creates Vector with nums 1-100, representing the Gameboard ? do we need this ?
      
};
