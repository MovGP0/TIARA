/* Ghidra address: 01baa760 */
/* Ghidra symbol: FUN_01baa760 */


undefined8 FUN_01baa760(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar3;
  undefined4 uVar4;
  longlong local_res18 [2];
  int iVar2;
  
  local_res18[0] = param_3;
  FUN_00414610();
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
    iVar3 = 0;
    if (local_res18[0] != 0) {
      iVar3 = *(int *)(local_res18[0] + -4);
    }
  } while ((iVar1 <= iVar3) && (*(short *)(local_res18[0] + -2 + (longlong)iVar1 * 2) == 0x20));
  if (1 < iVar1) {
    FUN_00416e20(local_res18,1,iVar2);
  }
  iVar1 = FUN_004170c0(&LAB_01baa844,local_res18[0],1);
  if (0 < iVar1) {
    uVar4 = 0;
    if (local_res18[0] != 0) {
      uVar4 = *(undefined4 *)(local_res18[0] + -4);
    }
    FUN_00416e20(local_res18,iVar1,uVar4);
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

