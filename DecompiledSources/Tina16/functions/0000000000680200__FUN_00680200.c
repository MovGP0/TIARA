/* Ghidra address: 00680200 */
/* Ghidra symbol: FUN_00680200 */


longlong FUN_00680200(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00652880(local_res8,0,param_3);
  if (*PTR_DAT_02003210 == '\0') {
    *(undefined4 *)(local_res8 + 0xa0) = 0x802b8;
  }
  else {
    *(undefined4 *)(local_res8 + 0xa0) = 0x802a8;
  }
  FUN_0064cbf0(local_res8,0x79);
  FUN_0064cc50(local_res8,0x19);
  FUN_0065bce0(local_res8,1);
  FUN_0064e0c0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x498) = 1;
  *(undefined1 *)(local_res8 + 0x490) = 0;
  *(undefined1 *)(local_res8 + 0x49d) = 1;
  *(undefined1 *)(local_res8 + 0x49e) = 1;
  *(undefined1 *)(local_res8 + 0x49f) = 1;
  FUN_00681990(local_res8);
  *(undefined4 *)(local_res8 + 0x4b8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4bc) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x4c0) = 0;
  FUN_00414480(local_res8 + 0x4c8);
  *(undefined1 *)(local_res8 + 0x4a4) = 0;
  *(undefined1 *)(local_res8 + 0x368) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

