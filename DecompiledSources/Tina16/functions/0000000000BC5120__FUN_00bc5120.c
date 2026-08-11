/* Ghidra address: 00bc5120 */
/* Ghidra symbol: FUN_00bc5120 */


longlong FUN_00bc5120(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x180) = 0;
  *(undefined8 *)(local_res8 + 0x188) = 0;
  *(undefined8 *)(local_res8 + 400) = 0;
  *(undefined8 *)(local_res8 + 0x170) = 0;
  *(undefined1 *)(local_res8 + 0x178) = 0;
  FUN_00bc5c00(local_res8,1,DAT_01e9a018);
  FUN_00bc5c00(local_res8,2,DAT_01e9a019);
  FUN_00bc5c00(local_res8,3,DAT_01e9a01a);
  FUN_00bc5c00(local_res8,4,DAT_01e9a01b);
  FUN_00bc5c00(local_res8,5,DAT_01e9a01c);
  FUN_00414ad0(local_res8 + 0x1a8,PTR_DAT_01e9a020);
  FUN_00414ad0(local_res8 + 0x1b0,PTR_u_0123456789abcdefghijklmnopqrstuv_01e9a028);
  *(undefined **)(local_res8 + 0x1b8) = PTR_FUN_01e9a040;
  *(undefined **)(local_res8 + 0x1c0) = PTR_PTR_01e9a048;
  FUN_00414ad0(local_res8 + 0x1c8,PTR_DAT_01e9a030);
  FUN_00bca1f0(local_res8,PTR_DAT_01e9a038);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

