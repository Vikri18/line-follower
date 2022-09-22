//sensor
#define SENSOR_kananA A0 //paling kanan
#define SENSOR_kananB A1
#define SENSOR_tengah A2
#define SENSOR_kiriB A3
#define SENSOR_kiriA A4 //paling kiri

//motor dc
#define kananSpeed 11
#define kananA 10
#define kananB 9
#define kiriSpeed 6
#define kiriA 7
#define kiriB 8

int count = 0;
boolean simpangan = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); //kecepatan komunikasi ke arduino
  //mode pin sensor
  pinMode(SENSOR_kananA, INPUT);
  pinMode(SENSOR_kananB, INPUT);
  pinMode(SENSOR_tengah, INPUT);
  pinMode(SENSOR_kiriB, INPUT);
  pinMode(SENSOR_kiriA, INPUT);

  //motor dc
  pinMode(kananSpeed, OUTPUT);
  pinMode(kananA, OUTPUT);
  pinMode(kananB, OUTPUT);
  pinMode(kiriSpeed, OUTPUT);
  pinMode(kiriA, OUTPUT);
  pinMode(kiriB, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int nilai_s1 = analogRead(SENSOR_kananA);
  int nilai_s2 = analogRead(SENSOR_kananB);
  int nilai_s3 = analogRead(SENSOR_tengah);
  int nilai_s4 = analogRead(SENSOR_kiriB);
  int nilai_s5 = analogRead(SENSOR_kiriA);

  //test nilai sensor
  Serial.print("sensor kanan 1: ");
  Serial.print(nilai_s1);
  Serial.print("\t");
  Serial.print("sensor 2: ");
  Serial.print(nilai_s2);
  Serial.print("\t");
  Serial.print("sensor 3: ");
  Serial.print(nilai_s3);
  Serial.print("\t");
  Serial.print("sensor 4: ");
  Serial.print(nilai_s4);
  Serial.print("\t");
  Serial.print("sensor 5: ");
  Serial.println(nilai_s5);
  //delay(100);



  //  maju();
  //  delay(2000);
  //  mundur();
  //  delay(2000);
  //  belok_kanan();
  //  delay(1500);
  //  belok_kiri();
  //  delay(1500);


  //  if( (nilai_s2<400) && (nilai_s3<300)  )
  //  {
  //    belok_kanan();
  //
  //  }else if(  nilai_s2<200  )
  //  {
  //    belok_kanan_dikit();
  //
  //  }else if( (nilai_s4<400) && (nilai_s3<300) ){
  //    belok_kiri();
  //
  //  }else if( nilai_s4<200){
  //    belok_kiri_dikit();
  //
  //  } else if((nilai_s2>400)&&(nilai_s3 <300)&& (nilai_s4>400))
  //  {
  //    maju();
  //
  //  }else if ((nilai_s3 >300) && (nilai_s2>469) && (nilai_s4>500) )
  //  {
  //    mundur();
  //
  //  }


  //.........................................................

  // if( (nilai_s2<400) && (nilai_s3<300)  ) {
  //    belok_kanan();
  //
  //  }else if(  nilai_s2<200  ) {
  //    belok_kanan();
  //
  //  }else if(  (nilai_s1<800)&&(nilai_s2<200)  ) {
  //    belok_kanan();
  //
  //  }else if(  nilai_s1<800  )  {
  //    belok_kanan();
  //
  //  }else if( (nilai_s4<400) && (nilai_s3<300) ){
  //    belok_kiri();
  //
  //  }else if( nilai_s4<200){
  //    belok_kiri();
  //
  //  }else if( nilai_s5<800){
  //    belok_kiri();
  //
  //  }else if( (nilai_s4<200)&&(nilai_s5<800) ){
  //    belok_kiri();
  //
  //  } else if((nilai_s2>400)&&(nilai_s3 <300)&&(nilai_s4>400)) {
  //    maju();
  //
  //  }else if( (nilai_s1>800)&&(nilai_s3 >300)&&(nilai_s2>469)&&(nilai_s4>500)&&(nilai_s5>800 ) ) {
  //    mundur();
  //
  //  }




  //kena hitam
  //s1 <400
  //s2 <290
  //s3 <150
  //s4 <200
  //s5 <200

  //kena putih
  //s1 970++
  //s2 700++//
  //s3 680 ++
  //s4 578 ++ //515
  //s5 950++

  int s1 = 550;
  int s2 = 350;
  int s3 = 250;
  int s4 = 300;
  int s5 = 400;

  //  if((nilai_s1>s1)&&(nilai_s2<s2)&&(nilai_s3 <s3)&&(nilai_s4<s4)&&(nilai_s5>s5 )) { // jika 3 sensor tengah kena hitam
  //    maju();
  //
  //  }else if((nilai_s1>s1)&&(nilai_s2>s2)&&(nilai_s3 <s3)&&(nilai_s4>s4)&&(nilai_s5>s5 )) { // jika sensor tengah / 3 kena hitam
  //    maju();
  //
  //  }else if( (nilai_s1>s1)&&(nilai_s3 >s3)&&(nilai_s2>s2)&&(nilai_s4>s4)&&(nilai_s5>s5 ) ) {  //jika semua sensor kena putih
  //    mundur();
  //
  //  }else if( (nilai_s1>s1)&&  (nilai_s2<s2) && (nilai_s3<s3)   &&(nilai_s4>s4)&&(nilai_s5>s5)  ) {  //jika sensor 2(kanan) & 3(tengah) kena hitam
  //    belok_kanan();
  //
  //  }else if(  (nilai_s1<s1)&&(nilai_s2<s2)    &&(nilai_s3 >s3) &&(nilai_s4>s4)&&(nilai_s5>s5 ) ) {  // jika sensor 1 dan 2 kena hitam
  //    belok_kanan();
  //
  //  }else if( (nilai_s1>s1)&&(nilai_s2>s2)&&    (nilai_s4<s4) && (nilai_s3<s3 )   &&(nilai_s5>s5 ) ){ // jika sensor 3(tengah) dan sensor 4 kena hitam
  //    belok_kiri();
  //
  //  }else if( (nilai_s1>s1)&&(nilai_s2>s2)&&(nilai_s3 >s3)&&      (nilai_s4<s4)&&(nilai_s5<s5) ){ // jika sensor 4 dan 5(kiri) kena hitam
  //    belok_kiri();
  //
  //  }else if(  nilai_s2<s2  ) {
  //    belok_kanan();
  //
  //  }else if(  nilai_s1<s1  )  {
  //    belok_kanan();
  //
  //  }else if( nilai_s4<s4){
  //    belok_kiri();
  //
  //  }else if( nilai_s5<s5){
  //    belok_kiri();
  //
  //  }



  //=====================================================================================================================

  if ((nilai_s2<s2)&&(nilai_s3<s3)&&(nilai_s4<s4)) { //jika sensor 2,3,4 kena hitam/simpangan, maka count + 1
    if (!simpangan) {
      count = count + 1;
    }

    simpangan = true;
  } else {
    simpangan = false;
  }

  if (count < 1) {
    //kondisi maju belok mundur
    if (nilai_s3 < s3) { // jika 3 sensor tengah kena hitam
      maju();

    } else if ((nilai_s1 > s1) &&   (nilai_s2 < s2) && (nilai_s3 < s3)  && (nilai_s4 > s4) && (nilai_s5 > s5) ) { //jika sensor 2(kanan) & 3(tengah) kena hitam
      belok_kanan();

    } else if (  (nilai_s1 < s1) && (nilai_s2 < s2) && (nilai_s3 > s3) && (nilai_s4 > s4) && (nilai_s5 > s5) ) { // jika sensor 1 dan 2 kena hitam
      belok_kanan();

    } else if ( (nilai_s1 > s1) && (nilai_s2 > s2) && (nilai_s3 < s3 ) && (nilai_s4 < s4) && (nilai_s5 > s5) ) { // jika sensor 3(tengah) dan sensor 4 kena hitam
      belok_kiri();

    } else if ((nilai_s1 > s1) && (nilai_s2 > s2) && (nilai_s3 > s3) && (nilai_s4 < s4) && (nilai_s5 < s5) ) { // jika sensor 4 dan 5(kiri) kena hitam
      belok_kiri();

    } else if ( (nilai_s1 > s1) && (nilai_s2 < s2) && (nilai_s3 > s3) && (nilai_s4 > s4) && (nilai_s5 > s5 ) ) { //jika sensor 2 kena hitam
      belok_kanan_dikit();

    } else if (  (nilai_s1 < s1) && (nilai_s2 > s2) && (nilai_s3 > s3) && (nilai_s4 > s4) && (nilai_s5 > s5 )  )  { //jika sensor 1 kena hitam
      belok_kanan_dikit();

    } else if ( (nilai_s1 > s1) && (nilai_s2 > s2) && (nilai_s3 > s3) && (nilai_s4 < s4) && (nilai_s5 > s5)) { //jika sensor 4 kena hitam
      belok_kiri_dikit();

    } else if ( (nilai_s1 > s1) && (nilai_s2 > s2) && (nilai_s3 > s3) && (nilai_s4 > s4) && (nilai_s5 < s5)) { //jika sensor 5 kena hitam
      belok_kiri_dikit();

      //  }else if((nilai_s1>s1)&&(nilai_s2>s2)&&(nilai_s3 <s3)&&(nilai_s4>s4)&&(nilai_s5>s5 )) { //
      //    maju();

    }
    //    else if( (nilai_s1>s1)&&(nilai_s2>s2)&&(nilai_s3 >s3)&&(nilai_s4>s4)&&(nilai_s5>s5 ) ) {  //jika semua sensor kena putih
    //      mundur();
    //
    //    }
  } else { //jika count sudah  maka berhenti
    diam();
  }








}
