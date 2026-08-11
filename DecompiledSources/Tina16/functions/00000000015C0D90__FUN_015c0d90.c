/* Ghidra address: 015c0d90 */
/* Ghidra symbol: FUN_015c0d90 */


uint FUN_015c0d90(byte param_1,uint param_2)

{
  byte local_res10;
  
  local_res10 = (byte)param_2;
  return *(uint *)(PTR_DAT_02004800 + (ulonglong)(local_res10 ^ param_1) * 4) ^ param_2 >> 8;
}

