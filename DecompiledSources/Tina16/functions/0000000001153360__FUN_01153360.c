/* Ghidra address: 01153360 */
/* Ghidra symbol: FUN_01153360 */


void FUN_01153360(longlong param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x8e0) == '\0';
  *(bool *)(param_1 + 0x8e0) = bVar1;
  FUN_00f06730(L"Main Params view",CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1) & 0xffffffff);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x6e8),*(char *)(param_1 + 0x8e0) == '\0');
  FUN_01153160(param_1,param_2);
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6b8),0);
  if (*(char *)(param_1 + 0x8e0) == '\0') {
    FUN_007fdf10(param_1,*(int *)(param_1 + 0x8e4) + *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x9c)
                         + *(int *)(*(longlong *)(param_1 + 0x718) + 0x9c));
  }
  else {
    FUN_007fdf10(param_1,*(int *)(param_1 + 0x8e8) + *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x9c)
                         + *(int *)(*(longlong *)(param_1 + 0x718) + 0x9c));
  }
  FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  FUN_01152760(param_1,param_2);
  return;
}

