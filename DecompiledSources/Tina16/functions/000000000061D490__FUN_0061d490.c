/* Ghidra address: 0061d490 */
/* Ghidra symbol: FUN_0061d490 */


undefined8 *
FUN_0061d490(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,byte param_5
            )

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if ((param_5 & 2) == 0) {
    FUN_00414c70(local_20,param_2);
    FUN_00414c70(&local_28,param_3);
  }
  else {
    FUN_0061d840(local_20,param_2);
    FUN_0061d840(&local_28,param_3);
  }
  FUN_00414c70(&local_30,param_2);
  FUN_004144d0(param_1);
  do {
    if (local_20[0] == 0) {
code_r0x0061d603:
      FUN_004144d0(local_40);
      FUN_00414590(&local_30,3);
      return param_1;
    }
    iVar1 = FUN_0061d970(local_28,local_20[0]);
    if (iVar1 == 0) {
      FUN_004155b0(param_1,local_30);
      goto code_r0x0061d603;
    }
    FUN_00415ad0(local_40,local_30,1,iVar1 + -1);
    FUN_00415980(param_1,3,*param_1,local_40[0],param_4);
    iVar2 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + -4);
    }
    FUN_00415ad0(&local_30,local_30,iVar1 + iVar2,0x7fffffff);
    if ((param_5 & 1) == 0) {
      FUN_004155b0(param_1,local_30);
      goto code_r0x0061d603;
    }
    iVar2 = 0;
    if (local_28 != 0) {
      iVar2 = *(int *)(local_28 + -4);
    }
    FUN_00415ad0(local_20,local_20[0],iVar1 + iVar2,0x7fffffff);
  } while( true );
}

