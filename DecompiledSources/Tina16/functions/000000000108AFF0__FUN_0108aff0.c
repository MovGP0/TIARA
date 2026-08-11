/* Ghidra address: 0108aff0 */
/* Ghidra symbol: FUN_0108aff0 */


void FUN_0108aff0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  local_60 = auStack_c8;
  local_80 = 0;
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_28 = 0;
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_70,PTR_PTR_02004e30);
  FUN_00b8e650(uVar2,&local_68,L"HDLStrings.Msg_SelectDir",local_70);
  FUN_004168e0(&local_78,*(undefined8 *)(param_1 + 0xb18));
  local_a8 = 0;
  cVar1 = FUN_00b96980(local_68,local_78,&local_30,8);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xb50) = 1;
    FUN_00416ba0(&local_80,local_30,L"\\*.*");
    local_28 = FUN_01603790(local_80,0x20);
    FUN_0108ad50(local_28,local_30);
    local_a8 = CONCAT71(local_a8._1_7_,1);
    local_a0 = 0;
    local_98 = 1;
    FUN_010b0990(*(undefined8 *)(param_1 + 0xac8),local_28,local_30,0);
    FUN_0107a0c0(param_1);
    local_58 = FUN_01081ce0(param_1);
    FUN_010792a0(param_1,local_58);
    if (local_58 != 0) {
      FUN_01085110(param_1,*(undefined8 *)(local_58 + 0x10),0xffffffff);
    }
    *(undefined1 *)(param_1 + 0xb51) = 0;
    *(undefined1 *)(param_1 + 0xb50) = 0;
  }
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_48,4);
  return;
}

