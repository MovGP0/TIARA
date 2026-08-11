/* Ghidra address: 007dc990 */
/* Ghidra symbol: FUN_007dc990 */


undefined8 FUN_007dc990(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + -4);
  }
  if (iVar4 <= iVar1) {
    uVar6 = 0;
    if (param_3 != 0) {
      uVar6 = *(undefined4 *)(param_3 + -4);
    }
    uVar2 = FUN_00416740(*param_2);
    uVar3 = FUN_00416740(param_3);
    iVar1 = FUN_0043e7e0(uVar2,uVar3,uVar6);
    if (iVar1 == 0) {
      uVar5 = 1;
      uVar6 = 0;
      if (param_3 != 0) {
        uVar6 = *(undefined4 *)(param_3 + -4);
      }
      FUN_00416e20(param_2,1,uVar6);
    }
  }
  return uVar5;
}

