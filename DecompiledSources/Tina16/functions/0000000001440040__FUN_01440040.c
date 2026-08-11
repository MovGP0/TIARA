/* Ghidra address: 01440040 */
/* Ghidra symbol: FUN_01440040 */


undefined4 FUN_01440040(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220 [256];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  undefined8 local_88;
  bool local_79;
  undefined8 local_78;
  bool local_69;
  undefined8 local_68;
  bool local_59;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong *local_40;
  int local_34;
  longlong local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_90 = auStack_268;
  local_228 = 0;
  local_230 = 0;
  local_118 = 0;
  local_120 = 0;
  local_100 = 0;
  local_110 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_50[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_24 = 0;
  uVar3 = FUN_019a45d0();
  FUN_01994230(uVar3);
  local_20 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  if (((undefined **)*param_1 != &PTR_FUN_014db5f8) && ((undefined1 *)*param_1 != &LAB_014db6c8)) {
    local_40 = (longlong *)param_1[0x87];
    iVar2 = (**(code **)(*local_40 + 0x28))();
    local_34 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004b3cf0(local_40,&local_a0,local_34);
        FUN_0043ea00(&local_98,local_a0);
        if (local_98 == 0) {
LAB_014402e7:
          local_59 = false;
        }
        else {
          FUN_004b5390(local_40,&local_b0,local_34);
          FUN_0043ea00(&local_a8,local_b0);
          if (local_a8 == 0) goto LAB_014402e7;
          FUN_004b5390(local_40,&local_c0,local_34);
          FUN_0043ea00(&local_b8,local_c0);
          FUN_00415dd0(&local_c8,local_b8,0);
          local_58 = local_c8;
          cVar1 = FUN_0061d9b0(&DAT_0144076c,local_c8);
          local_59 = cVar1 == '\0';
        }
        if (local_59 == false) {
          local_69 = false;
        }
        else {
          FUN_004b5390(local_40,&local_d8,local_34);
          FUN_0043ea00(&local_d0,local_d8);
          FUN_00415dd0(&local_e0,local_d0,0);
          local_68 = local_e0;
          cVar1 = FUN_0061d9b0(&DAT_0144077c,local_e0);
          local_69 = cVar1 == '\0';
        }
        if (local_69 == false) {
          local_79 = false;
        }
        else {
          FUN_004b5390(local_40,&local_f0,local_34);
          FUN_0043ea00(&local_e8,local_f0);
          FUN_00415dd0(&local_f8,local_e8,0);
          local_78 = local_f8;
          cVar1 = FUN_0061da30(&DAT_0144076c,local_f8);
          local_79 = cVar1 == '\0';
        }
        if (local_79 != false) {
          FUN_004b5390(local_40,&local_108,local_34);
          FUN_0043ea00(&local_100,local_108);
          FUN_00415dd0(&local_110,local_100,0);
          local_88 = local_110;
          cVar1 = FUN_0061da30(&DAT_0144077c,local_110);
          if (cVar1 == '\0') {
            FUN_004b3cf0(local_40,&local_120,local_34);
            FUN_0043e130(&local_118,local_120);
            FUN_00416910(local_220,local_118,0xff);
            local_30 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_220,0);
            FUN_004b5390(local_40,&local_230,local_34);
            FUN_0043e130(local_50,local_230);
            local_248 = CONCAT71(local_248._1_7_,1);
            FUN_00456a50(local_50,&local_228,&DAT_0144078c);
            FUN_00415dd0(local_30 + 0x10,local_228,0);
            *(undefined8 *)(local_30 + 0x28) = 0;
            (**(code **)(*local_20 + 0x50))(local_20,local_30);
          }
        }
        local_34 = local_34 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_248 = local_res18;
    local_240 = 0;
    local_24 = FUN_0143f350(param_1,param_1[0x91],local_20,local_res10);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_230,2);
  FUN_00414560(&local_120,2);
  FUN_004144d0(&local_110);
  FUN_00414560(&local_108,2);
  FUN_004144d0(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_004144d0(&local_e0);
  FUN_00414560(&local_d8,2);
  FUN_004144d0(&local_c8);
  FUN_00414560(&local_c0,6);
  FUN_00414480(local_50);
  FUN_00414480(&local_res10);
  return local_24;
}

