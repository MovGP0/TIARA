/* Ghidra address: 004da1e0 */
/* Ghidra symbol: FUN_004da1e0 */


ulonglong FUN_004da1e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_R13;
  
  FUN_00414ad0(param_1 + 0x28);
  FUN_00414ad0(param_1 + 0x20,param_3);
  FUN_00414ad0(param_1 + 0x18,param_4);
  return CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1) & 0xffffffff;
}

