/* Ghidra address: 013b97c0 */
/* Ghidra symbol: FUN_013b97c0 */


void FUN_013b97c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined2 local_32;
  undefined8 local_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  char local_9;
  
  local_50 = auStack_a8;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_28[0] = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_9 = '\0';
  local_88 = CONCAT71(local_88._1_7_,1);
  FUN_00450070(&local_58,local_res10,&DAT_013b9a48,&DAT_013b9a58);
  FUN_00414b50(&local_res10,local_58);
  local_32 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  uVar1 = FUN_00b8f030(local_res10);
  *param_5 = uVar1;
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_32;
  if (local_9 != '\0') {
    FUN_0043e130(&local_60,local_res10);
    FUN_00415dd0(&local_68,local_60,0);
    local_88 = local_res18;
    local_80 = *(undefined8 *)(param_1 + 0x488);
    local_78 = local_res20;
    local_18 = FUN_016a6a40(&DAT_016a2760,1,local_68,0);
    uVar1 = FUN_016a9290(local_18);
    *param_5 = uVar1;
    FUN_00410f20(local_18);
  }
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,2);
  FUN_00414480(&local_30);
  FUN_004144d0(local_28);
  FUN_00414480(&local_res10);
  return;
}

