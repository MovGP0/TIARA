/* Ghidra address: 00dfa4b0 */
/* Ghidra symbol: FUN_00dfa4b0 */


void FUN_00dfa4b0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar2 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar2 + 8) + 1));
  uVar5 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  uVar1 = **(ulonglong **)(lVar2 + 0x18);
  FUN_017dc8c0(*(undefined8 *)(param_2 + 0xd8),0,0x3ff0000000000000,uVar3,uVar4,uVar5);
  if (param_3 == '\f') {
    FUN_017dc850(*(undefined8 *)(param_2 + 0xd8),0,uVar1 ^ 0x8000000000000000,uVar5,
                 *(undefined4 *)(param_2 + 0x308));
  }
  return;
}

