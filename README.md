# Taller1EDD
Taller1 Estructura de datos 2023_2

/*"Base de datos"*/

--Usuarios--

//Administador
admin: { usuario:”admin”; contraseña:”adminpass”; edad:30;
correo:”admin@admin.com”; log:”true”}.


//Usuarios Normal
usuario0: { usuario:”usuario0”; contraseña:”contrasena0”; edad:25;
correo:”usuario0@taller1.com”;}.

usuario1: { usuario:”usuario1”; contraseña:”contrasena1”; edad:26;
correo:”usuario1@taller1.com”;}.

usuario2: { usuario:”usuario2”; contraseña:”contrasena2”; edad:27;
correo:”usuario2@taller1.com”;}.

usuario3: { usuario:”usuario3”; contraseña:”contrasena3”; edad:28;
correo:”usuario3@taller1.com”;}.

usuario4: { usuario:”usuario4”; contraseña:”contrasena4”; edad:29;
correo:”usuario4@taller1.com”;}.

usuario5: { usuario:”usuario5”; contraseña:”contrasena5”; edad:30;
correo:”usuario5@taller1.com”;}.

usuario6: { usuario:”usuario6”; contraseña:”contrasena6”; edad:31;
correo:”usuario6@taller1.com”;}.

usuario7: { usuario:”usuario7”; contraseña:”contrasena7”; edad:32;
correo:”usuario7@taller1.com”;}.

usuario8: { usuario:”usuario8”; contraseña:”contrasena8”; edad:33;
correo:”usuario8@taller1.com”;}.

usuario9: { usuario:”usuario9”; contraseña:”contrasena9”; edad:34;
correo:”usuario9@taller1.com”;}.

//Ninos
nino0: { usuario:”nino0”; contraseña:”contrasenaNino0”; edad:10;}.

nino1: { usuario:”nino1”; contraseña:”contrasenaNino1”; edad:11;}.

nino2: { usuario:”nino2”; contraseña:”contrasenaNino2”; edad:12;}.

nino3: { usuario:”nino3”; contraseña:”contrasenaNino3”; edad:13;}.

--Software--

