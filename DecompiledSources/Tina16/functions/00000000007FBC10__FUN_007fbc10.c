/* Ghidra address: 007fbc10 */
/* Ghidra symbol: FUN_007fbc10 */


longlong * FUN_007fbc10(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined **local_20;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_50 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_007fab80(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x14) = 0x2c00ab;
  local_20 = (undefined **)*local_res8;
  if ((local_20 == &PTR_FUN_007ec678) || ((*(ushort *)((longlong)local_res8 + 0x34) & 0x400) != 0))
  {
    FUN_0064cbf0(local_res8,0x140);
    FUN_0064cc50(local_res8,0xf0);
  }
  else {
    cVar2 = FUN_004ae080(local_res8,&PTR_FUN_007ec678);
    if (cVar2 == '\0') {
      FUN_0041ddd0(&local_38,PTR_PTR_020033f8);
      FUN_00410ae0(*local_res8,&local_50);
      local_48 = local_50;
      local_40 = 0x11;
      local_68 = 0;
      uVar3 = FUN_0044d530(&PTR_FUN_00472138,1,local_38,&local_48);
      FUN_004134c0(uVar3);
    }
  }
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

