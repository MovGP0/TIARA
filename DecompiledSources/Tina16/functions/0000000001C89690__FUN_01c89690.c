/* Ghidra address: 01c89690 */
/* Ghidra symbol: FUN_01c89690 */


void FUN_01c89690(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (PTR_DAT_02004010[0x813] == '\x05') {
    PTR_DAT_02004010[0x813] = 4;
  }
  if (param_2 < 3) {
    if (param_2 == 2) {
      uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0xd60) + 0x318));
      FUN_0082a4b0(*(undefined8 *)(param_1 + 0xd08),uVar2);
    }
    else if (param_2 == 0) {
      uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + 0x318));
      FUN_0082a4b0(*(undefined8 *)(param_1 + 0xd08),uVar2);
    }
    else if (param_2 == 1) {
      uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0xd68) + 0x318));
      FUN_0082a4b0(*(undefined8 *)(param_1 + 0xd08),uVar2);
    }
  }
  else if (param_2 == 3) {
    uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0xd78) + 0x318));
    FUN_0082a4b0(*(undefined8 *)(param_1 + 0xd08),uVar2);
  }
  else if (param_2 == 4) {
    uVar2 = FUN_00603c60(*(undefined8 *)(*(longlong *)(param_1 + 0xd58) + 0x318));
    FUN_0082a4b0(*(undefined8 *)(param_1 + 0xd08),uVar2);
  }
  iVar1 = FUN_007e34a0(*(undefined8 *)(param_1 + 0x11d8),*(undefined8 *)(param_1 + 0x11f8));
  if (iVar1 <= iVar1 + 4) {
    iVar4 = ((iVar1 + 4) - iVar1) + 1;
    iVar3 = iVar1;
    do {
      uVar2 = FUN_007e2f10(*(undefined8 *)(param_1 + 0x11d8),iVar3);
      FUN_007e2d20(uVar2,CONCAT31((int3)((uint)(iVar3 - iVar1) >> 8),
                                  (uint)(byte)PTR_DAT_02004010[0x813] == iVar3 - iVar1));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

