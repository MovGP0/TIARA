/* Ghidra address: 00809bd0 */
/* Ghidra symbol: FUN_00809bd0 */


void FUN_00809bd0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xc0),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(DAT_02012670 + 0xc0) + 0x10))(*(longlong **)(DAT_02012670 + 0xc0));
  return;
}

