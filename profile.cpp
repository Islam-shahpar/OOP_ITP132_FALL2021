#include <iostream>
#include <vector>
#include "profile.hpp"
#include <string>

Profile::Profile (std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them"){
     name = new_name;
     age = new_age;
     city = new_city;
     country = new_country;
     pronouns = new_pronouns;
   }

std::string Profile::view_profile(){
    std::string an_age = std::to_string(age);
    std::string hobbies_list;
    for(int i = 0; i < hobbies.size(); i++){
      hobbies_list += "\n" + hobbies[i];
    }
    std::string profile_info = "Name: " + name + "\n" + 
                               "Age: " + an_age + "\n" +
                               "City: " + city + "\n" +
                               "Country: " + country + "\n" +
                               "Pronouns: " + pronouns + "\n" +
                               "Hobbies: " + hobbies_list + "\n";
    return profile_info; 
   }

void Profile::add_hobby(std::string new_hobby){
     hobbies.push_back(new_hobby);
   }







