/* Ghidra address: 01879fe0 */
/* Ghidra symbol: FUN_01879fe0 */


void FUN_01879fe0(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                 char param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  uint local_c;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_8 == (longlong *)0x0) {
    param_8 = *(longlong **)(param_1 + 0x10);
  }
  local_c = FUN_004170c0(&DAT_0187a380,param_2,1);
  FUN_00416dc0(&local_48,param_2,1,local_c - 1);
  FUN_0043ea00(local_40,local_48);
  FUN_0043e130(&local_18,local_40[0]);
  FUN_01878ba0(param_2,&local_c,&local_20,&local_28,&local_30);
  FUN_0043ea00(&local_50,local_20);
  FUN_00414b50(&local_20,local_50);
  FUN_0043ea00(&local_58,local_28);
  FUN_00414b50(&local_28,local_58);
  FUN_0043ea00(&local_60,local_30);
  FUN_00414b50(&local_30,local_60);
  iVar1 = FUN_00416db0(local_18,&DAT_0187a390);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_18,&DAT_0187a3a4);
    if (iVar1 == 0) {
      *param_3 = 2;
    }
    else {
      iVar1 = FUN_00416db0(local_18,&DAT_0187a3b8);
      if (iVar1 == 0) {
        *param_3 = 3;
      }
      else {
        iVar1 = FUN_00416db0(local_18,&DAT_0187a3cc);
        if (iVar1 == 0) {
          *param_3 = 1;
        }
        else {
          *param_3 = 4;
        }
      }
    }
  }
  iVar1 = FUN_00416db0(local_18,L"COUNT");
  if ((iVar1 == 0) || (((param_9 != '\0' && (local_28 == 0)) && (local_30 == 0)))) {
    FUN_00414480(param_4);
    uVar2 = (**(code **)(*param_8 + 0x1e8))(param_8,local_20);
    *param_5 = uVar2;
    if (local_28 == 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_0043fc00(local_28);
    }
  }
  else {
    FUN_00414ad0(param_4,local_20);
    if (local_28 == 0) {
      *param_5 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_8 + 0x1e8))(param_8,local_28);
      *param_5 = uVar2;
    }
    if (local_30 == 0) {
      local_c = 0;
    }
    else {
      local_c = FUN_0043fc00(local_30);
    }
  }
  *(bool *)param_6 = (local_c & 1) != 0;
  *(bool *)param_7 = (local_c & 2) != 0;
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_30,4);
  return;
}

