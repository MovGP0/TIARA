/* Ghidra address: 00f63b50 */
/* Ghidra symbol: FUN_00f63b50 */


void FUN_00f63b50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
  FUN_00f653c0(param_1,*(undefined8 *)(param_1 + 0x90));
  FUN_00f611b0(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98),
               *(undefined4 *)(param_1 + 0x9c));
  if (PTR_DAT_02002068[1] != '\0') {
    FUN_00f636d0(param_1);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar3);
      cVar1 = FUN_00f6f9a0(uVar2);
      if (cVar1 != '\0') {
        FUN_00f63320(param_1,uVar2,*(undefined4 *)(PTR_DAT_02002068 + 4),*PTR_DAT_02002068);
      }
      FUN_00f6f910(uVar2,4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00f638e0(param_1);
  return;
}

