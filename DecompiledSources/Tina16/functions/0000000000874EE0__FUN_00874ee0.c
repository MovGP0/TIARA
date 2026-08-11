/* Ghidra address: 00874ee0 */
/* Ghidra symbol: FUN_00874ee0 */


undefined8
FUN_00874ee0(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,char param_5
            )

{
  int iVar1;
  int iVar2;
  
  if (param_5 == '\0') {
    FUN_00874fd0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_00416db0(param_3,&LAB_00874fc8);
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(param_3,*param_2,1);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_01e1df90)(param_3,*param_2);
    }
    if (iVar1 == 0) {
      FUN_00414ad0(param_1,*param_2);
      if ((char)param_4 != '\0') {
        FUN_00414480(param_2);
      }
    }
    else {
      FUN_00416dc0(param_1,*param_2,1,iVar1 + -1);
      if ((char)param_4 != '\0') {
        iVar2 = 0;
        if (param_3 != 0) {
          iVar2 = *(int *)(param_3 + -4);
        }
        FUN_00416dc0(param_2,*param_2,iVar1 + iVar2,0x7fffffff);
      }
    }
  }
  return param_1;
}

