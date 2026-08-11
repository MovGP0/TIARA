/* Ghidra address: 0197e7a0 */
/* Ghidra symbol: FUN_0197e7a0 */


void FUN_0197e7a0(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1,iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1[0xf] + 0x10);
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_1[0xf],iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00452320(param_1 + 0xf);
  FUN_004b56a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

