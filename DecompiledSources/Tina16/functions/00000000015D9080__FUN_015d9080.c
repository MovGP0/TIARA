/* Ghidra address: 015d9080 */
/* Ghidra symbol: FUN_015d9080 */


void FUN_015d9080(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  char cVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50 [2];
  undefined1 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  byte local_21;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_30 = 0;
  FUN_015bf7d0(&local_10,*param_2);
  FUN_015bf830(&local_20,*param_2);
  FUN_015bf710(&local_18,*param_2);
  local_34 = 0;
  if (local_18 != 0) {
    local_34 = *(int *)(local_18 + -4);
  }
  local_38 = 0;
  if (local_20 != 0) {
    local_38 = *(int *)(local_20 + -4);
  }
  FUN_00416dc0(&local_18,local_18,1,local_34 - local_38);
  if (((*(longlong *)(param_1 + 0x238) == 0) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x238) + 0xa0) == 0)) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    cVar1 = FUN_015da4a0(param_1,*param_2);
    if (cVar1 == '\0') {
      local_21 = 0;
      goto LAB_015d9207;
    }
  }
  local_21 = 1;
LAB_015d9207:
  if (param_3 == -1) {
    if ((local_21 != 0) && (*(char *)(param_1 + 0x103) == '\x02')) {
      if (*(ushort *)(param_1 + 0x240) < 0xfc) {
        FUN_00414b50(&local_20,L".ZIP");
      }
      else {
        FUN_00414b50(&local_20,&LAB_015d975c);
      }
      FUN_00416cd0(param_2,3,local_10,local_18,local_20);
    }
  }
  else if (*(char *)(param_1 + 0x103) == '\x01') {
    if (local_21 != 0) {
      FUN_00414b50(&local_20,L".exe");
    }
    if (*(char *)(*(longlong *)(param_1 + 0x108) + 8) == '\0') {
      FUN_00416cd0(param_2,3,local_10,local_18,local_20);
    }
    else {
      local_50[0] = param_3 + 1;
      local_48 = 0;
      FUN_00442f70(&local_40,L"%.3u",local_50,0);
      FUN_00416cd0(param_2,5,local_10,local_18,&DAT_015d96dc,local_40,local_20);
    }
    if (param_4 != '\0') {
      cVar1 = FUN_015bf1b0(*param_2);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_30,*param_2);
        if (*(char *)(*(longlong *)(param_1 + 0x108) + 8) == '\0') {
          local_50[0] = param_3 + 1;
          local_48 = 0;
          FUN_00442f70(&local_58,L"%.3u",local_50,0);
          FUN_00416cd0(param_2,5,local_10,local_18,&DAT_015d96dc,local_58,local_20);
        }
        else {
          FUN_00416cd0(param_2,3,local_10,local_18,local_20);
        }
        cVar1 = FUN_015bf1b0(*param_2);
        if (cVar1 == '\0') {
          FUN_00414ad0(param_2,local_30);
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x103) == '\x02') {
    if ((local_21 & param_3 == 0) == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x108) + 8) == '\0') {
        if (*(ushort *)(param_1 + 0x240) < 0xfc) {
          local_50[0] = param_3 + 1;
          local_48 = 0;
          FUN_00442f70(&local_68,L"%.2d",local_50,0);
          FUN_00416cd0(param_2,4,local_10,local_18,&PTR_DAT_015d9704,local_68);
        }
        else {
          local_50[0] = param_3 + 1;
          local_48 = 0;
          FUN_00442f70(&local_70,L"%.2d",local_50,0);
          FUN_00416cd0(param_2,4,local_10,local_18,&PTR_DAT_015d9730,local_70);
        }
      }
      else {
        local_50[0] = param_3 + 1;
        local_48 = 0;
        FUN_00442f70(&local_60,L"%.3u",local_50,0);
        FUN_00416cd0(param_2,5,local_10,local_18,&DAT_015d96dc,local_60,local_20);
      }
    }
    else {
      FUN_00416cd0(param_2,3,local_10,local_18,L".exe");
    }
  }
  FUN_00414560(&local_70,4);
  FUN_00414480(&local_40);
  FUN_00414480(&local_30);
  FUN_00414560(&local_20,3);
  return;
}

