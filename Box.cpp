#include "Box.h"

// Implement setters and getters
void Box::setLength(int bLength){
  length=bLength;
}

void Box::setWidth(int bWidth){
  width=bWidth;
}

void Box::setHeight(int bHeight){
  height=bHeight;
}


int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width;
}

int Box::getHeight(){
  return height;
}


// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return (length*width*height);
}
