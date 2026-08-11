/* Ghidra address: 01cbf760 */
/* Ghidra symbol: FUN_01cbf760 */


longlong FUN_01cbf760(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01cbfd00(param_3,local_20);
  FUN_01cbfc40(local_res8,local_20[0]);
  *(undefined2 *)(local_res8 + 0x10) = *(undefined2 *)(param_3 + 0x10);
  *(undefined2 *)(local_res8 + 0x12) = *(undefined2 *)(param_3 + 0x12);
  FUN_01cbfcb0(local_res8,*(undefined1 *)(param_3 + 0x14));
  FUN_00409a70(*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(local_res8 + 0x18),
               (uint)*(byte *)(local_res8 + 0x14) * 4);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

