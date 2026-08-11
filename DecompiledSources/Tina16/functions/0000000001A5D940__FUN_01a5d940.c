/* Ghidra address: 01a5d940 */
/* Ghidra symbol: FUN_01a5d940 */


longlong FUN_01a5d940(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_01d2ae00(local_res8,0);
  uVar2 = FUN_01d11b00(&DAT_01d10980,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  *(undefined1 *)(local_res8 + 0x99) = 0;
  *(undefined4 *)(local_res8 + 0x9c) = 0xffffff;
  *(undefined1 *)(local_res8 + 0xa0) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined1 *)(local_res8 + 0x80) = 1;
  *(undefined2 *)(local_res8 + 0x70) = 0xc;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

