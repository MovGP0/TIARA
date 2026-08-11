/* Ghidra address: 01433440 */
/* Ghidra symbol: FUN_01433440 */


longlong FUN_01433440(longlong param_1,char param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00b08760(local_res8,0,0,param_4);
  if (param_4 == 0) {
    lVar3 = FUN_004113f0(*(undefined8 *)(param_3 + 0x1a8),&PTR_FUN_01763148);
    *(undefined8 *)(local_res8 + 0x70) = *(undefined8 *)(lVar3 + 0x108);
  }
  else {
    uVar4 = FUN_004113f0(*(undefined8 *)(param_3 + 0x1a8),&PTR_FUN_01763148);
    uVar2 = FUN_01600580(uVar4);
    *(undefined4 *)(local_res8 + 0x78) = uVar2;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

