/* Ghidra address: 00cac740 */
/* Ghidra symbol: FUN_00cac740 */


void FUN_00cac740(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = *(longlong *)(param_1 + 0x140);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x30))) {
    FUN_00c8b100(lVar1,&local_10,param_2,1,0xffffffff);
    FUN_00cb0c10(param_1,local_10,0xffffffff,0);
  }
  FUN_00419430(&local_10,&DAT_0086e978);
  return;
}

