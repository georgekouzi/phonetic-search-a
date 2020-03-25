#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx apple  yyy";
    CHECK(find(text, "abple") == string("apple"));
    CHECK(find(text, "apble") == string("apple"));
    CHECK(find(text, "abble") == string("apple"));
    CHECK(find(text, "apple") == string("apple"));
}

//4
TEST_CASE("Test replacement of p and f") {
    string text = "xxx support yyy";
    CHECK(find(text, "sufport") == string("support"));
    CHECK(find(text, "supfort") == string("support"));
    CHECK(find(text, "suffort") == string("support"));
    CHECK(find(text, "support") == string("support"));
}
//4

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "xxx the king George yyy";
    CHECK(find(text, "GEORGE") == string("George"));
    CHECK(find(text, "george") == string("George"));
    CHECK(find(text, "gEorge") == string("George"));
    CHECK(find(text, "gEORGE") == string("George"));
    CHECK(find(text, "georgE") == string("George"));
    CHECK(find(text, "George") == string("George"));
    CHECK(find(text, "GeorgE") == string("George"));
    CHECK(find(text, "geOrge") == string("George"));
    CHECK(find(text, "gEoRge") == string("George"));
    CHECK(find(text, "gEORgE") == string("George"));
    CHECK(find(text, "gEorgE") == string("George"));
    CHECK(find(text, "GeoRGe") == string("George"));
    CHECK(find(text, "THE") == string("the"));
    CHECK(find(text, "The") == string("the"));
    CHECK(find(text, "king") == string("king"));
//14

}

TEST_CASE("Test replacement of o and u") {
    string text = "xxx coronavirus is dengerous  yyy";

CHECK(find(text, "coronavirus") == string("coronavirus"));
    CHECK(find(text, "curonavirus") == string("coronavirus"));
    CHECK(find(text, "curunavirus") == string("coronavirus"));
    CHECK(find(text, "corunavirus") == string("coronavirus"));
    CHECK(find(text, "coronaviros") == string("coronavirus"));
    CHECK(find(text, "curonaviros") == string("coronavirus"));
    CHECK(find(text, "corunaviros") == string("coronavirus"));
    CHECK(find(text, "curunaviros") == string("coronavirus"));
    CHECK(find(text, "dengeroos") == string("dengerous"));
    CHECK(find(text, "dengerous") == string("dengerous"));
    CHECK(find(text, "dengeruus") == string("dengerous"));
    CHECK(find(text, "dengeruos") == string("dengerous"));
}

//12





TEST_CASE("Test replacement of g and j") {
    string text =  " xxx  yyy  the biggest truggle";
     CHECK(find(text, "truggle") == string("truggle"));
    CHECK(find(text, "trujgle") == string("truggle"));
    CHECK(find(text, "trujjle") == string("truggle"));
    CHECK(find(text, "trugjle") == string("truggle"));
    CHECK(find(text, "bijgest") == string("biggest"));
    CHECK(find(text, "bigjest") == string("biggest"));
    CHECK(find(text, "biggest") == string("biggest"));
    CHECK(find(text, "bijjest") == string("biggest"));
}//8

TEST_CASE("Test replacement of w and v") {
    string text =  " woow its wonderful waves";
    CHECK(find(text, "woow") == string("woow"));
    CHECK(find(text, "voow") == string("woow"));
    CHECK(find(text, "voov") == string("woow"));
    CHECK(find(text, "woov") == string("woow"));
    CHECK(find(text, "wonderful") == string("wonderful"));
    CHECK(find(text, "vonderful") == string("wonderful"));
    CHECK(find(text, "waves") == string("waves"));
    CHECK(find(text, "vaves") == string("waves"));
    CHECK(find(text, "wawes") == string("waves"));
    CHECK(find(text, "vawes") == string("waves"));
   
}
//10

TEST_CASE("Test replacement of s and z") {
    string text =  " xxxx success semester ccccc";
    CHECK(find(text, "zuccess") == string("success"));
    CHECK(find(text, "succezs") == string("success"));
    CHECK(find(text, "succesz") == string("success"));
    CHECK(find(text, "zuccezs") == string("success"));
    CHECK(find(text, "zuccesz") == string("success"));
    CHECK(find(text, "zuccezz") == string("success"));
    CHECK(find(text, "succezz") == string("success"));
    CHECK(find(text, "success") == string("success"));
    CHECK(find(text, "semester") == string("semester"));
    CHECK(find(text, "zemester") == string("semester"));
    CHECK(find(text, "semezter") == string("semester"));
    CHECK(find(text, "zemezter") == string("semester"));

}
//12

TEST_CASE("Test replacement of y and i") {
    string text =  " xxxx yay i from mississippi ccccc";
    CHECK(find(text, "iay") == string("yay"));
    CHECK(find(text, "yai") == string("yay"));
    CHECK(find(text, "yay") == string("yay"));
    CHECK(find(text, "iai") == string("yay"));
    CHECK(find(text, "i") == string("i"));
    CHECK(find(text, "y") == string("i"));
    CHECK(find(text, "mississippi") == string("mississippi"));
    CHECK(find(text, "myssissippi") == string("mississippi"));
    CHECK(find(text, "missyssippi") == string("mississippi"));
    CHECK(find(text, "mississyppi") == string("mississippi"));
    CHECK(find(text, "mississippy") == string("mississippi"));
    CHECK(find(text, "myssyssippi") == string("mississippi"));
    CHECK(find(text, "myssyssyppi") == string("mississippi"));
    CHECK(find(text, "myssyssippy") == string("mississippi"));
    CHECK(find(text, "myssyssyppy") == string("mississippi"));
    CHECK(find(text, "missyssyppy") == string("mississippi"));
    CHECK(find(text, "mississyppy") == string("mississippi"));
    CHECK(find(text, "missyssyppi") == string("mississippi"));
    CHECK(find(text, "myssissippy") == string("mississippi"));
}
//19
TEST_CASE("Test replacement of c and q") {
    string text =  " xxxx chen and dan unacquaintances yyy";
    CHECK(find(text, "qhen") == string("chen"));
    CHECK(find(text, "chen") == string("chen"));
    CHECK(find(text, "unacquaintances") == string("unacquaintances"));
    CHECK(find(text, "unaqquaintances") == string("unacquaintances"));
    CHECK(find(text, "unaccuaintances") == string("unacquaintances"));
    CHECK(find(text, "unaccuaintanqes") == string("unacquaintances"));
    CHECK(find(text, "unacquaintanqes") == string("unaccuaintanqes"));
    CHECK(find(text, "unaqcuaintanqes") == string("unaccuaintanqes"));
    CHECK(find(text, "unaqquaintanqes") == string("unaccuaintanqes"));
}
//9
TEST_CASE("Test replacement of k and c") {
    string text =  " xxxx the king loves to drink a cold cocacola";
    CHECK(find(text, "king") == string("king"));
    CHECK(find(text, "cing") == string("king"));
    CHECK(find(text, "cocacola") == string("cocacola"));
    CHECK(find(text, "kocacola") == string("cocacola"));
    CHECK(find(text, "kokakola") == string("cocacola"));
    CHECK(find(text, "kocakola") == string("cocacola"));
    CHECK(find(text, "kokacola") == string("cocacola"));
    CHECK(find(text, "cocacola") == string("cocacola"));
    CHECK(find(text, "cold") == string("cold"));
    CHECK(find(text, "kold") == string("cold"));
//10
}