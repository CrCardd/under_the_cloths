// #include <stdio.h>
// #include "curl/include/curl/curl.h"

// int main(){
//     CURL *curl;
//     CURlcode res;

//     curl = curl_easy_init();

//     if(curl){
//         curl_easy_setopt(curl, CURLOPT_URL, "url")

//         res = curl_easy_perform(curl);

//         if(curl != CURLE_OK){
//             printf("Erro");
//         }
//     }

//     curl_easy_cleanup(curl);

//     return 0;
// }