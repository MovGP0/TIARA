/* Ghidra address: 0068f9f0 */
/* Ghidra symbol: FUN_0068f9f0 */


longlong FUN_0068f9f0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00786930(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined1 *)(local_res8 + 0x48) = 0x1a;
  *(undefined1 *)(local_res8 + 0x49) = 2;
  *(undefined1 *)(local_res8 + 0x4a) = 6;
  *(undefined1 *)(local_res8 + 0x4b) = 0x16;
  *(undefined1 *)(local_res8 + 0x4c) = 10;
  *(undefined1 *)(local_res8 + 0x4d) = 0xe;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

