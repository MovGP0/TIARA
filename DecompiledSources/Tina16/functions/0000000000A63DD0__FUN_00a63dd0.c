/* Ghidra address: 00a63dd0 */
/* Ghidra symbol: FUN_00a63dd0 */


void FUN_00a63dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_58 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414480(local_20);
  FUN_0043ea00(local_20,local_res18);
  FUN_00a5b2b0(&local_38,local_20[0]);
  FUN_00414480(local_20);
  FUN_00a5b480(&local_res18,local_38);
  FUN_00414480(&local_28);
  FUN_0043e600(&local_28,local_res10);
  FUN_00414b50(&local_res10,local_28);
  FUN_00414480(&local_28);
  cVar1 = FUN_00a63d30(auStack_88,local_res10,&local_39);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416db0(local_res10,L"font-family");
    if (iVar2 == 0) {
      FUN_00414480(&local_30);
      FUN_0043e600(&local_30,local_38);
      (**(code **)*param_1)(param_1,local_res10,local_30,local_res20);
      FUN_00414480(&local_30);
    }
    else {
      if (param_1[3] != 0) {
        iVar2 = FUN_004170c0(L"url(",local_res18,1);
        if (0 < iVar2) {
          FUN_00a63b70(param_1,&local_58,local_res18);
          FUN_00414b50(&local_res18,local_58);
        }
      }
      (**(code **)*param_1)(param_1,local_res10,local_res18,local_res20);
    }
  }
  else {
    local_68 = local_38;
    local_60 = local_res20;
    FUN_00a665e0(param_1,local_39,local_res10,local_res18);
  }
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res10,2);
  return;
}

