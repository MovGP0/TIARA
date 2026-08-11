/* Ghidra address: 008af470 */
/* Ghidra symbol: FUN_008af470 */


undefined8 FUN_008af470(longlong param_1,undefined8 param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414480(param_2);
  FUN_00416e20(param_3,1,1);
  *(undefined4 *)(param_1 + 0x9c) = 1;
  do {
    iVar3 = 0;
    lVar2 = *param_3;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    if (iVar3 < *(int *)(param_1 + 0x9c)) goto code_r0x008af58d;
    sVar1 = *(short *)(*param_3 + -2 + (longlong)*(int *)(param_1 + 0x9c) * 2);
    if (sVar1 == 0x5c) {
      iVar3 = 0;
      if (lVar2 != 0) {
        iVar3 = *(int *)(lVar2 + -4);
      }
      if (*(int *)(param_1 + 0x9c) < iVar3) {
        FUN_00416e20(param_3,*(undefined4 *)(param_1 + 0x9c),1);
      }
    }
    else if (sVar1 == 0x22) {
      FUN_00416dc0(param_2,*param_3,1,*(int *)(param_1 + 0x9c) + -1);
      FUN_00416dc0(param_3,*param_3,*(int *)(param_1 + 0x9c) + 1,0x7fffffff);
code_r0x008af58d:
      FUN_00874ee0(&local_10,param_3,&LAB_008af5e4,1,1);
      FUN_00414480(&local_10);
      return param_2;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  } while( true );
}

