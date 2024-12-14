
/*!
* @file info.h
*
* @brief
* <SHORT_NAME> metadata document.
*
* @details
* Metadata for <SOFTWARE_FULL_NAME>.
*/



#ifndef TEMPLATE_METADATA_INFORMATION_STRUCT_H_
#define TEMPLATE_METADATA_INFORMATION_STRUCT_H_



/*!
* @brief
* Metadata for <SOFTWARE_FULL_NAME>.
*/
namespace TEMPLATEMetadata {

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> publisher.
    */
    const char* PUBLISHER{ "<PUBLISHER/CREATOR>" };

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> software type.
    */
    const char* SOFTWARE_TYPE{ "Executable" };

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> software interface type.
    */
    const char* INTERFACE_TYPE{ "CLI" };

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> universally unique identifier.
    */
    const char* UUID{ "<UNIQUE_IDENTIFIER>" };

    /*!
    * @brief
    * Software official name.
    */
    const char* OFFICIAL_NAME{ "<SOFTWARE_FULL_NAME>" };

    /*!
    * @brief
    * Software shortend name.
    */
    const char* SHORT_NAME{ "<SHORT_NAME>" };

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> primary binary.
    */
    const char* PRIMARY_BINARY{ "template_name" };

    /*!
    * @brief
    * <SOFTWARE_FULL_NAME> target platform.
    */
    const unsigned short TARGET_PLATFORM{ 2 };

}



#endif // TEMPLATE_METADATA_INFORMATION_STRUCT_H_
