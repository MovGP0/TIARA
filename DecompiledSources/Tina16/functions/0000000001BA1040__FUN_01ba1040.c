/* Ghidra address: 01ba1040 */
/* Ghidra symbol: FUN_01ba1040 */


undefined8 FUN_01ba1040(undefined8 *param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)((ulonglong)*param_1 >> 0x20);
  local_10 = (int)*param_1;
  return CONCAT44(8 - local_10,uStack_c);
}

