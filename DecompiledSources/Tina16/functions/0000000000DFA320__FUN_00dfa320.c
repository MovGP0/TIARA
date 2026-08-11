/* Ghidra address: 00dfa320 */
/* Ghidra symbol: FUN_00dfa320 */


void FUN_00dfa320(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar2 = FUN_01b05600(**(undefined8 **)(lVar1 + 0x40),**(undefined1 **)(lVar1 + 0x48));
  uVar3 = FUN_01b05600(**(undefined8 **)(lVar1 + 0x40),
                       *(undefined1 *)(*(longlong *)(lVar1 + 0x48) + 1));
  uVar4 = FUN_01b05690(param_1,param_4 & 0xffffffff,1);
  **(undefined4 **)(lVar1 + 0x30) = uVar4;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  FUN_017ddfb0(*(undefined8 *)(param_2 + 0xd8),uVar4,uVar2,uVar3,lVar1 + 0x58,lVar1 + 0x60,
               lVar1 + 0x68);
  return;
}

