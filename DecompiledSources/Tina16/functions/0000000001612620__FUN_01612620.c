/* Ghidra address: 01612620 */
/* Ghidra symbol: FUN_01612620 */


longlong FUN_01612620(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_20 = *param_3;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 10) = 1;
  *(undefined1 *)(local_res8 + 0x20) = 0;
  *(undefined4 *)(local_res8 + 0xc) = (undefined4)local_20;
  *(undefined1 *)(local_res8 + 0x21) = local_20._4_1_;
  *(undefined1 *)(local_res8 + 0x22) = local_20._5_1_;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

