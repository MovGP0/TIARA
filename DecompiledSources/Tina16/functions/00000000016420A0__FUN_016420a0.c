/* Ghidra address: 016420a0 */
/* Ghidra symbol: FUN_016420a0 */


undefined1 FUN_016420a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_69 = 0;
  local_78 = param_2;
  local_74 = param_3;
  local_70 = param_4;
  iVar3 = FUN_01641a00(param_1,param_4);
  if (iVar3 < 0) {
    FUN_0043f750(&local_38,local_70);
    FUN_0043f750(&local_40,local_78);
    FUN_0043f750(&local_48,local_74);
    local_98 = local_40;
    local_90 = &LAB_01642288;
    local_88 = local_48;
    FUN_00416cd0(local_30,5,local_38,&LAB_01642288);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
              (*(longlong **)(param_1 + 0x38),local_30[0]);
  }
  else {
    cVar2 = FUN_01641f00(auStack_b8,iVar3,local_78,local_74);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x38);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar3);
      FUN_0043f750(&local_60,local_78);
      FUN_0043f750(&local_68,local_74);
      local_98 = local_60;
      local_90 = &LAB_01642288;
      local_88 = local_68;
      FUN_00416cd0(&local_50,5,local_58,&LAB_01642288);
      (**(code **)(*plVar1 + 0x40))(plVar1,iVar3,local_50);
      local_69 = 1;
    }
  }
  FUN_00414560(&local_68,8);
  return local_69;
}

