/*  Created 2020, February 12th by Keegan Kochis
 *  This class holds all of the physical attributes of the man class.
*/

#ifndef PHYSICAL_ATTRIBUTE_H_INCLUDE
#define PHYSICAL_ATTRIBUTE_H_INCLUDE

class Man;

class Physical_Attributes {
public:
    //  Body type
    //  Height
    //  Weight
    //  Athleticism
    //  Skin pigment
    //  Skin darkness
    //  Eye color
    //  Natural hair color
    //  Natural facial hair color
    
    Physical_Attributes();
    Physical_Attributes(Man*);
    
    void generate_body_type();
    void generate_height();
    void generate_weight();
    void generate_athleticism();
    void generate_skin_pigment();
    void generate_skin_darkness();
    void generate_eye_color();
    void generate_hair_color();
    void generate_facial_hair_color();
    
};

#endif /* PHYSICAL_ATTRIBUTE_H_INCLUDE */
