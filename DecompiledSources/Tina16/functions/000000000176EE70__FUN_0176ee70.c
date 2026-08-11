/* Ghidra address: 0176ee70 */
/* Ghidra symbol: FUN_0176ee70 */


void FUN_0176ee70(undefined8 param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_278 [32];
  undefined1 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210 [256];
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 *local_80;
  longlong *local_78;
  bool local_69;
  longlong *local_68;
  bool local_59;
  longlong *local_58;
  bool local_49;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  longlong *local_20;
  
  local_80 = auStack_278;
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  local_228 = 0;
  local_218 = 0;
  local_220 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f0 = 0;
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  local_d8 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_c0 = 0;
  local_d0 = (longlong *)0x0;
  local_c8 = 0;
  local_a8 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_88 = 0;
  local_98 = 0;
  local_a0 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_38 = 0;
  local_40 = 0;
  puVar1 = auStack_278;
  if (param_2 != (longlong *)0x0) {
    iVar3 = (**(code **)(*param_2 + 0x28))();
    local_2c = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_004b3cf0(param_2,&local_90,local_2c);
        FUN_0043ea00(&local_88,local_90);
        if (local_88 == 0) {
LAB_0176f0d7:
          local_49 = false;
        }
        else {
          FUN_004b5390(param_2,&local_a0,local_2c);
          FUN_0043ea00(&local_98,local_a0);
          if (local_98 == 0) goto LAB_0176f0d7;
          FUN_004b5390(param_2,&local_b0,local_2c);
          FUN_0043ea00(&local_a8,local_b0);
          FUN_00415dd0(&local_b8,local_a8,0);
          local_48 = local_b8;
          cVar2 = FUN_0061d9b0(&DAT_0176f694,local_b8);
          local_49 = cVar2 == '\0';
        }
        if (local_49 == false) {
          local_59 = false;
        }
        else {
          FUN_004b5390(param_2,&local_c8,local_2c);
          FUN_0043ea00(&local_c0,local_c8);
          FUN_00415dd0(&local_d0,local_c0,0);
          local_58 = local_d0;
          cVar2 = FUN_0061d9b0(&DAT_0176f6a4,local_d0);
          local_59 = cVar2 == '\0';
        }
        if (local_59 == false) {
          local_69 = false;
        }
        else {
          FUN_004b5390(param_2,&local_e0,local_2c);
          FUN_0043ea00(&local_d8,local_e0);
          FUN_00415dd0(&local_e8,local_d8,0);
          local_68 = local_e8;
          cVar2 = FUN_0061da30(&DAT_0176f694,local_e8);
          local_69 = cVar2 == '\0';
        }
        if (local_69 != false) {
          FUN_004b5390(param_2,&local_f8,local_2c);
          FUN_0043ea00(&local_f0,local_f8);
          FUN_00415dd0(&local_100,local_f0,0);
          local_78 = local_100;
          cVar2 = FUN_0061da30(&DAT_0176f6a4,local_100);
          if (cVar2 == '\0') {
            FUN_004b3cf0(param_2,&local_110,local_2c);
            FUN_0043e130(&local_108,local_110);
            FUN_00416910(local_210,local_108,0xff);
            local_28 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_210,0);
            FUN_004b5390(param_2,&local_220,local_2c);
            FUN_0043e130(&local_38,local_220);
            local_258 = 1;
            FUN_00456a50(&local_38,&local_218,&DAT_0176f6b4);
            FUN_00415dd0(local_28 + 0x10,local_218,0);
            *(undefined8 *)(local_28 + 0x28) = 0;
            (**(code **)(*param_3 + 0x50))(param_3,local_28);
          }
        }
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = local_80;
    if (param_4 != '\0') {
      local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b4b10(local_20,L"LAMBDAN=100M");
      iVar3 = (**(code **)(*local_20 + 0x28))();
      local_2c = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_004b3cf0(local_20,&local_228,local_2c);
          iVar4 = (**(code **)(*param_2 + 0xb8))(param_2,local_228);
          if (iVar4 == -1) {
            FUN_004b3cf0(local_20,&local_238,local_2c);
            FUN_0043e130(&local_230,local_238);
            FUN_00416910(local_210,local_230,0xff);
            local_28 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_210,0);
            FUN_004b5390(local_20,&local_248,local_2c);
            FUN_0043e130(&local_40,local_248);
            local_258 = 1;
            FUN_00456a50(&local_40,&local_240,&DAT_0176f6b4);
            FUN_00415dd0(local_28 + 0x10,local_240,0);
            *(undefined8 *)(local_28 + 0x28) = 0;
            (**(code **)(*param_3 + 0x50))(param_3,local_28);
          }
          local_2c = local_2c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00410f20(local_20);
      puVar1 = local_80;
    }
  }
  local_80 = puVar1;
  FUN_00414560(&local_248,7);
  FUN_00414560(&local_110,2);
  FUN_004144d0(&local_100);
  FUN_00414560(&local_f8,2);
  FUN_004144d0(&local_e8);
  FUN_00414560(&local_e0,2);
  FUN_004144d0(&local_d0);
  FUN_00414560(&local_c8,2);
  FUN_004144d0(&local_b8);
  FUN_00414560(&local_b0,6);
  FUN_00414560(&local_40,2);
  return;
}

