/* Ghidra address: 019af180 */
/* Ghidra symbol: FUN_019af180 */


ulonglong FUN_019af180(longlong param_1)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar5 = 0;
  do {
    if (((char)uVar4 == '\0') || (*(int *)(param_1 + 0x10) <= iVar5)) {
      return uVar4 & 0xffffffff;
    }
    plVar3 = (longlong *)FUN_00b94e60(param_1,iVar5);
    cVar1 = FUN_0198a580(plVar3);
    if (cVar1 == '\x04') {
      sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (sVar2 != 0x3a) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (sVar2 != 0x96) {
          uVar4 = 0;
          goto LAB_019af1dc;
        }
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
LAB_019af1dc:
    iVar5 = iVar5 + 1;
  } while( true );
}

