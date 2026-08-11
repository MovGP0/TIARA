/* Ghidra address: 00b5d4d0 */
/* Ghidra symbol: FUN_00b5d4d0 */


void FUN_00b5d4d0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8);
  uVar2 = FUN_00b258c0(uVar1);
  FUN_00b257a0(uVar1,local_20,uVar2);
  FUN_00b29c50(*(undefined8 *)(param_1 + 0x98),local_20[0]);
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_004144d0(local_20);
  return;
}

