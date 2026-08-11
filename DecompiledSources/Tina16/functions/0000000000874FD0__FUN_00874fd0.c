/* Ghidra address: 00874fd0 */
/* Ghidra symbol: FUN_00874fd0 */


undefined8 FUN_00874fd0(undefined8 param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = FUN_00416db0(param_3,&LAB_00875118);
  if (iVar1 == 0) {
    iVar1 = FUN_004170c0(param_3,*param_2,1);
  }
  else {
    FUN_0043e130(local_20,param_3);
    FUN_0043e130(&local_28,*param_2);
    iVar1 = (*(code *)PTR_FUN_01e1df90)(local_20[0],local_28);
  }
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,*param_2);
    if (param_4 != '\0') {
      FUN_00414480(param_2);
    }
  }
  else {
    FUN_00416dc0(param_1,*param_2,1,iVar1 + -1);
    if (param_4 != '\0') {
      iVar2 = 0;
      if (param_3 != 0) {
        iVar2 = *(int *)(param_3 + -4);
      }
      FUN_00416dc0(param_2,*param_2,iVar1 + iVar2,0x7fffffff);
    }
  }
  FUN_00414560(&local_28,2);
  return param_1;
}

