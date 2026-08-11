/* Ghidra address: 00a39860 */
/* Ghidra symbol: FUN_00a39860 */


longlong FUN_00a39860(longlong param_1,char param_2)

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
  FUN_00601d70(local_res8,0);
  uVar2 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  *(undefined8 *)(local_res8 + 0x148) = uVar2;
  *(undefined1 *)(local_res8 + 0x150) = 2;
  *(undefined1 *)(local_res8 + 0x151) = 7;
  *(undefined1 *)(local_res8 + 0x158) = 0;
  *(undefined4 *)(local_res8 + 0x154) = 0xffff;
  uVar2 = FUN_00a336d0(&PTR_FUN_00a2ed68,1,local_res8);
  *(undefined8 *)(local_res8 + 0x160) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

