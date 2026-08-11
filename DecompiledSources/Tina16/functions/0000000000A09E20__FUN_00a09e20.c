/* Ghidra address: 00a09e20 */
/* Ghidra symbol: FUN_00a09e20 */


longlong FUN_00a09e20(longlong param_1,char param_2)

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
  FUN_00601d70(local_res8,0);
  FUN_00a0b890(local_res8);
  *(undefined1 *)(local_res8 + 0x70) = DAT_01e6e690;
  *(undefined1 *)(local_res8 + 0x69) = DAT_01e6e691;
  *(undefined4 *)(local_res8 + 0x74) = DAT_01e6e694;
  *(undefined4 *)(local_res8 + 0x6c) = DAT_01e6e698;
  *(undefined1 *)(local_res8 + 0x71) = DAT_01e6e69c;
  *(undefined1 *)(local_res8 + 0x72) = DAT_01e6e69d;
  *(undefined4 *)(local_res8 + 0x78) = DAT_01e6e6a0;
  *(undefined1 *)(local_res8 + 0x68) = DAT_01e6e6a4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

