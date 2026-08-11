/* Ghidra address: 00dbf900 */
/* Ghidra symbol: FUN_00dbf900 */


void FUN_00dbf900(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  iVar5 = *(int *)(lVar1 + 0x708);
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      lVar4 = (longlong)iVar3;
      uVar2 = FUN_017dcbd0(param_1,*(longlong *)(lVar1 + 0x700) + -8 + lVar4 * 8,param_3,
                           *(undefined8 *)(*(longlong *)(lVar1 + 0x6f8) + -8 + lVar4 * 8));
      *(undefined8 *)(*(longlong *)(lVar1 + 0x6f8) + -8 + lVar4 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

