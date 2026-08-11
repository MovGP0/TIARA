/* Ghidra address: 005db780 */
/* Ghidra symbol: FUN_005db780 */


void FUN_005db780(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  FUN_005db630();
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 8) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

