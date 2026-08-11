/* Ghidra address: 01899240 */
/* Ghidra symbol: FUN_01899240 */


longlong FUN_01899240(longlong param_1,char param_2,undefined8 param_3)

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
  uVar2 = FUN_0189a1a0(&PTR_FUN_01896af8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4b8) = uVar2;
  uVar2 = FUN_01818cc0(&PTR_FUN_01817af0,1,uVar2);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar2;
  uVar2 = FUN_01891290(&PTR_FUN_0188e180,1,uVar2);
  *(undefined8 *)(local_res8 + 0x4c8) = uVar2;
  FUN_01818cc0(local_res8,0,param_3);
  FUN_00743910(*(undefined8 *)(local_res8 + 0x4c0),0);
  FUN_00743850(*(undefined8 *)(local_res8 + 0x4c0),0);
  FUN_00743880(*(undefined8 *)(local_res8 + 0x4c0),0);
  FUN_01899660(local_res8,1);
  *(undefined4 *)(local_res8 + 0x4d0) = 0x28;
  *(undefined4 *)(local_res8 + 0x4d4) = 200;
  FUN_005fce30(*(undefined8 *)(*(longlong *)(*(longlong *)(local_res8 + 0x4c8) + 0x4c0) + 0xb8),8);
  FUN_0064cc50(*(undefined8 *)(local_res8 + 0x4b8),0x18);
  FUN_007438e0(*(undefined8 *)(local_res8 + 0x4c0),2);
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x4c0),4);
  *(undefined4 *)(local_res8 + 0x4d8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4dc) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

