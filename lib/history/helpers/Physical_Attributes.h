/*  Created 2020, February 12th by Keegan Kochis
 *  This class holds all of the physical attributes of the man class.
*/

#ifndef MAN_PHYS_H_INCLUDE
#define MAN_PHYS_H_INCLUDE

class Man;

class Physical_Attributes {
public:
    //  Body type
    //  Height
    //  Weight
    //  Skin pigment
    //  Skin darkness
    //  Eye color
    //  Hair color
    //  Hair style
    //  Facial hair color
    //  Facial hair type
    
    Physical_Attributes();
    Physical_Attributes(Man*);
    
    void generate_body_type();
    void generate_height();
    void generate_weight();
    void generate_skin_pigment();
    void generate_skin_darkness();
    void generate_eye_color();
    void generate_hair_color();
    void generate_hair_style();
    void generate_facial_hair_color();
    void generate_facial_hair_type();
    
};

#endif /* MAN_PHYS_H_INCLUDE */
