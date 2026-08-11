/* Ghidra address: 00d19860 */
/* Ghidra symbol: FUN_00d19860 */


void FUN_00d19860(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong local_20;
  
  uVar1 = *(uint *)(param_1 + 5);
  *(undefined1 *)((longlong)param_1 + (longlong)(int)(uVar1 % 0x40) + 0x2c) = 0x80;
  uVar1 = uVar1 % 0x40 + 1;
  if (0x38 < uVar1) {
    FUN_0040d200((longlong)param_1 + (longlong)(int)uVar1 + 0x2c,(longlong)(int)(0x40 - uVar1),0);
    (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
    uVar1 = 0;
  }
  FUN_0040d200((longlong)param_1 + (longlong)(int)uVar1 + 0x2c,(longlong)(int)(0x40 - uVar1),0);
  local_20 = (ulonglong)(uint)((int)param_1[5] * 8);
  iVar2 = 0;
  do {
    *(undefined1 *)((longlong)param_1 + (longlong)(0x3f - iVar2) + 0x2c) =
         *(undefined1 *)((longlong)&local_20 + (longlong)iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  (**(code **)(*param_1 + 0x68))(param_1,(longlong)param_1 + 0x2c);
  FUN_0040d200((longlong)param_1 + 0x2c,0x40,0);
  (**(code **)PTR_PTR_02003358)((longlong)param_1 + 0x6c,(longlong)param_1 + 0x6c,5);
  FUN_00d0d260(param_1,0);
  return;
}

