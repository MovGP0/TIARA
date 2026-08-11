/* Ghidra address: 012b1410 */
/* Ghidra symbol: FUN_012b1410 */


void FUN_012b1410(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_29 [9];
  
  local_29[0] = 0;
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x80))
            (*(longlong **)(param_1 + 0xdb8),*(undefined1 *)(lVar1 + 0x2a));
  if (*(char *)(param_1 + 0xdd0) != '\0') {
    lVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
    if (lVar2 == *(longlong *)(param_1 + 0xdd8)) {
      FUN_012ae470(param_1,1,0);
    }
  }
  if (*(char *)(lVar1 + 0x10) != '\0') {
    FUN_010f6740(param_1,*(undefined8 *)(param_1 + 0x870),0,local_29,0);
  }
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  bVar4 = *(char *)(lVar1 + 0x10) == '\0';
  FUN_010ec980(uVar3,*(undefined8 *)(lVar1 + 0x40),
               (*(double *)(lVar1 + 0x118) * (double)*(byte *)(param_1 + 0xd88)) / 2.0,
               (-*(double *)(lVar1 + 0x118) * (double)*(byte *)(param_1 + 0xd88)) / 2.0,bVar4,bVar4)
  ;
  FUN_012ae910(param_1,6,1,0);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  return;
}

