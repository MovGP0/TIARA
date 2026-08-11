/* Ghidra address: 00aa3120 */
/* Ghidra symbol: FUN_00aa3120 */


longlong FUN_00aa3120(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_00a9cf70(local_res8,0,param_3,param_4);
  local_28 = local_res8 + 0x582;
  local_30 = local_res8 + 0x568;
  FUN_00409a70(param_4 + 0x568,local_res8 + 0x568,(longlong)(((int)local_28 - (int)local_30) + 1));
  local_20 = FUN_00ac3910(*(undefined8 *)(local_res8 + 0xa8),0);
  uVar2 = FUN_004113f0(local_20,&PTR_FUN_00a8e9e8);
  *(undefined8 *)(local_res8 + 0x560) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

