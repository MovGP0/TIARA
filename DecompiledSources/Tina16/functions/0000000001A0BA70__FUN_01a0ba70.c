/* Ghidra address: 01a0ba70 */
/* Ghidra symbol: FUN_01a0ba70 */


void FUN_01a0ba70(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,byte param_5,
                 double param_6,char param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar2 = (longlong)param_3;
  if (*(double *)(*(longlong *)(param_1 + 0xc0) + 0x183 + lVar2 * 8) ==
      *(double *)(PTR_DAT_02001120 + lVar2 * 8 + 0xc0)) {
    if ((param_5 & *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc0) != '\0') != 0) {
      if (param_7 == '\0') {
        FUN_016b9450(&local_48,*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x183 + lVar2 * 8));
        FUN_00416880(&local_50,local_48);
        FUN_00416cd0(param_2,4,*param_2,local_res20,local_50,&DAT_01a0bee8);
      }
      else {
        uVar3 = FUN_0040c770(*(undefined8 *)
                              (*(longlong *)(param_1 + 0xc0) + 0x183 + (longlong)param_3 * 8));
        FUN_0043f780(&local_40,uVar3);
        FUN_00416cd0(param_2,4,*param_2,local_res20,local_40,&DAT_01a0bee8);
      }
      if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0xc0) != '\x05') &&
         (*(int *)(param_1 + 0x9c) % 5 == 0)) {
        FUN_00416ba0(&local_58,L".OPTIONS ",*param_2);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x20);
        (**(code **)(*plVar1 + 200))(plVar1,local_58);
        FUN_00414480(param_2);
        *(undefined4 *)(param_1 + 0x9c) = 0;
      }
      *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    }
  }
  else if (((*(char *)(*(longlong *)(param_1 + 0xc0) + 0xc0) == '\0') || (param_5 == 0)) ||
          (*(double *)(*(longlong *)(param_1 + 0xc0) + 0x183 + (longlong)param_3 * 8) != param_6)) {
    if (param_7 == '\0') {
      FUN_016b9450(&local_28,
                   *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x183 + (longlong)param_3 * 8));
      FUN_00416880(&local_30,local_28);
      FUN_00416cd0(param_2,4,*param_2,local_res20,local_30,&DAT_01a0bee8);
    }
    else {
      uVar3 = FUN_0040c770(*(undefined8 *)
                            (*(longlong *)(param_1 + 0xc0) + 0x183 + (longlong)param_3 * 8));
      FUN_0043f780(local_20,uVar3);
      FUN_00416cd0(param_2,4,*param_2,local_res20,local_20[0],&DAT_01a0bee8);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0xc0) + 0xc0) != '\x05') &&
       (*(int *)(param_1 + 0x9c) % 5 == 0)) {
      FUN_00416ba0(&local_38,L".OPTIONS ",*param_2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x20);
      (**(code **)(*plVar1 + 200))(plVar1,local_38);
      FUN_00414480(param_2);
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  FUN_00414560(&local_58,2);
  FUN_004144d0(&local_48);
  FUN_00414560(&local_40,3);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

