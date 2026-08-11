/* Ghidra address: 00956670 */
/* Ghidra symbol: FUN_00956670 */


void FUN_00956670(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x128);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x128));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x130));
  FUN_009545d0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

