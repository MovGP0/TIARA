/* Ghidra address: 00d060b0 */
/* Ghidra symbol: FUN_00d060b0 */


longlong FUN_00d060b0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00ce3c20(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0xf8) = param_3;
  *(undefined4 *)(local_res8 + 0x100) = 0xffffffff;
  uVar2 = FUN_00ce0bd0(&PTR_FUN_00ce0a70,1,param_3);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

