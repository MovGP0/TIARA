/* Ghidra address: 00892820 */
/* Ghidra symbol: FUN_00892820 */


undefined8 FUN_00892820(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_30;
  
  local_30 = 0;
  FUN_00414480(param_1);
  if (DAT_01e234b8 != (code *)0x0) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + -4);
    }
    uVar2 = FUN_00416740(param_2);
    iVar1 = (*DAT_01e234b8)(0,uVar2,uVar4,0,0);
    if (iVar1 == 0) {
      FUN_00874a00();
    }
    FUN_004169f0(&local_30,iVar1);
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + -4);
    }
    uVar3 = FUN_00416740(local_30);
    iVar1 = (*DAT_01e234b8)(0,uVar2,uVar4,uVar3,iVar1);
    if (iVar1 == 0) {
      FUN_00874a00();
    }
    FUN_00414ad0(param_1,local_30);
  }
  FUN_00414480(&local_30);
  return param_1;
}

