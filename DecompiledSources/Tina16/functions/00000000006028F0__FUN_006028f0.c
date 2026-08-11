/* Ghidra address: 006028f0 */
/* Ghidra symbol: FUN_006028f0 */


undefined8 FUN_006028f0(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_0041ddd0(&local_28,PTR_PTR_02004db0);
  local_68 = &PTR_FUN_005fa910;
  FUN_00602c60(local_res8,L"tiff",local_28,0);
  FUN_0041ddd0(&local_30,PTR_PTR_02004db0);
  local_68 = &PTR_FUN_005fa910;
  FUN_00602c60(local_res8,&DAT_00602b84,local_30,0);
  FUN_0041ddd0(&local_38,PTR_PTR_02003800);
  local_68 = &PTR_FUN_005f86c8;
  FUN_00602c60(local_res8,&DAT_00602b98,local_38,0);
  FUN_0041ddd0(&local_40,PTR_PTR_02001c30);
  local_68 = &PTR_FUN_005f86c8;
  FUN_00602c60(local_res8,&DAT_00602bac,local_40,0);
  FUN_0041ddd0(&local_48,PTR_PTR_02001c28);
  local_68 = &PTR_FUN_005fa0c8;
  FUN_00602c60(local_res8,&DAT_00602bc0,local_48,0);
  FUN_0041ddd0(&local_50,PTR_PTR_02001bd0);
  local_68 = &PTR_FUN_005f92e8;
  FUN_00602c60(local_res8,&DAT_00602bd4,local_50,0);
  FUN_00414560(&local_50,6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

