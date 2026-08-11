/* Ghidra address: 00df70f0 */
/* Ghidra symbol: FUN_00df70f0 */


void FUN_00df70f0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar4 = FUN_01b05600(param_1,**(undefined1 **)(lVar3 + 8));
  uVar5 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 1));
  uVar6 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 2));
  uVar7 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 3));
  uVar8 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar3 + 8) + 4));
  uVar9 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar10 = FUN_01b05690(param_1,param_4 & 0xffffffff,2);
  uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x18) + 8);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar5,uVar4,uVar9);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,uVar1,uVar5,uVar4,uVar10);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar6,uVar7,uVar9);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar7,uVar8,uVar10);
  if (((param_3 != '\b') && (*(char *)(param_2 + 0x325) == '\0')) &&
     (*(char *)(lVar3 + 0x39) == '\0')) {
    uVar2 = **(ulonglong **)(lVar3 + 0x18);
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,uVar2 ^ 0x8000000000000000,uVar9,
                 *(undefined4 *)(param_2 + 0x308));
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,uVar2 ^ 0x8000000000000000,uVar10,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

