/* Ghidra address: 01710900 */
/* Ghidra symbol: FUN_01710900 */


undefined8 FUN_01710900(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar3;
  undefined4 uVar4;
  longlong local_res10 [3];
  int iVar2;
  
  local_res10[0] = param_2;
  FUN_00414610();
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
  } while ((iVar1 <= iVar3) && (*(short *)(local_res10[0] + -2 + (longlong)iVar1 * 2) == 0x20));
  if (1 < iVar1) {
    FUN_00416e20(local_res10,1,iVar2);
  }
  iVar1 = FUN_004170c0(&LAB_017109e4,local_res10[0],1);
  if (0 < iVar1) {
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(undefined4 *)(local_res10[0] + -4);
    }
    FUN_00416e20(local_res10,iVar1,uVar4);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

