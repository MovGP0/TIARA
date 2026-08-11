/* Ghidra address: 018d75e0 */
/* Ghidra symbol: FUN_018d75e0 */


undefined8
FUN_018d75e0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
            int param_6)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  bool local_41;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  uint local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_24 = param_5;
  while( true ) {
    if (param_6 < local_24) {
      local_41 = false;
    }
    else {
      FUN_00416780(&local_58,*(undefined2 *)(param_3 + -2 + (longlong)local_24 * 2));
      local_40 = local_58;
      iVar2 = FUN_004170c0(local_58,L" .,-;",1);
      local_41 = iVar2 == 0;
    }
    if (local_41 == false) break;
    local_24 = local_24 + 1;
  }
  FUN_00414480(&local_10);
  FUN_004168b0(&local_60,param_3);
  FUN_00416dc0(&local_10,local_60,(longlong)param_4,(longlong)(local_24 - param_4));
  FUN_004168e0(&local_30,local_10);
  FUN_00414480(&local_10);
  FUN_00414520(&local_18);
  FUN_0043e840(&local_18,local_30);
  FUN_018d34c0(&local_68,local_18);
  FUN_004168e0(&local_38,local_68);
  FUN_00414520(&local_18);
  local_28 = param_5 - param_4;
  local_24 = FUN_00414cc0(local_38);
  if (0 < local_24) {
    do {
      uVar1 = *(ushort *)(local_38 + -2 + (longlong)local_24 * 2);
      if ((int)(uint)uVar1 < (int)local_28) {
        local_28 = (uint)uVar1;
        break;
      }
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (local_28 == param_5 - param_4) {
    FUN_00414520(param_2);
  }
  else {
    FUN_00414480(&local_20);
    FUN_004168b0(&local_70,local_30);
    FUN_00416dc0(&local_20,local_70,1,(longlong)(int)local_28);
    FUN_004168e0(param_2,local_20);
    FUN_00414480(&local_20);
  }
  FUN_00414560(&local_70,4);
  FUN_004145c0(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00414520(&local_18);
  FUN_00414480(&local_10);
  return param_2;
}

