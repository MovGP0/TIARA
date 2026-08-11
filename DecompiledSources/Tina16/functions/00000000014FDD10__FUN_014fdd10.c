/* Ghidra address: 014fdd10 */
/* Ghidra symbol: FUN_014fdd10 */


longlong FUN_014fdd10(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_007fc180(local_res8,0,param_3);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_28,0x12a);
  FUN_0084e3e0(*(undefined8 *)(local_res8 + 0x6d0),0,0,local_28);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_30,300);
  FUN_0084e3e0(*(undefined8 *)(local_res8 + 0x6d0),0,1,local_30);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_38,299);
  FUN_0084e3e0(*(undefined8 *)(local_res8 + 0x6d0),0,2,local_38);
  *(undefined1 *)(local_res8 + 0x742) = 1;
  *(undefined1 *)(local_res8 + 0x743) = 1;
  FUN_00414560(&local_38,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

