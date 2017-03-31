#include "ofApp.h"

float start_x[1000];
float start_y[1000];
float end_x[1000];
float end_y[1000];
 int i;//[質]別にグローバル変数（？）でいいよね？

int red[768];
int green[768];
int blue[768];
          

//--------------------------------------------------------------
void ofApp::setup(){
   
    ofBackground(0,0,0);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    //ofSetColor(31, 127,255,127);
    ofSetCircleResolution(64);
    ofSetLineWidth(2);
   
    
    
 //   for (i=0; i<1000; i++) {
    //     x[i] = ofRandom(0/*最小値*/,ofGetWidth()/*最大値*/);
    //y[i]= ofRandom(0, ofGetHeight()); //y座標
    //    r[i] = ofRandom(10, 40);
    //}

    /*
    for (i=0; i<1000; i++) {
        start_x[i] = ofRandom(0,ofGetWidth());
        start_y[i] = ofRandom(0,ofGetHeight());
        start_x[i] = ofRandom(0,ofGetWidth());
        start_y[i] = ofRandom(0,ofGetHeight());
    }
*/
    
    for (i=0; i<768; i++) {
        red[i] = ofRandom(0,255);
        green[i] = ofRandom(0,255);
        blue[i]=ofRandom(0, 255);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    /*
     
     //いろんな図形
     
  ofSetColor(242, 242,242 ,127);
    ofLine(100,300,800,500);//(x1,y1,x2,y2);
    
      ofSetColor(242, 204, 47,127 );
    ofRect(200,250,150,200);
    
       ofSetColor(174, 221, 60 );
    ofCircle(450,300,60);
    
        ofSetColor(116, 193, 206 );
    ofEllipse(550, 500, 200, 100);
    
         ofSetColor(211, 24, 24 );
    ofTriangle(700, 200, 550, 400, 750, 300);
     
     */
   
    
    /*
     //for文で連続処理
     
    float x ;
    float y ;
    float r;
    int i;
    
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    r=30;
    
    
    
     for(i=0;i<50; i++){
         x=x+2;
         y=y+3;
        r=r+4;
         ofCircle(x, y, r);

    }

     */
    
    
    /*
     //何やこれ
     
    float x;
    float y;
    float w;
    float h;
    int i,j;
    
    w = ofGetWidth()/30+1;
    h = ofGetHeight()/20+1;
    x = 0;
    y = 0;
    
    for(j=0; j<20;j++){
        for(i=0; i<300; i++) {
        ofSetColor(225/20*j, 127, 255/30*i,127);
        x = ofGetWidth()/30 * i;
        y=ofGetHeight()/20*j;
        ofRect(x,y,w,h);
    }
    
  }
    
    
  */
    
 //   float x[4];//x0,x1,x2,x3の4つの変数が作成される
  //  float y[4];
   
    
    /*
     変数の説明
     ほおー
    int multi_three[100];
    for (int i=0; i<100; i++) {
        multi_three[i]=i*3;
    }
     
     */
    
  /*
    
    ofSetColor(31, 63, 255, 63);
    for (i=0; i<1000; i++) {
        ofLine(start_x[i], start_y[i], end_x[i],end_y[i]);
    }
  
    */
    
   
    for (i=0; i<768; i++) {
        ofSetColor(red[i], green[i], blue[i]);
        ofLine(0, i, ofGetWidth(), i);
    }
    
    //2-6まで進んだ
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
