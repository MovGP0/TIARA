/* Ghidra address: 00d57fd0 */
/* Ghidra symbol: FUN_00d57fd0 */


undefined8 * FUN_00d57fd0(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_00414ad0(param_1,param_3);
  FUN_0040d200(local_30,8,0);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + -4);
  }
  uVar1 = FUN_00416740(param_3);
  thunk_FUN_0418ae1a(param_2,uVar1,uVar2,local_30);
  if (param_4 < local_30[0]) {
    FUN_00414480(param_1);
    iVar4 = 0;
    if (param_3 != 0) {
      iVar4 = *(int *)(param_3 + -4);
    }
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        FUN_00416780(&local_40,*(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2));
        FUN_00416cd0(&local_38,3,*param_1,local_40,&DAT_00d58188);
        uVar2 = 0;
        if (local_38 != 0) {
          uVar2 = *(undefined4 *)(local_38 + -4);
        }
        uVar1 = FUN_00416740(local_38);
        thunk_FUN_0418ae1a(param_2,uVar1,uVar2,local_30);
        if (param_4 < local_30[0]) break;
        FUN_00416780(&local_48,*(undefined2 *)(param_3 + -2 + (longlong)iVar3 * 2));
        FUN_00416ad0(param_1,local_48);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00416ad0(param_1,&DAT_00d58188);
  }
  FUN_00414560(&local_48,3);
  return param_1;
}

