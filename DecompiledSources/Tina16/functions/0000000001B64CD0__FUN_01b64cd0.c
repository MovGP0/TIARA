/* Ghidra address: 01b64cd0 */
/* Ghidra symbol: FUN_01b64cd0 */


void FUN_01b64cd0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = FUN_004113f0(param_2,&PTR_FUN_011061a0);
  if (*(longlong *)(lVar4 + 0x40) != 0) {
    *(undefined1 *)(*(longlong *)(lVar4 + 0x40) + 0x18) = 1;
    uVar1 = *(undefined8 *)(lVar4 + 0x150);
    iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x28))(*(longlong **)(lVar4 + 0x48));
    if (iVar3 == 0) {
      uVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
      FUN_010ec2b0(uVar5,*(undefined1 *)(param_1 + 0x990),param_2,*(undefined8 *)(lVar4 + 0x98),
                   *(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x50),lVar4 + 0x80,
                   *(undefined4 *)(lVar4 + 0x94),(-*(double *)(lVar4 + 0x118) * 10.0) / 2.0,
                   (*(double *)(lVar4 + 0x118) * 10.0) / 2.0,uVar1,*(undefined8 *)(param_1 + 0xd90),
                   param_3,param_4,1,param_5,lVar4 + 0x70);
      *(undefined8 *)(lVar4 + 0x50) = 0;
    }
    else {
      uVar2 = *(undefined4 *)(lVar4 + 0x160);
      uVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
      uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x30))
                        (*(longlong **)(lVar4 + 0x48),uVar2);
      uVar6 = FUN_004113f0(uVar6,&PTR_FUN_01cb30c8);
      FUN_010ec2b0(uVar5,*(undefined1 *)(param_1 + 0x990),param_2,*(undefined8 *)(lVar4 + 0x98),
                   uVar6,0,lVar4 + 0x80,*(undefined4 *)(lVar4 + 0x94),
                   (-*(double *)(lVar4 + 0x118) * 10.0) / 2.0,
                   (*(double *)(lVar4 + 0x118) * 10.0) / 2.0,uVar1,*(undefined8 *)(param_1 + 0xd90),
                   param_3,param_4,1,param_5,lVar4 + 0x70);
    }
  }
  return;
}

