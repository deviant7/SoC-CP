#include<simplecpp>
bool z(int x1,int y1,int x2,int y2){
if((y2-y1)/(x2-x1)!=1 &&(y2-y1)/(x2-x1)!= -1)return true;
else return false;
}

main_program{
initCanvas("chessboard",600,600);
float i=25,j=25;
int n=0;
bool v=true;

repeat(8){
repeat(8){
Rectangle s(100+i,100+j,50,50) ;
s.imprint();
s.setFill(v);
if ((i ==25 && (j==25 ||j==125||j==225||j==325))|| (i ==125 && (j==25 ||j==125||j==225||j==325)) || (i ==225 && (j==25 ||j==125||j==225||j==325)) || (i ==325 && (j==25 ||j==125||j==225||j==325))) s.setColor(COLOR("blue"));
else if ((i ==75 && (j==75 ||j==175||j==275||j==375))|| (i ==175 && (j==75 ||j==175||j==275||j==375)) || (i ==275 && (j==75 ||j==175||j==275||j==375)) || (i ==375 && (j==75 ||j==175||j==275||j==375))) s.setColor(COLOR("blue"));
else if( !(((i ==25 && (j==25 ||j==125||j==225||j==325))|| (i ==125 && (j==25 ||j==125||j==225||j==325)) || (i ==225 && (j==25 ||j==125||j==225||j==325)) || (i ==325 && (j==25 ||j==125||j==225||j==325)) )  ||((i ==75 && (j==75 ||j==175||j==275||j==375))|| (i ==175 && (j==75 ||j==175||j==275||j==375)) || (i ==275 && (j==75 ||j==175||j==275||j==375)) || (i ==375 && (j==75 ||j==175||j==275||j==375)))   )    ) s.setColor(COLOR("red"));
i += 50;
s.imprint();
}
i=25;
j += 50;
}

cout<<"now lets find such arrangements:";
/*int i1,j1,i2,j2,i3,j3,i4,j4,i5,j5,i6,j6,i7,j7,i8,j8,n=0;
i1=j1=i2=j2=i3=j3=i4=j4=i5=j5=i6=j6=i7=j7=i8=j8=0;*/


 // for(int i1=25;i1<=375;i1+=50){
   for(int i1=25,j1=25;j1<=375;j1+=50){
 //    for(int i2=25;i2<=375;i2+=50){
   for(int i2=75,j2=25;j2<=375;j2+=50){
 //    for(int i3=25;i3<=375;i3+=50){
     for(int i3=125,j3=25;j3<=375;j3+=50){
 //  for(int i4=25;i4<=375;i4+=50){
     for(int i4=175,j4=25;j4<=375;j4+=50){
 //     for(int i5=25;i5<=375;i5+=50){
   for(int i5=225,j5=25;j5<=375;j5+=50){
 //      for(int i6=25;i6<=375;i6+=50){
        for(int i6=275,j6=25;j6<=375;j6+=50){
 //  for(int i7=25;i7<=375;i7+=50){
        for(int i7=325,j7=25;j7<=375;j7+=50){
 //  for(int i8=25;i8<=375;i8+=50){
         for(int i8=375,j8=25;j8<=375;j8+=50){
 Circle q1(100+i1,100+j1,10), q2(100+i2,100+j2,10), q3(100+i3,100+j3,10), q4(100+i4,100+j4,10),q5(100+i5,100+j5,10),q6(100+i6,100+j6,10),q7(100+i7,100+j7,10),q8(100+i8,100+j8,10);

    if(!(i1==i2||i1==i3||i1==i4||i1==i5||i1==i6||i1==i7||i1==i8||i2==i3||i2==i4||i2==i5||i2==i6||i2==i7||i2==i8||i3==i4||
    i3==i5||i3==i6||i3==i7||i3==i8||i4==i5||i4==i6||i4==i7||i4==i8||i5==i6||i5==i7||i5==i8||i6==i7||i6==i8||i7==i8)&&
    !(j1==j2||j1==j3||j1==j4||j1==j5||j1==j6||j1==j7||j1==j8||j2==j3||j2==j4||j2==j5||j2==j6||j2==j7||j2==j8||j3==j4||
    j3==j5||j3==j6||j3==j7||j3==j8||j4==j5||j4==j6||j4==j7||j4==j8||j5==j6||j5==j7||j5==j8||j6==j7||j6==j8||j7==j8)
    &&z(i1,j1,i2,j2)&&z(i1,j1,i3,j3)&&z(i1,j1,i4,j4)&&z(i1,j1,i5,j5)&&z(i1,j1,i6,j6)&&z(i1,j1,i7,j7)&&z(i1,j1,i8,j8)&&
    z(i2,j2,i3,j3)&&z(i2,j2,i4,j4)&&z(i2,j2,i5,j5)&&z(i2,j2,i6,j6)&&z(i2,j2,i7,j7)&&z(i2,j2,i8,j8)&&z(i3,j3,i4,j4)&&
    z(i3,j3,i5,j5)&&z(i3,j3,i6,j6)&&z(i3,j3,i7,j7)&&z(i3,j3,i8,j8)&&z(i4,j4,i5,j5)&&z(i4,j4,i6,j6)&&z(i4,j4,i7,j7)&&
    z(i4,j4,i8,j8)&&z(i5,j5,i6,j6)&&z(i5,j5,i7,j7)&&z(i5,j5,i8,j8)&&z(i6,j6,i7,j7)&&z(i6,j6,i8,j8)&&z(i7,j7,i8,j8))

    { q1.reset(100+i1,100+j1,10);q2.reset(100+i2,100+j2,10);q3.reset(100+i3,100+j3,10);q4.reset(100+i4,100+j4,10);
    q5.reset(100+i5,100+j5,10);q6.reset(100+i6,100+j6,10);q7.reset(100+i7,100+j7,10);q8.reset(100+i8,100+j8,10);
    wait(10);n++;cout<<"one arrangement found"<<endl;}

  }
  }
  }
  }
  }
  }
  }
  }
  cout<<"Total no of such arrangements:"<<n;


getClick();
}

