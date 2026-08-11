/* Ghidra address: 01b579b0 */
/* Ghidra symbol: FUN_01b579b0 */


void FUN_01b579b0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_004113f0(param_2,&PTR_FUN_011061a0);
  lVar2 = *(longlong *)(lVar3 + 0x40);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    uVar1 = *(undefined8 *)(lVar3 + 0x150);
    uVar4 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
    FUN_010ec2b0(uVar4,*(undefined1 *)(param_1 + 0x990),param_2,*(undefined8 *)(lVar3 + 0x98),lVar2,
                 *(undefined8 *)(lVar3 + 0x50),lVar3 + 0x80,*(undefined4 *)(lVar3 + 0x94),
                 (-*(double *)(lVar3 + 0x118) * 10.0) / 2.0,
                 (*(double *)(lVar3 + 0x118) * 10.0) / 2.0,uVar1,*(undefined8 *)(param_1 + 0xd48),
                 param_3,param_4,1,param_5,lVar3 + 0x70);
    *(undefined8 *)(lVar3 + 0x50) = 0;
  }
  return;
}

