/* Ghidra address: 00b95a90 */
/* Ghidra symbol: FUN_00b95a90 */


undefined4 FUN_00b95a90(undefined8 *param_1)

{
  undefined4 local_14;
  undefined2 local_10;
  undefined2 uStack_c;
  
  local_10 = (undefined2)*param_1;
  uStack_c = (undefined2)((ulonglong)*param_1 >> 0x20);
  local_14 = CONCAT22(uStack_c,local_10);
  return local_14;
}