//Juegos
juego1(nombre:"Juego1";developer:"Desarrollador1";clasifiacionEdad:"E";listaUsuarios:{"usuario1", "usuario2"}; precio:49;genero; "Acción");
juego2(nombre:"Juego2";developer:"Desarrollador2";clasifiacionEdad:"E";listaUsuarios:{"usuario1", "usuario3"}; precio:59;genero; "Aventura");
juego3(nombre:"Juego3";developer:"Desarrollador3";clasifiacionEdad:"E";listaUsuarios:{"usuario2", "usuario4"}; precio:39;genero; "Deportes");
juego4(nombre:"Juego4";developer:"Desarrollador4";clasifiacionEdad:"E";listaUsuarios:{"usuario3", "usuario5"}; precio:69;genero; "Acción");
juego5(nombre:"Juego5";developer:"Desarrollador5";clasifiacionEdad:"E";listaUsuarios:{"usuario4", "usuario6"}; precio:79;genero; "Aventura");
juego6(nombre:"Juego6;developer:"Desarrollador6";clasifiacionEdad:"18+";listaUsuarios:{"usuario5", "usuario7"}; precio:89;genero; "Shooter");
juego7(nombre:"Juego7";developer:"Desarrollador7";clasifiacionEdad:"18+";listaUsuarios:{"usuario6", "usuario8"}; precio:99;genero; "Shooter");
juego8(nombre:"Juego8";developer:"Desarrollador8";clasifiacionEdad:"18+";listaUsuarios:{"usuario7", "usuario9"}; precio:79;genero; "RPG");
juego9(nombre:"Juego9";developer:"Desarrollador9";clasifiacionEdad:"18+";listaUsuarios:{"usuario8", "usuario10"}; precio:59;genero; "RPG");
juego10(nombre:"Juego10";developer:"Desarrollador10";clasifiacionEdad:"18+";listaUsuarios:{"usuario9", "usuario1"}; precio:69;genero; "Deportes");
juego11(nombre:"Juego11";developer:"Desarrollador11";clasifiacionEdad:"E";listaUsuarios:{"usuario3", "usuario5"}; precio:49;genero; "Acción");
juego12(nombre:"Juego12";developer:"Desarrollador12";clasifiacionEdad:"E";listaUsuarios:{"usuario7", "usuario3"}; precio:59;genero; "Aventura");
juego13(nombre:"Juego13";developer:"Desarrollador13";clasifiacionEdad:"E";listaUsuarios:{"usuario1", "usuario6"}; precio:39;genero; "Deportes");
juego14(nombre:"Juego14";developer:"Desarrollador14";clasifiacionEdad:"E";listaUsuarios:{"usuario5", "usuario2"}; precio:69;genero; "Acción");
juego15(nombre:"Juego15";developer:"Desarrollador15";clasifiacionEdad:"E";listaUsuarios:{"usuario7", "usuario5"}; precio:79;genero; "Aventura");
juego16(nombre:"Juego16";developer:"Desarrollador16";clasifiacionEdad:"18+";listaUsuarios:{"usuario4", "usuario2"}; precio:89;genero; "Shooter");
juego17(nombre:"Juego17";developer:"Desarrollador17";clasifiacionEdad:"18+";listaUsuarios:{"usuario5", "usuario4"}; precio:99;genero; "Shooter");
juego18(nombre:"Juego18";developer:"Desarrollador18";clasifiacionEdad:"18+";listaUsuarios:{"usuario5", "usuario3"}; precio:49;genero; "RPG");
juego19(nombre:"Juego19";developer:"Desarrollador19";clasifiacionEdad:"18+";listaUsuarios:{"usuario1", "usuario7"}; precio:59;genero; "RPG");
juego20(nombre:"Juego20";developer:"Desarrollador20";clasifiacionEdad:"18+";listaUsuarios:{"usuario8", "usuario2"}; precio:69;genero; "Deportes");

//Ofimatica
Ofimatica1(nombre:Ofimatica1;developer:"Empresa ABC",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2","usuario3"},precio:49;cantidadArchivos:100);
Ofimatica2(nombre:Ofimatica2;developer:"Empresa ABC",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2","usuario3"},precio:49;cantidadArchivos:100);
Ofimatica3(nombre:Ofimatica3;developer:"Empresa ABC",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2","usuario3"},precio:49;cantidadArchivos:100);
Ofimatica4(nombre:Ofimatica4;developer:"Empresa ABC",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2","usuario3"},precio:49;cantidadArchivos:100);
Ofimatica5(nombre:Ofimatica5;developer:"Empresa ABC",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2","usuario3"},precio:49;cantidadArchivos:100);

//Produccion
Software1(nombre:Software1;developer:"Desarrollador1",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2"};precio:99;tipoSolucion"video");
Software2(nombre:Software1;developer:"Desarrollador2",clasificacionEdad:"E";listaUsuarios:{"usuario2", "usuario3"};precio:89;tipoSolucion"video");
Software3(nombre:Software1;developer:"Desarrollador3",clasificacionEdad:"E";listaUsuarios:{"usuario3", "usuario4"};precio:79;tipoSolucion"fotos");
Software4(nombre:Software1;developer:"Desarrollador4",clasificacionEdad:"E";listaUsuarios:{"usuario4", "usuario5"};precio:69;tipoSolucion"musica");

//Navegador
navegador1(nombre:naevgador1;developer:"Desarrollador1",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2"};precio:0;historial:{"www.pagina1.com","www.pagina2.com","www.pagina3.com"});
navegador2(nombre:naevgador2;developer:"Desarrollador2",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2"};precio:0;historial:{"www.pagina1.com","www.pagina2.com","www.pagina3.com"});

//Seguridad
s1(nombre:"seguridad1";developer:"Desarrollador1",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario2"};precio:0;tipoMalware:"Ransoware");
s2(nombre:"seguridad2";developer:"Desarrollador2",clasificacionEdad:"E";listaUsuarios:{"usuario3", "usuario4"};precio:0;tipoMalware:"Spyware");
s3(nombre:"seguridad3";developer:"Desarrollador3",clasificacionEdad:"E";listaUsuarios:{"usuario5", "usuario6"};precio:0;tipoMalware:"botnets");
s4(nombre:"seguridad4";developer:"Desarrollador4",clasificacionEdad:"E";listaUsuarios:{"usuario7", "usuario8"};precio:0;tipoMalware:"rootkits");
s5(nombre:"seguridad5";developer:"Desarrollador5",clasificacionEdad:"E";listaUsuarios:{"usuario9", "usuario5"};precio:0;tipoMalware:"gusanos");
s6(nombre:"seguridad6";developer:"Desarrollador6",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario3"};precio:0;tipoMalware:"troyanos");

//Social
social1(nombre:"Red Social 1";developer:"Desarrollador6",clasificacionEdad:"E";listaUsuarios:{"usuario1", "usuario3"};precio:0;cantAmigos:23);
social12(nombre:"Red Social 2";developer:"Desarrollador6",clasificacionEdad:"18+";listaUsuarios:{"usuario3", "usuario4"};precio:0;cantAmigos:32);

