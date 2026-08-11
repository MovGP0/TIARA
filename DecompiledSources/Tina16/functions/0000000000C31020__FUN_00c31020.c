/* Ghidra address: 00c31020 */
/* Ghidra symbol: FUN_00c31020 */


void FUN_00c31020(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

