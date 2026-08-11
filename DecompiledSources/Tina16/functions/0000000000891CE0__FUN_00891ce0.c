/* Ghidra address: 00891ce0 */
/* Ghidra symbol: FUN_00891ce0 */


longlong * FUN_00891ce0(longlong *param_1,longlong *param_2,undefined2 *param_3,char param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_4 == '\0') {
    FUN_0043f750(&local_20,*(undefined1 *)param_3);
    FUN_0043f750(&local_28,*(undefined1 *)((longlong)param_3 + 1));
    FUN_0043f750(&local_30,*(undefined1 *)(param_3 + 1));
    FUN_0043f750(&local_38,*(undefined1 *)((longlong)param_3 + 3));
    FUN_00416cd0(param_2,7,local_20,&DAT_00891ed8,local_28,&DAT_00891ed8,local_30,&DAT_00891ed8,
                 local_38);
  }
  else if (param_4 == '\x01') {
    FUN_00414480(param_2);
    iVar2 = 8;
    do {
      uVar1 = (**(code **)(*param_1 + 0xa8))(param_1,*param_3);
      FUN_0043fba0(&local_40,uVar1,1);
      FUN_00416cd0(param_2,3,*param_2,local_40,&LAB_00891ee8);
      param_3 = param_3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0;
    if (*param_2 != 0) {
      iVar2 = *(int *)(*param_2 + -4);
    }
    FUN_004169f0(param_2,iVar2 + -1);
  }
  else {
    FUN_0089bf30(param_1);
  }
  FUN_00414560(&local_40,5);
  return param_2;
}

