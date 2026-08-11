/* Ghidra address: 015e2f00 */
/* Ghidra symbol: FUN_015e2f00 */


undefined1 FUN_015e2f00(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int local_10;
  undefined1 local_9;
  
  local_9 = 0;
  FUN_004b6dc0(param_2,0);
  (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x10,4);
  if ((longlong)*(int *)(param_1 + 0x10) == (ulonglong)DAT_01f6fdb4) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_10,4);
    FUN_004169f0(param_1 + 8,local_10);
    uVar1 = FUN_00416740(*(undefined8 *)(param_1 + 8));
    (**(code **)(*param_2 + 0x18))(param_2,uVar1,local_10 * 2);
    local_9 = 1;
  }
  return local_9;
}

