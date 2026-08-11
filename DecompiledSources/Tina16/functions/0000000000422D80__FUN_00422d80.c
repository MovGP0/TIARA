/* Ghidra address: 00422d80 */
/* Ghidra symbol: FUN_00422d80 */


void FUN_00422d80(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_2;
  local_10 = (undefined4)uVar1;
  *param_1 = local_10;
  uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  param_1[1] = uStack_c;
  return;
}

