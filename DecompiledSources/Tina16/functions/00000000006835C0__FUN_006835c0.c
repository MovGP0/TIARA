/* Ghidra address: 006835c0 */
/* Ghidra symbol: FUN_006835c0 */


longlong * FUN_006835c0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_006655a0(local_res8,0,param_3);
  if (*PTR_DAT_02003210 == '\0') {
    *(undefined4 *)(local_res8 + 0x14) = 0x842b2;
  }
  else {
    *(undefined4 *)(local_res8 + 0x14) = 0x842a2;
  }
  FUN_0064cbf0(local_res8,0x91);
  FUN_0064cc50(local_res8,0x19);
  FUN_0065bce0(local_res8,1);
  FUN_0064e0c0(local_res8,0);
  lVar2 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  local_res8[0x92] = lVar2;
  FUN_0064b200(lVar2,local_res8);
  *(undefined4 *)(local_res8 + 0x9d) = 0x10;
  local_28 = local_res8;
  local_30 = *(code **)(*local_res8 + 0x2c0);
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0xa5] = lVar2;
  local_28 = local_res8;
  local_30 = FUN_006842a0;
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0xa6] = lVar2;
  *(undefined4 *)((longlong)local_res8 + 0x49c) = 8;
  *(undefined4 *)((longlong)local_res8 + 0x4a4) = 0xffffffff;
  *(undefined4 *)((longlong)local_res8 + 0x524) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x94) = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

