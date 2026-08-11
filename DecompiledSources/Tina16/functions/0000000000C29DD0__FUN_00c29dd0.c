/* Ghidra address: 00c29dd0 */
/* Ghidra symbol: FUN_00c29dd0 */


ulonglong FUN_00c29dd0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x14) == '\0') {
    uVar1 = FUN_00c1a7c0(param_1);
    uVar4 = (ulonglong)uVar1;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),2);
  }
  while (((byte)uVar4 < 2 && (iVar2 = FUN_00c1aa10(*(undefined8 *)(param_1 + 0x58)), 0 < iVar2))) {
    plVar3 = (longlong *)FUN_00c28360(*(undefined8 *)(param_1 + 0x58),0);
    uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if ((byte)uVar4 < (byte)uVar1) {
      uVar4 = (ulonglong)uVar1;
    }
  }
  return uVar4 & 0xffffffff;
}

