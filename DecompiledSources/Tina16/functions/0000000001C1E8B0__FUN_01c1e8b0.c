/* Ghidra address: 01c1e8b0 */
/* Ghidra symbol: FUN_01c1e8b0 */


undefined8 FUN_01c1e8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined1 local_31;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_80 = auStack_c8;
  local_88 = 0;
  local_40 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  FUN_00414480(local_res20);
  FUN_01c1e7a0(param_1,&local_60,local_res18);
  FUN_01c1e370(&local_58,&local_60,0x2f);
  local_48 = 0;
  FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_88);
  uVar3 = FUN_00416740(local_88);
  local_a8 = (undefined4 *)((ulonglong)local_a8._4_4_ << 0x20);
  local_30 = thunk_FUN_041366ea(uVar3,0,0,0);
  if (local_30 != 0) {
    uVar3 = FUN_00416740(local_58);
    uVar1 = FUN_01c1e860(param_1,local_res18);
    local_a8 = (undefined4 *)0x0;
    local_a0 = CONCAT44(local_a0._4_4_,3);
    local_98 = 0;
    local_90 = 0;
    local_28 = thunk_FUN_041a8eab(local_30,uVar3,uVar1,0);
    if (local_28 != 0) {
      uVar3 = FUN_00416740(local_60);
      local_a8 = (undefined4 *)0x0;
      local_a0 = 0;
      local_98 = 0x80200000;
      local_90 = 0;
      local_20 = thunk_FUN_03c6d3f3(local_28,0,uVar3,L"HTTP/1.0");
      if (local_20 != 0) {
        local_a8 = (undefined4 *)((ulonglong)local_a8 & 0xffffffff00000000);
        iVar2 = FUN_0069a880(local_20,0,0,0);
        if (iVar2 != 0) {
          FUN_004169f0(&local_40,0x400);
          local_68 = 0;
          if (local_40 != 0) {
            local_68 = *(undefined4 *)(local_40 + -4);
          }
          local_44 = local_68;
          uVar3 = FUN_00414de0(&local_40);
          local_a8 = &local_48;
          iVar2 = thunk_FUN_041d7f51(local_20,0x21,uVar3,&local_44);
          local_31 = iVar2 != 0;
          if ((bool)local_31) {
            iVar2 = FUN_004170c0(&DAT_01c1edb4,local_40,1);
            FUN_004169f0(&local_40,iVar2 + -1);
            FUN_01c1e8b0(param_1,param_2,local_40,local_res20);
          }
          else {
            uVar3 = FUN_00414de0(&local_40);
            local_a8 = &local_48;
            iVar2 = thunk_FUN_041d7f51(local_20,0x2f,uVar3,&local_44);
            local_31 = iVar2 != 0;
            if ((bool)local_31) {
              iVar2 = FUN_004170c0(&DAT_01c1edb4,local_40,1);
              FUN_004169f0(&local_40,iVar2 + -1);
              iVar2 = FUN_004170c0(L"filename=",local_40,1);
              if (0 < iVar2) {
                local_70 = FUN_004170c0(L"filename=",local_40,1);
                local_70 = local_70 + 9;
                local_6c = 0;
                if (local_40 != 0) {
                  local_6c = *(undefined4 *)(local_40 + -4);
                }
                FUN_00416dc0(local_res20,local_40,local_70,local_6c);
              }
            }
            FUN_00414ad0(param_2,local_res18);
          }
          thunk_FUN_041fc663(local_20);
          thunk_FUN_041fc663(local_28);
          thunk_FUN_041fc663(local_30);
          goto LAB_01c1ecaa;
        }
      }
      FUN_01c1ecf0(0,local_80);
    }
    FUN_01c1ed10(0,local_80);
  }
  FUN_01c1ed30(0,local_80);
LAB_01c1ecaa:
  FUN_00414480(&local_88);
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_40);
  FUN_00414480(&local_res18);
  return param_2;
}

