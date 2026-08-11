/* Ghidra address: 0181eb90 */
/* Ghidra symbol: FUN_0181eb90 */


void FUN_0181eb90(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00414ad0(param_3 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FUN_00414ad0(param_3 + 0x28,*(undefined8 *)(param_2 + 0x28));
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = FUN_0181e3e0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_0181e3c0(param_2,iVar4);
      uVar3 = FUN_0181e400(param_3);
      FUN_0181eb90(param_1,uVar2,uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

