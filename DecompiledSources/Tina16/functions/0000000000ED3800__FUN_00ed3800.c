/* Ghidra address: 00ed3800 */
/* Ghidra symbol: FUN_00ed3800 */


void FUN_00ed3800(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_20 [2];
  undefined1 local_c [4];
  
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7c8),local_20);
  uVar1 = FUN_0040e860(local_20[0],local_c);
  *(undefined4 *)(param_1 + 0x904) = uVar1;
  FUN_00414480(local_20);
  return;
}

