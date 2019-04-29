
#ifndef geo_h
#define geo_h 

const string vocales="aeiou";
string pigLatinify(const string s){
	if(s.size==0){
		//Cadena vacia
		return s;
	}
	if(s.find("qu")==0){//Empieza con "qu"
		return s.substr(2,size()-2)+s.substr(0,2)+"ay";
	}else if(vocales.find(s[0] !=string::npos)){
		return s+"way";
	}else{
		return s.substr(1,s.size()-1)+"-"+s[0]+"ay";
	}
	
}

#endif geo_h
