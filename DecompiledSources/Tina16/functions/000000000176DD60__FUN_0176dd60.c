/* Ghidra address: 0176dd60 */
/* Ghidra symbol: FUN_0176dd60 */


void FUN_0176dd60(longlong param_1,longlong *param_2,undefined2 param_3,ushort param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined1 local_1d0 [256];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  undefined1 local_88 [88];
  undefined8 local_30;
  char local_21;
  undefined8 local_20;
  
  local_a0 = auStack_208;
  local_1d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_30 = 0;
  FUN_00417580(local_88,&DAT_0170b9c8);
  local_1e8 = CONCAT44(local_1e8._4_4_,param_5);
  FUN_017690a0(param_1,param_2,param_3,param_4);
  if (param_4 < 0x14) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0xd) = 1;
  }
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 == 0) {
    local_21 = '\x01';
    if (0x13 < param_4) {
      FUN_01d30f00(*param_2,&local_21,1);
    }
    if (local_21 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x90))(*(longlong **)(param_1 + 0xb8));
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
      if (param_4 < 0x19) {
        FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xb8));
      }
      else {
        FUN_01d32380(*param_2,*(undefined8 *)(param_1 + 0xb8));
      }
      if (0x14 < param_4) {
        FUN_01d30f00(*param_2,param_1 + 0x115,1);
      }
      if (*(char *)(param_1 + 0x115) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x88))
                  (*(longlong **)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
      }
      else {
        FUN_0176d320(param_1,*(undefined8 *)(param_1 + 0xb8));
      }
    }
    FUN_01d312f0(*param_2,param_1 + 0x100);
    FUN_01771110(&local_a8,*(undefined8 *)(param_1 + 0x100));
    FUN_00414ad0(param_1 + 0x100,local_a8);
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_00b928f0(&local_30,*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(*param_2 + 0x70));
      iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x100),local_30);
      if (iVar3 == 0) {
        FUN_00441820(&local_b0,local_30);
        if (local_b0 == 0) {
          FUN_00416ba0(param_1 + 0xf8,*(undefined8 *)PTR_DAT_020049a0,local_30);
          FUN_00441640(&local_b8,local_30);
          FUN_00441920(&local_c0,local_30);
          local_1e8 = local_c0;
          FUN_00416cd0(param_1 + 0x100,3,L"<TINADIR>",local_b8);
        }
        else {
          cVar1 = FUN_00440a20(local_30,1);
          if (cVar1 == '\0') {
            FUN_00441920(&local_c8,local_30);
            local_1e8 = local_c8;
            FUN_00416cd0(param_1 + 0xf8,3,*(undefined8 *)PTR_DAT_020049a0,L"\\SpiceLib\\");
            FUN_00441920(&local_d0,local_30);
            FUN_00416ba0(param_1 + 0x100,L"<TINADIR>\\SpiceLib\\",local_d0);
          }
          else {
            FUN_00414ad0(param_1 + 0xf8,local_30);
          }
        }
      }
      else {
        FUN_00414ad0(param_1 + 0xf8,local_30);
      }
    }
    if (local_21 == '\0') {
      *(undefined1 *)(param_1 + 0x62) = 1;
      if (*(char *)(param_1 + 0x117) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
        FUN_01768520(&local_1d8,*(undefined8 *)(param_1 + 0x48),*param_2);
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))
                  (*(longlong **)(param_1 + 0xb0),local_1d8);
      }
      else {
        FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
        FUN_00414b50(local_88,*(undefined8 *)(param_1 + 0x100));
        local_20 = FUN_017105e0(0);
        local_90 = FUN_0171af00(&DAT_0170d528,1,local_20);
        FUN_00416910(local_1d0,*(undefined8 *)(param_1 + 0x38),0xff);
        uVar4 = FUN_0171b840(local_90,local_1d0,local_88,param_1 + 0x115);
        *(undefined8 *)(param_1 + 0xb0) = uVar4;
        FUN_00410f20(local_90);
        FUN_01710700(local_20);
      }
    }
    FUN_01d30f00(*param_2,param_1 + 0x110,1);
    if (0x10 < param_4) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x90))(*(longlong **)(param_1 + 0xc0));
      FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 0xc0));
    }
    if (param_4 < 0x13) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x10))
                (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xc0));
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x90))(*(longlong **)(param_1 + 200));
      FUN_01d32040(*param_2,*(undefined8 *)(param_1 + 200));
    }
    if (0x15 < param_4) {
      FUN_01d312f0(*param_2,param_1 + 0x108);
    }
    if (param_4 < 0x20) {
      uVar4 = FUN_0175f5e0(*(undefined8 *)PTR_DAT_020016d0,*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0xa8) = uVar4;
    }
    else {
      FUN_01d30f00(*param_2,param_1 + 0xa8,8);
    }
  }
  if ((*(char *)(param_1 + 0x115) == '\0') || (*PTR_DAT_02003768 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x115) = uVar2;
  FUN_00414480(&local_1d8);
  FUN_00414560(&local_d0,6);
  FUN_00417740(local_88,&DAT_0170b9c8);
  FUN_00414480(&local_30);
  return;
}

