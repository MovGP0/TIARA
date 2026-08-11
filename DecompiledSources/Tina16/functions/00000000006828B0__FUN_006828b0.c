/* Ghidra address: 006828b0 */
/* Ghidra symbol: FUN_006828b0 */


longlong * FUN_006828b0(longlong *param_1,char param_2,undefined8 param_3)

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
  FUN_0064cbf0(local_res8,0xb9);
  FUN_0064cc50(local_res8,0x59);
  (**(code **)(*local_res8 + 0x118))(local_res8,0);
  *(undefined1 *)((longlong)local_res8 + 0x4e1) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x4e2) = 1;
  lVar2 = FUN_004b28b0(&PTR_FUN_0067d510,1);
  local_res8[0x9b] = lVar2;
  *(longlong **)(lVar2 + 0x38) = local_res8;
  (**(code **)(*local_res8 + 0x230))(local_res8,0);
  lVar2 = local_res8[0x26];
  *(undefined1 *)(lVar2 + 0x20) = 0x12;
  *(undefined1 *)(lVar2 + 0x21) = 0x1e;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

