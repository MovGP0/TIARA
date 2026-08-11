/* Ghidra address: 00f60820 */
/* Ghidra symbol: FUN_00f60820 */


undefined8 FUN_00f60820(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_1;
  local_18 = (int)*param_2;
  uStack_c = (int)((ulonglong)*param_1 >> 0x20);
  uStack_14 = (int)((ulonglong)*param_2 >> 0x20);
  return CONCAT44(uStack_c + uStack_14,local_10 + local_18);
}

