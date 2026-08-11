/* Ghidra address: 017109f0 */
/* Ghidra symbol: FUN_017109f0 */


undefined8 FUN_017109f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_10;
  
  local_10 = 0;
  FUN_01710900(&local_10,*param_2);
  if (local_10 == 0) {
    FUN_00414480(param_2);
  }
  else {
    iVar1 = FUN_004170c0(local_10,*param_2,1);
    iVar2 = 0;
    if (local_10 != 0) {
      iVar2 = *(int *)(local_10 + -4);
    }
    uVar3 = 0;
    if (*param_2 != 0) {
      uVar3 = *(undefined4 *)(*param_2 + -4);
    }
    FUN_00416dc0(param_2,*param_2,iVar1 + iVar2,uVar3);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

