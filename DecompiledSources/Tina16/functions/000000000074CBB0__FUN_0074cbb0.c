/* Ghidra address: 0074cbb0 */
/* Ghidra symbol: FUN_0074cbb0 */


longlong * FUN_0074cbb0(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
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
  FUN_0067eb90(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0x50))(local_res8,L"SubLabel");
  FUN_004d4540(local_res8,1);
  if (param_3 != 0) {
    FUN_0064de00(local_res8,*(undefined8 *)(param_3 + 0x10));
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

