/* Ghidra address: 01b109c0 */
/* Ghidra symbol: FUN_01b109c0 */


void FUN_01b109c0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),iVar2);
      FUN_004095f0(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_01d34780(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

