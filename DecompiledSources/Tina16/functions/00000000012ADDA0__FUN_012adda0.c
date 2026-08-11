/* Ghidra address: 012adda0 */
/* Ghidra symbol: FUN_012adda0 */


void FUN_012adda0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_01105a20);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    *(undefined1 *)(*(longlong *)(lVar1 + 0x40) + 0x18) = 1;
  }
  if (*(char *)(param_1 + 0xdd0) != '\0') {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_01105a20);
    if (lVar2 == *(longlong *)(param_1 + 0xdd8)) {
      uVar4 = 0;
      goto LAB_012ade29;
    }
  }
  uVar4 = *(undefined8 *)(lVar1 + 0x110);
LAB_012ade29:
  uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  FUN_010ec2b0(uVar3,*(undefined1 *)(param_1 + 0x990),param_2,*(undefined8 *)(lVar1 + 0x98),
               *(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x50),lVar1 + 0x80,
               *(undefined4 *)(lVar1 + 0x94),
               (-*(double *)(lVar1 + 0x118) * (double)*(byte *)(param_1 + 0xd88)) / 2.0,
               (*(double *)(lVar1 + 0x118) * (double)*(byte *)(param_1 + 0xd88)) / 2.0,uVar4,
               *(undefined8 *)(param_1 + 0xdb0),param_3,param_4,param_5,param_6,lVar1 + 0x70);
  if (*(longlong *)(lVar1 + 0x40) != 0) {
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  return;
}

