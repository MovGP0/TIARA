/* Ghidra address: 0072a840 */
/* Ghidra symbol: FUN_0072a840 */


longlong FUN_0072a840(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  uVar2 = FUN_004b26d0(&PTR_FUN_00720678,1,local_res8,&PTR_FUN_0071fe28);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  *(undefined1 *)(local_res8 + 0x90) = 9;
  uVar2 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  uVar2 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  *(undefined1 *)(local_res8 + 0xa8) = 0;
  *(undefined4 *)(local_res8 + 200) = 8;
  *(undefined4 *)(local_res8 + 0xcc) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined4 *)(local_res8 + 0xe4) = 3;
  uVar2 = FUN_00729780(&PTR_FUN_0071f5f0,1,local_res8);
  *(undefined8 *)(local_res8 + 0xf0) = uVar2;
  uVar2 = FUN_004b26d0(&PTR_FUN_00720678,1,local_res8,&PTR_FUN_00720198);
  *(undefined8 *)(local_res8 + 0x100) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

