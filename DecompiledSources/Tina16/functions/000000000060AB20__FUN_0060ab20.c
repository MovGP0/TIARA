/* Ghidra address: 0060ab20 */
/* Ghidra symbol: FUN_0060ab20 */


void FUN_0060ab20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = FUN_00410e60(&PTR_FUN_005f8f38,1);
  *(undefined8 *)(local_20 + 0x10) = param_2;
  *(undefined8 *)(local_20 + 0x20) = param_3;
  puVar3 = (undefined8 *)(local_20 + 0x40);
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(local_20 + 0x39) = param_5;
  if (*(longlong *)(local_20 + 0x58) != 0) {
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x10);
  }
  uVar1 = FUN_004113f0(param_6,&PTR_FUN_0047cbc0);
  *(undefined8 *)(local_20 + 0x30) = uVar1;
  FUN_00427930(&DAT_02011fd0);
  FUN_00607b80(*(undefined8 *)(param_1 + 0x60));
  *(longlong *)(param_1 + 0x60) = local_20;
  local_28 = local_20;
  *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
  FUN_00427ff0(&DAT_02011fd0);
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}

