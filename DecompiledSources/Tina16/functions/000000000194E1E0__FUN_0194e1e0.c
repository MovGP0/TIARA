/* Ghidra address: 0194e1e0 */
/* Ghidra symbol: FUN_0194e1e0 */


longlong FUN_0194e1e0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01954920(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x1b1) = 1;
  *(undefined1 *)(local_res8 + 0x1b3) = 1;
  *(undefined1 *)(local_res8 + 0x1b4) = 0;
  *(undefined1 *)(local_res8 + 0x1b5) = 0;
  FUN_0197bdf0(DAT_02110740);
  FUN_004ae7e0(DAT_02110740,local_res8);
  FUN_0197be00(DAT_02110740);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

