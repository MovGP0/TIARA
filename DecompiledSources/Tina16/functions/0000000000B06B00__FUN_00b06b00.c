/* Ghidra address: 00b06b00 */
/* Ghidra symbol: FUN_00b06b00 */


longlong FUN_00b06b00(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00660290(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x499) = 0;
  *(undefined4 *)(local_res8 + 0x49c) = 0;
  *(undefined1 *)(local_res8 + 0x4a0) = 1;
  *(undefined1 *)(local_res8 + 0x4b0) = 0;
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x4a8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

