#include <iostream>
#include <cstdbool>
#include <vector>
#include <unordered_map>

#include <bits/stdc++.h>
#include <string.h>
#include <errno.h>
#include "hIdentifier.h"

class HASH_IDENTIFIER{

private:

	std::vector<uint16_t> map;

	const char *hash;
	uint32_t    hashInt;
	
public:

	HASH_IDENTIFIER(const char *hash){

		this->hash = hash;
		this->hashInt = atoi(hash);
		
	}

	void _hash_identifier_(){
	
		printf("Hash[%s] %u\n",hash,hashInt);
		
		
		CRC16();
		CRC16CCITT();
		FCS16();
		CRC32B();
		XOR32();
		GHash323();
		GHash325();
		DESUnix();
		
		MD5Half();
		MD5Middle();
		MySQL();
		
		DomainCachedCredentials();
		Haval128();
		Haval128HMAC();
		
		MD2();
		MD2HMAC();
		MD4();
		MD4HMAC();
		MD5();
		
		MD5HMAC();
		MD5HMACWordpress();
		NTLM();
		RAdminv2x();
		RipeMD128();
		RipeMD128HMAC();
		SNEFRU128();
		
		Tiger128();
		Tiger128HMAC();
		SHA1();
		SHA1HMAC();
			
		
		debug_hash_show();
		
	}

