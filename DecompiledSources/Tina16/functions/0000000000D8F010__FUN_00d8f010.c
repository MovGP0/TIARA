/* Ghidra address: 00d8f010 */
/* Ghidra symbol: FUN_00d8f010 */


longlong FUN_00d8f010(longlong param_1,char param_2)

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
  FUN_00778b00(local_res8,0);
  uVar2 = FUN_00d83670(&PTR_FUN_00d6de10,1);
  *(undefined8 *)(local_res8 + 0x180) = uVar2;
  *(undefined ***)(local_res8 + 0x60) = &PTR_FUN_00d51918;
  *(undefined ***)(local_res8 + 0x68) = &PTR_FUN_00d51b60;
  *(undefined ***)(local_res8 + 0xe8) = &PTR_FUN_00d52e28;
  *(undefined ***)(local_res8 + 0x108) = &PTR_FUN_00d53450;
  *(undefined ***)(local_res8 + 0x118) = &PTR_FUN_00d50268;
  *(undefined ***)(local_res8 + 0x120) = &PTR_FUN_00d50578;
  *(undefined ***)(local_res8 + 0x130) = &PTR_FUN_00d50a48;
  *(undefined ***)(local_res8 + 0x128) = &PTR_FUN_0075eb58;
  *(undefined ***)(local_res8 + 0x138) = &PTR_FUN_00d50c90;
  *(undefined ***)(local_res8 + 0x140) = &PTR_FUN_00d51300;
  *(undefined ***)(local_res8 + 0x148) = &PTR_FUN_00d516e0;
  *(undefined ***)(local_res8 + 0x150) = &PTR_FUN_00d520f8;
  *(undefined ***)(local_res8 + 0x158) = &PTR_FUN_00d52330;
  *(undefined ***)(local_res8 + 0x160) = &PTR_FUN_00d52570;
  *(undefined ***)(local_res8 + 0x168) = &PTR_FUN_00d50fc8;
  *(undefined ***)(local_res8 + 0x170) = &PTR_FUN_00d52bd0;
  *(undefined ***)(local_res8 + 0x178) = &PTR_FUN_00d52890;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

