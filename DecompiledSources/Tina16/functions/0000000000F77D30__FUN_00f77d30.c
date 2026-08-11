/* Ghidra address: 00f77d30 */
/* Ghidra symbol: FUN_00f77d30 */


ulonglong FUN_00f77d30(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  undefined1 local_1c [4];
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  lVar2 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x20),0,0,local_1c);
  if (lVar2 == 0) {
    uVar3 = FUN_00f6de60(4);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar3);
    uVar4 = 0;
  }
  bVar1 = FUN_00f76700(param_1);
  bVar1 = lVar2 != 0 & bVar1;
  if (bVar1 != 0) {
    FUN_00f766a0(param_1,3);
  }
  return CONCAT71(uVar4,bVar1) & 0xffffffff;
}

