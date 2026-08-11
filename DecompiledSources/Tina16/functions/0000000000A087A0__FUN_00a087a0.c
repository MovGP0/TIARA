/* Ghidra address: 00a087a0 */
/* Ghidra symbol: FUN_00a087a0 */


void FUN_00a087a0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10);
  if (0 < iVar2) {
    do {
      uVar1 = FUN_00a08e00(*(undefined8 *)(param_1 + 0xb8),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
  FUN_009ec960(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

