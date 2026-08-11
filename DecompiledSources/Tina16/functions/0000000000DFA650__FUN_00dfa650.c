/* Ghidra address: 00dfa650 */
/* Ghidra symbol: FUN_00dfa650 */


void FUN_00dfa650(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (param_4 & 0xff) * 8);
  uVar3 = FUN_01b05600(param_1,**(undefined1 **)(lVar1 + 8));
  uVar4 = FUN_01b05600(param_1,*(undefined1 *)(*(longlong *)(lVar1 + 8) + 1));
  puVar2 = *(undefined4 **)(lVar1 + 0x10);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  FUN_017dde40(*(undefined8 *)(param_2 + 0xd8),uVar4,uVar3,*(undefined4 *)(param_2 + 0x308),
               lVar1 + 0x58,lVar1 + 0x60,lVar1 + 0x68);
  return;
}

