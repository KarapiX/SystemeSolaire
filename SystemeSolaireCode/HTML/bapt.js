
 var fileJson;
 var valeurMercure;
 var isClick = 0;
 var index = 0;
 var asym=0;
 var sym=0;

 var positionX;
 var positionY;
 var positionX2;
 var positionY2;
 var positionX3;
 var positionY3;
 var positionX4;
 var positionY4;
 var positionX5;
 var positionY5;
 var positionX6;
 var positionY6;
 var positionX7;
 var positionY7;
 var positionX8;
 var positionY8;
 var positionX9;
 var positionY9;
 var positionX10;
 var positionY10;
var valeurdedpart=1;


/*************************************************************************************
 * 
 * Ce code n'est pas de nous il provient en partie de Baptiste pour trouver le fichier json
 * 
 *************************************************************************************/



 function test() {

  var file_to_read = document.getElementById("jsonfileinput").files[0];
  var fileread = new FileReader();
  fileread.onload = function(e) {
    var content = e.target.result;
    valeurMercure = JSON.parse(content); // parse json 
    console.log(valeurMercure); 
    isClick = 1;
  };
  fileread.readAsText(file_to_read);
}

function setup() {
  createCanvas(1000, 1000);
  img = loadImage("https://cdn.futura-sciences.com/buildsv6/images/mediumoriginal/e/0/8/e08a2c82db_50149770_hubble-legacy-field-2.jpg");
  
  
}

function draw() {
  
  /*if(valeurdedpart==1){
    background(img);
    valeurdedpart++;
  }*/
  
  fill(255,255,0);
  stroke(255,250,0)
  ellipse(500, 500, 30, 30);
  
  if(isClick == 1)
  {
    calcul();
    index++;
  }
  if (sym==1){
  fill(0,0,150);
  stroke(0,0,255);
  ellipse(positionX, positionY, 2, 2 );
  
 
  fill(150,0,0);
  stroke(255,0,0);
  ellipse(positionX2, positionY2, 2,2);

  fill(202,131,131);
  stroke(170,100,100);
  ellipse(positionX3, positionY3, 2,2);

  fill(150,0,0);
  stroke(255,0,0);
  ellipse(positionX4, positionY4, 2,2);

  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX5, positionY5, 2,2);
  }
  if(asym==1){
  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX6, positionY6, 2,2);

  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX7, positionY7, 2,2);

  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX8, positionY8, 2,2);

  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX9, positionY9, 2,2);

  fill(174,164,164);
  stroke(255,0,0);
  ellipse(positionX10, positionY10, 2,2);
  }
 
  
  
}
function asymetrique() {
      asym=1;
      sym=0;
      index=0;
}
function symetrique() {
  sym=1;
  asym=0;
  index=0;
  
}
function calcul()
{
  positionX =  (valeurMercure["Terre"][index][0][0]/ 1000000000)+500;
  positionY =  (valeurMercure["Terre"][index][0][1]/ 1000000000)+500;
  positionX2 =  (valeurMercure["Mercure"][index][0][0]/ 1000000000)+500;
  positionY2 =  (valeurMercure["Mercure"][index][0][1]/ 1000000000)+500;
  positionX3 =  (valeurMercure["Venus"][index][0][0]/ 1000000000)+500;
  positionY3 =  (valeurMercure["Venus"][index][0][1]/ 1000000000)+500;
  positionX4 =  (valeurMercure["Mars"][index][0][0]/ 1000000000)+500;
  positionY4 =  (valeurMercure["Mars"][index][0][1]/ 1000000000)+500;
  positionX5 =  (valeurMercure["Saturne"][index][0][0]/ 4000000000)+500;
  positionY5 =  (valeurMercure["Saturne"][index][0][1]/ 4000000000)+500;
  positionX6 =  (valeurMercure["Terreasym"][index][0][0]/ 1000000000)+500;
  positionY6 =  (valeurMercure["Terreasym"][index][0][1]/ 1000000000)+500;
  positionX7 =  (valeurMercure["Mercureasym"][index][0][0]/ 1000000000)+500;
  positionY7 =  (valeurMercure["Mercureasym"][index][0][1]/ 1000000000)+500;
  positionX8 =  (valeurMercure["Venusasym"][index][0][0]/ 1000000000)+500;
  positionY8 =  (valeurMercure["Venusasym"][index][0][1]/ 1000000000)+500;
  positionX9 =  (valeurMercure["Marsasym"][index][0][0]/ 1000000000)+500;
  positionY9 =  (valeurMercure["Marsasym"][index][0][1]/ 1000000000)+500;
  positionX10 =  (valeurMercure["Saturneasym"][index][0][0]/ 4000000000)+500;
  positionY10 =  (valeurMercure["Saturneasym"][index][0][1]/ 4000000000)+500;
}
