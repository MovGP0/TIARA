/* Ghidra address: 00744290 */
/* Ghidra symbol: FUN_00744290 */


longlong FUN_00744290(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00742f60(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x4b8) = 1;
  uVar2 = FUN_00610d40(&PTR_FUN_0060fb80,1,0);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

