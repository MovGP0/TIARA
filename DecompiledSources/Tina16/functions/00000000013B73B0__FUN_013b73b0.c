/* Ghidra address: 013b73b0 */
/* Ghidra symbol: FUN_013b73b0 */


undefined1 FUN_013b73b0(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined2 local_130;
  undefined1 *local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  char local_81;
  undefined8 *local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_44 [4];
  int local_40;
  uint local_3c;
  int local_38;
  longlong *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_b0 = auStack_158;
  local_108 = 0;
  local_110 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  *param_3 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_138 = 0;
  local_130 = 0;
  local_128 = local_44;
  FUN_014b7d50(6,param_1,1,0);
  local_a0 = param_1;
  cVar1 = FUN_01995600(param_1,0,0);
  if (cVar1 == '\0') {
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L" Unable to reset to graph start");
    FUN_004134c0(uVar4);
  }
  else {
    local_30 = (longlong *)FUN_01995660(local_a0,0,4);
    while (local_30 != (longlong *)0x0) {
      uVar2 = (**(code **)(*local_30 + 0xf8))(local_30);
      local_3c = (uint)uVar2;
      if (((local_3c == 9) || (local_3c == 0xe)) || (local_3c == 0xd)) {
        local_81 = (**(code **)(*local_30 + 0x2d0))(local_30,0,local_80);
        local_90 = 0;
        if (local_81 == '\x03') {
          local_90 = *local_80[0];
        }
        if (local_81 == '\x06') {
          local_90 = *local_80[0];
        }
        (**(code **)(*local_20 + 0x90))(local_20);
        (**(code **)(*local_30 + 0x288))(local_30,&local_58);
        iVar3 = (**(code **)(*local_30 + 0x1c8))();
        local_38 = 0;
        if (-1 < iVar3 + -1) {
          do {
            local_40 = (**(code **)(*local_30 + 0x210))(local_30,local_38);
            FUN_0043f750(&local_70,local_40);
            if (local_40 == 0) {
              FUN_00414b50(&local_70,&DAT_013b7870);
            }
            (**(code **)(*local_20 + 0x78))(local_20,local_70);
            local_38 = local_38 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (local_3c == 9) {
          FUN_00414b50(&local_68,&DAT_013b7880);
        }
        else if (local_3c == 0xe) {
          FUN_00414b50(&local_68,&DAT_013b7890);
        }
        else if (local_3c == 0xd) {
          FUN_00414b50(&local_68,&DAT_013b78a0);
        }
        local_100 = local_58;
        local_f8 = 0x11;
        local_f0 = local_68;
        local_e8 = 0x11;
        local_e0 = &local_90;
        local_d8 = 3;
        (**(code **)(*local_20 + 0x18))(local_20,&local_108,0);
        local_d0 = local_108;
        local_c8 = 0x11;
        (**(code **)(*local_20 + 0x18))(local_20,&local_110,1);
        local_c0 = local_110;
        local_b8 = 0x11;
        FUN_00442f70(&local_60,L"%s,%s,%.4f,%s,%s",&local_100,4);
        (**(code **)(*param_2 + 0x78))(param_2);
      }
      FUN_01995800(local_a0,0,4);
      local_30 = (longlong *)FUN_01995660(local_a0,0,4);
    }
    local_30 = (longlong *)0x0;
  }
  local_21 = 1;
  FUN_00410f20(local_20);
  FUN_00414560(&local_110,2);
  FUN_00414560(&local_70,5);
  return local_21;
}

