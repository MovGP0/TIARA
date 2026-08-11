/* Ghidra address: 0143dd00 */
/* Ghidra symbol: FUN_0143dd00 */


undefined4
FUN_0143dd00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
            char param_6,undefined4 param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_120 [5];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined2 local_5a;
  undefined8 local_58 [2];
  undefined4 local_44;
  undefined8 local_28;
  undefined8 local_20;
  char local_11;
  undefined8 local_10;
  
  local_70 = auStack_168;
  local_f0 = 0;
  local_f8 = 0;
  local_120[0] = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_e8 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_44 = 0;
  local_11 = '\0';
  FUN_004144d0(&local_10);
  FUN_00415430(&local_78,param_2,0);
  FUN_0061daa0(&local_10,local_78,&DAT_0143e75c,&DAT_0143e76c);
  FUN_00414c70(local_58,local_10);
  FUN_004144d0(&local_10);
  FUN_004425e0(param_2,local_58[0]);
  local_5a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_004167a0(&local_80,param_2);
  uVar1 = FUN_00b8f030(local_80);
  *param_8 = uVar1;
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_5a;
  if (param_6 != '\0') {
    uVar1 = FUN_0143dad0(*param_8,param_7,param_5 + 1);
    *param_8 = uVar1;
  }
  if (local_11 != '\0') {
    FUN_00415430(&local_90,param_2,0);
    FUN_0061d660(&local_88,local_90);
    local_148 = *(undefined8 *)(param_1 + 0x300);
    local_140 = *(undefined8 *)(param_1 + 0x2f8);
    local_138 = param_3;
    local_20 = FUN_016a6a40(&DAT_016a2760,1,local_88,*(undefined8 *)(param_1 + 0x318));
    uVar1 = FUN_016a9290(local_20);
    *param_8 = uVar1;
    if (param_6 != '\0') {
      uVar1 = FUN_0143dad0(*param_8,param_7,param_5 + 1);
      *param_8 = uVar1;
    }
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_120);
  FUN_00414560(&local_f8,3);
  FUN_00414560(&local_b0,2);
  FUN_00414520(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414590(&local_90,2);
  FUN_00414480(&local_80);
  FUN_004144d0(&local_78);
  FUN_004144d0(local_58);
  FUN_00414480(&local_28);
  FUN_004144d0(&local_10);
  return local_44;
}

