/* Ghidra address: 012b9670 */
/* Ghidra symbol: FUN_012b9670 */


undefined8 FUN_012b9670(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_004170c0(&DAT_012b9754,*param_3,1);
  uVar2 = 0;
  if (*param_3 != 0) {
    uVar2 = *(undefined4 *)(*param_3 + -4);
  }
  FUN_00416dc0(local_20,*param_3,iVar1 + 1,uVar2);
  uVar2 = 0;
  if (local_20[0] != 0) {
    uVar2 = *(undefined4 *)(local_20[0] + -4);
  }
  FUN_00416e20(local_20,uVar2,1);
  FUN_00416dc0(param_3,*param_3,1,iVar1 + -1);
  FUN_00414ad0(param_2,local_20[0]);
  FUN_00414480(local_20);
  return param_2;
}

