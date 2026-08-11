/* Ghidra address: 00dfa5c0 */
/* Ghidra symbol: FUN_00dfa5c0 */


void FUN_00dfa5c0(longlong param_1,longlong param_2,char param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == '\f') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
    uVar2 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
    uVar3 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
    FUN_017dc990(*(undefined8 *)(param_2 + 0xd8),0,**(undefined8 **)(lVar1 + 0x18),uVar3,uVar2,
                 *(undefined4 *)(param_2 + 0x308));
  }
  else {
    *(undefined1 *)(*(longlong *)(param_2 + 0x110) + 0xc) = 1;
  }
  return;
}

