/* Ghidra address: 00f33420 */
/* Ghidra symbol: FUN_00f33420 */


void FUN_00f33420(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
      if (*(char *)(lVar1 + 8) != '\0') {
        FUN_00410f20(lVar1);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(uVar2);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

