/* Ghidra address: 012d9330 */
/* Ghidra symbol: FUN_012d9330 */


undefined8 FUN_012d9330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_f0;
  undefined1 local_e8;
  longlong *local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  int local_78 [2];
  undefined1 local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong *local_58;
  undefined1 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_30;
  
  local_30 = 0;
  iVar1 = FUN_005bbb10(param_3,param_4);
  lVar2 = FUN_005bbb60(param_3,param_4);
  lVar3 = FUN_005bbbb0(param_3,param_4);
  lVar4 = FUN_005bbc00(param_3,param_4);
  if (iVar1 < 1) {
    if (lVar2 < 1) {
      if (lVar3 < 1) {
        FUN_00414b50(&local_30,L"%d second(s)");
        local_f0 = &local_80;
        local_e8 = 0x10;
        local_80 = lVar4;
        FUN_00442f70(param_2,local_30,&local_f0,0);
      }
      else {
        FUN_00414b50(&local_30,L"%d minute(s) %d second(s)");
        local_e0 = &local_80;
        local_d8 = 0x10;
        local_88 = lVar4 % 0x3c;
        local_d0 = &local_88;
        local_c8 = 0x10;
        local_80 = lVar3;
        FUN_00442f70(param_2,local_30,&local_e0,1);
      }
    }
    else {
      FUN_00414b50(&local_30,L"%d hour(s) %d minute(s) %d second(s)");
      local_c0 = &local_80;
      local_b8 = 0x10;
      local_88 = lVar3 % 0x3c;
      local_b0 = &local_88;
      local_a8 = 0x10;
      local_90 = lVar4 % 0x3c;
      local_a0 = &local_90;
      local_98 = 0x10;
      local_80 = lVar2;
      FUN_00442f70(param_2,local_30,&local_c0,2);
    }
  }
  else {
    FUN_00414b50(&local_30,L"%d day(s) %d hour(s) %d minute(s) %d second(s)");
    local_70 = 0;
    local_80 = lVar2 % 0x18;
    local_68 = &local_80;
    local_60 = 0x10;
    local_88 = lVar3 % 0x3c;
    local_58 = &local_88;
    local_50 = 0x10;
    local_90 = lVar4 % 0x3c;
    local_48 = &local_90;
    local_40 = 0x10;
    local_78[0] = iVar1;
    FUN_00442f70(param_2,local_30,local_78,3);
  }
  FUN_00414480(&local_30);
  return param_2;
}

