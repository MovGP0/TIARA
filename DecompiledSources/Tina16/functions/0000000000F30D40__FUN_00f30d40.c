/* Ghidra address: 00f30d40 */
/* Ghidra symbol: FUN_00f30d40 */


void FUN_00f30d40(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  FUN_00411a80(param_1,param_2);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = (ulonglong)iVar4;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
      if ((lVar2 == 0) || (*(ulonglong *)(lVar2 + -8) <= uVar3)) {
        lVar2 = FUN_00410a90();
      }
      lVar2 = *(longlong *)(lVar2 + uVar3 * 8);
      if (*(char *)(lVar2 + 8) != '\0') {
        FUN_00410f20(lVar2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(uVar1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

