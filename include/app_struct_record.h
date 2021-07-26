#ifndef __app_struct_record_h__
#define __app_struct_record_h__

#define MAX_STRUCTURE_NAME_SIZE 128
#define MAX_FIELD_NAME_SIZE 128


typedef enum
{
	UINT8,
	UINT32,
	INT32,
	CHAR,
	FLOAT,
	DOUBLE,
	OBJ_STRUCT,
	OBJ_PTR
}data_type_t;




struct app_struct_record
{
	struct app_struct_record* next;
	char m_struct_name[MAX_STRUCTURE_NAME_SIZE];
	unsigned int m_struct_size;
	unsigned int m_struct_fields;
	
}app_struct_record_t;


#endif
