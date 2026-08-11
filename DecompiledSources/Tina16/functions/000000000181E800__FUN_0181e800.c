/* Ghidra address: 0181e800 */
/* Ghidra symbol: FUN_0181e800 */


void FUN_0181e800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e5a0(&local_38,local_res10[0]);
  FUN_00416cd0(local_30,3,&DAT_0181ea44,local_38,&DAT_0181ea54);
  FUN_00416ba0(&local_48,&DAT_0181ea44,*(undefined8 *)(param_1 + 0x28));
  FUN_0043e5a0(&local_40,local_48);
  iVar1 = FUN_004170c0(local_30[0],local_40,1);
  if (iVar1 == 0) {
    iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x28));
    iVar1 = iVar1 + 1;
  }
  else {
    FUN_00416ba0(&local_50,local_res10[0],&DAT_0181ea54);
    iVar2 = FUN_00414cb0(local_50);
    iVar2 = iVar1 + iVar2;
    while( true ) {
      iVar3 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x28));
      if ((iVar3 < iVar2) ||
         (*(short *)(*(longlong *)(param_1 + 0x28) + -2 + (longlong)iVar2 * 2) == 0x22)) break;
      iVar2 = iVar2 + 1;
    }
    FUN_00416e20(param_1 + 0x28,iVar1,(iVar2 - iVar1) + 1);
  }
  FUN_0181dff0(&local_58,param_3);
  FUN_00416cd0(&local_20,4,local_res10[0],&DAT_0181ea54,local_58,&LAB_0181ea68);
  if ((1 < iVar1) &&
     (*(short *)(*(longlong *)(param_1 + 0x28) + -2 + (longlong)(iVar1 + -1) * 2) != 0x20)) {
    FUN_00416ba0(&local_20,&DAT_0181ea44,local_20);
  }
  FUN_00416ea0(local_20,param_1 + 0x28,iVar1);
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_20);
  FUN_00414480(local_res10);
  return;
}