	void CRC16(){
    	
    		const char *hs = "4607";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(0);
    		
    		}
    				    	
    	}
    	
    	void CRC16CCITT(){
    	
    		const char *hs = "3d08";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(1);
    		
    		}	
    				    	
    	}
    	
    	void FCS16(){
    	
    		const char *hs = "0e5b";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    		
    		if(isValid){
    		
    			map.push_back(2);
    		
    		} 	
    				    	
    	}
    	
    	void CRC32(){
    	
    		const char *hs = "b33fd057";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE); 
    				
    		if(isValid){
    		
    			map.push_back(3);
    		
    		}	
    				    	
    	}
    	
    	void ADLER32(){
    	
    		const char *hs = "0607cb42";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE); 	
    				
    		if(isValid){
    		
    			map.push_back(4);
    		
    		}
    				    	
    	}
    	
    	void CRC32B(){

		const char *hs = "012d0097";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(5);
    		
    		}
    	
    	}
    	
    	
    	void XOR32(){

		const char *hs = "0000003f";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(6);
    		
    		}
    	
    	}
    	
    	void GHash323(){

		const char *hs = "80000000";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(7);
    		
    		}
    	
    	}
    	
 	  	
      	void GHash325(){

		const char *hs = "85318985";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(8);
    		
    		}
    	
    	}
    	
    	
    	void DESUnix(){

		const char *hs = "ZiY8YtDKXJwYQ";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE);
    				
    		if(isValid){
    		
    			map.push_back(9);
    		
    		}
    	
    	}
    	
    	void MD5Half(){

		const char *hs = "ae11fd697ec92c7c";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(10);
    		
    		}
    	
    	}
    	
    	void MD5Middle(){

		const char *hs = "7ec92c7c98de3fac";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(11);
    		
    		}
    	
    	}
    	
    	void MySQL(){

		const char *hs = "63cea4673fd25f46";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(12);
    		
    		}
    	
    	}
    	
    	void DomainCachedCredentials(){

		const char *hs = "f42005ec1afe77967cbc83dce1b4d714";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(13);
    		
    		}
    	
    	}
    	  	
    	void Haval128(){

		const char *hs = "d6e3ec49aa0f138a619f27609022df10";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(14);
    		
    		}
    	
    	}
    	
    	void Haval128HMAC(){

		const char *hs = "3ce8b0ffd75bc240fc7d967729cd6637";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(15);
    		
    		}
    	
    	}
    	
    	void MD2(){

		const char *hs = "08bbef4754d98806c373f2cd7d9a43c4";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(16);
    		
    		}
    	
    	}
    		
    	void MD2HMAC(){

		const char *hs = "4b61b72ead2b0eb0fa3b8a56556a6dca";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(17);
    		
    		}
    	
    	}
    	
    	void MD4(){

		const char *hs = "a2acde400e61410e79dacbdfc3413151";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(18);
    		
    		}
    	
    	}   	
    		
    	void MD4HMAC(){

		const char *hs = "6be20b66f2211fe937294c1c95d1cd4f";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(19);
    		
    		}
    	
    	}

    	
    	void MD5(){

		const char *hs = "ae11fd697ec92c7c98de3fac23aba525";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(20);
    		
    		}
    	
    	}
    	
    	void MD5HMAC(){

		const char *hs = "d57e43d2c7e397bf788f66541d6fdef9";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(21);
    		
    		}
    	
    	}
    	
    	void MD5HMACWordpress(){

		const char *hs = "3f47886719268dfa83468630948228f6";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(22);
    		
    		}
    	
    	}
    	
    	void NTLM(){

		const char *hs = "cc348bace876ea440a28ddaeb9fd3550";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(23);
    		
    		}
    	
    	}
    	
    	void RAdminv2x(){

		const char *hs = "baea31c728cbf0cd548476aa687add4b";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(24);
    		
    		}
    	
    	}
    	
    	void RipeMD128(){

		const char *hs = "4985351cd74aff0abc5a75a0c8a54115";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(25);
    		
    		}
    	
    	}
    	
    	void RipeMD128HMAC(){

		const char *hs = "ae1995b931cf4cbcf1ac6fbf1a83d1d3";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(26);
    		
    		}
    	
    	}
    	
    	void SNEFRU128(){

		const char *hs = "4fb58702b617ac4f7ca87ec77b93da8a";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(27);
    		
    		}
    	
    	}
    	
    	void SNEFRU128HMAC(){

		const char *hs = "59b2b9dcc7a9a7d089cecf1b83520350";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(28);
    		
    		}
    	
    	}
    	
    	void Tiger128(){

		const char *hs = "c086184486ec6388ff81ec9f23528727";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(29);
    		
    		}
    	
    	}
    	
	void Tiger128HMAC(){

		const char *hs = "c87032009e7c4b2ea27eb6f99723454b";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(31);
    		
    		}
    	
    	}
    	
    	void SHA1(){

		const char *hs = "4a1d4dbc1e193ec3ab2e9213876ceb8f4db72333";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(32);
    		
    		}
    	
    	}
    	
	void SHA1HMAC(){

		const char *hs = "4a1d4dbc1e193ec3ab2e9213876ceb8f4db72333";
    		
    		bool isValid = 	cmpLengthEqual(hash,hs) &&
    				isDigit(hashInt,FALSE)  && 
    				isAlpha(hashInt,FALSE)  &&
    				isAlnum(hash,TRUE);
    				
    		if(isValid){
    		
    			map.push_back(33);
    		
    		}
    	
    	}
    	

 

	~HASH_IDENTIFIER(){
	
	
	}


   	//primary methods

	bool cmpLengthEqual(const char *a,const char *b){

        	return strlen(a) == strlen(b);

    	}

    	bool isAlpha(uint32_t hashInt,bool val){

        	return std::isalpha(hashInt) == val;

    	}

    	bool isAlnum(const char *hash,bool val){

		char c = hash[0];
		
		bool isNum 	= c >= 0x30 && c <= 0x39;
		bool isUpper 	= c >= 0x41 && c <= 0x5a;
		bool isLow	= c >= 0x61 && c <= 0x7a;
		
		return isNum || isUpper || isLow;
		
    	}

    	bool isDigit(uint32_t hashInt,bool val){

        	return std::isdigit(hashInt) == val;

    	}
    	
    	void debug_hash_show(){ 
    	
    		printf("======hash====== ==> %u\n",map.size());
  
  		sort(map.begin(),map.end());
    	
    		for(uint8_t i=0;i < map.size();i++){
    		
    			printf("%hu - %s\n",map[i],crypts[map[i]]);
    			    			
    		}
    	
    	}
		

};


int main(){

	
	const char *hash = "c58cda49f00748a3bc0fcfa511d516cb";
	
	HASH_IDENTIFIER hash_id(hash);
	
	hash_id._hash_identifier_();

}
