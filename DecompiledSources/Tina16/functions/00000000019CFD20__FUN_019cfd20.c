/* Ghidra address: 019cfd20 */
/* Ghidra symbol: FUN_019cfd20 */


void FUN_019cfd20(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = *param_1;
  local_10 = (undefined4)uVar1;
  *param_2 = local_10;
  uStack_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *param_3 = uStack_c;
  return;
}

