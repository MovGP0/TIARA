/* Ghidra address: 0046e940 */
/* Ghidra symbol: FUN_0046e940 */


void FUN_0046e940(longlong *param_1,longlong param_2,undefined8 param_3,char *param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_6a8 [32];
  undefined8 local_688;
  undefined1 *local_670;
  longlong *local_660;
  char *local_658;
  longlong local_650 [192];
  undefined8 local_50;
  uint local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  undefined8 local_20;
  
  local_670 = auStack_6a8;
  local_50 = 0;
  local_40 = 0;
  local_20 = 0;
  FUN_00417600(local_650,&DAT_0045ffc0,0x40);
  local_48 = (uint)(byte)param_4[1];
  local_658 = param_4 + (longlong)(int)local_48 + 3;
  FUN_00414480(&local_20);
  FUN_0041db80(&local_20,local_658);
  (**(code **)(*param_1 + 0x78))(param_1,&local_50,local_20);
  FUN_00414480(&local_20);
  FUN_0040d200(local_650,0x600,0);
  local_688 = CONCAT71(local_688._1_7_,1);
  FUN_00460e00(&local_40,param_4,param_5,local_650);
  cVar1 = *param_4;
  if (cVar1 == '\x01') {
    if (param_2 == 0) {
      cVar1 = (**(code **)(*param_1 + 0x88))(param_1,param_3,local_50,local_40);
      if (cVar1 == '\0') {
        FUN_0046e790(param_1,local_38);
        FUN_0046c6d0(local_38);
        local_688 = local_40;
        cVar1 = (**(code **)(*param_1 + 0x80))(param_1,local_38,param_3,local_50);
        if (cVar1 == '\0') {
          FUN_0046e760(param_1);
        }
        FUN_0046e7b0(param_1,local_38);
      }
    }
    else if (local_48 == 0) {
      cVar1 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,local_50);
      if (cVar1 == '\0') {
        local_688 = local_40;
        cVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,local_50);
        if (cVar1 == '\0') {
          FUN_0046e760(param_1);
        }
      }
    }
    else {
      local_688 = local_40;
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,local_50);
      if (cVar1 == '\0') {
        FUN_0046e760(param_1);
      }
    }
  }
  else if (cVar1 == '\x02') {
    if ((param_2 != 0) && (local_48 == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,local_50);
      if (cVar1 != '\0') goto code_r0x0046ecde;
    }
    FUN_0046e760(param_1);
  }
  else if (cVar1 == '\x04') {
    if ((param_2 == 0) && (local_48 == 1)) {
      cVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_3,local_50,local_40);
      if (cVar1 != '\0') goto code_r0x0046ecde;
    }
    FUN_0046e760(param_1);
  }
  else {
    FUN_0046e760(param_1);
  }
code_r0x0046ecde:
  FUN_00461400(param_4,local_40,1);
  iVar2 = 0x40;
  local_660 = local_650;
  do {
    if (*local_660 == 0) break;
    if (local_660[1] == 0) {
      if (local_660[2] != 0) {
        FUN_004168b0(local_660[2],*local_660);
      }
    }
    else {
      FUN_00415530(local_660[1],*local_660,0);
    }
    local_660 = local_660 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00417840(local_650,&DAT_0045ffc0,0x40);
  FUN_00414480(&local_50);
  FUN_00419430(&local_40,&DAT_0045e9a0);
  FUN_00414480(&local_20);
  return;
}

