/* Ghidra address: 00c59c90 */
/* Ghidra symbol: FUN_00c59c90 */


longlong * FUN_00c59c90(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00680200(local_res8,0,param_3);
  lVar2 = FUN_00c591e0(&PTR_FUN_00c57128,1,local_res8);
  local_res8[0x9d] = lVar2;
  FUN_0064cbf0(lVar2,0xf);
  FUN_0064cc50(local_res8[0x9d],0x11);
  FUN_0064dbe0(local_res8[0x9d],1);
  (**(code **)(*(longlong *)local_res8[0x9d] + 0x130))((longlong *)local_res8[0x9d],local_res8);
  lVar2 = local_res8[0x9d];
  *(longlong **)(lVar2 + 0x4a8) = local_res8;
  *(longlong **)(lVar2 + 0x4b8) = local_res8;
  *(undefined8 *)(lVar2 + 0x4b0) = *(undefined8 *)(*local_res8 + 0x2b0);
  *(longlong **)(lVar2 + 0x4c8) = local_res8;
  *(undefined8 *)(lVar2 + 0x4c0) = *(undefined8 *)(*local_res8 + 0x2b8);
  FUN_0064de00(local_res8,&DAT_00c59e5c);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xffffffdf;
  *(undefined4 *)(local_res8 + 0x9c) = 1;
  *(undefined1 *)(local_res8 + 0x9e) = 1;
  (**(code **)(*local_res8 + 0x230))(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

