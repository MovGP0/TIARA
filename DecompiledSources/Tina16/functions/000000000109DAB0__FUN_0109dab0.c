/* Ghidra address: 0109dab0 */
/* Ghidra symbol: FUN_0109dab0 */


void FUN_0109dab0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 char param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_3c;
  undefined8 local_38;
  char local_29 [9];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  FUN_00e01bc0(&local_38,param_2);
  FUN_004b84c0(param_2,&local_3c,4);
  FUN_004b84c0(param_2,local_29,1);
  local_29[0] = local_29[0] == '\0';
  if (param_5 == '\0') {
    if ((bool)local_29[0]) {
      FUN_00416880(&local_60,local_38);
      uVar1 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x550),param_3,local_60)
      ;
    }
    else {
      FUN_00416880(&local_58,local_38);
      uVar1 = FUN_006def00(*(undefined8 *)(*(longlong *)(param_1 + 0xa00) + 0x550),0,local_58);
    }
    if (param_6 != '\0') {
      FUN_00416880(&local_68,local_38);
      uVar2 = FUN_00f7ce40(&DAT_00f7c0f8,1,local_68);
      FUN_006dc990(uVar1,uVar2);
    }
  }
  else {
    if (param_3 == 0) {
      uVar1 = FUN_004aeac0(*(undefined8 *)
                            (param_1 + 0x9e8 + (longlong)*(int *)(param_1 + 0xa08) * 8),param_4);
    }
    else {
      uVar1 = FUN_006dd770(param_3,param_4);
    }
    FUN_00416880(local_50,local_38);
    FUN_006dc8a0(uVar1,local_50[0]);
  }
  iVar3 = 0;
  iVar4 = local_3c;
  if (-1 < local_3c + -1) {
    do {
      FUN_0109dab0(param_1,param_2,uVar1,iVar3,param_5,param_6);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_68,4);
  FUN_004144d0(&local_38);
  return;
}

