/* Ghidra address: 00d7d9c0 */
/* Ghidra symbol: FUN_00d7d9c0 */


void FUN_00d7d9c0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 local_29 [9];
  
  local_29[0] = 1;
  (**(code **)(*param_2 + 0x20))(param_2,local_29,1);
  bVar1 = 0;
  do {
    (**(code **)(*param_2 + 0x20))(param_2,param_1 + 8 + (ulonglong)bVar1,1);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 2);
  return;
}

