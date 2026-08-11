/* Ghidra address: 00413c30 */
/* Ghidra symbol: FUN_00413c30 */


void FUN_00413c30(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      piVar1 = param_1 + (longlong)iVar3 * 6 + -4;
      uVar2 = (uint)*(ulonglong *)(piVar1 + 4) & 0xffff;
      if ((*(ulonglong *)(piVar1 + 4) & 0xffff) == 0) {
        FUN_004144d0(*(undefined8 *)piVar1);
      }
      else if (uVar2 == 1) {
        FUN_00414520(*(undefined8 *)piVar1);
      }
      else if (uVar2 == 2) {
        FUN_00414480(*(undefined8 *)piVar1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

