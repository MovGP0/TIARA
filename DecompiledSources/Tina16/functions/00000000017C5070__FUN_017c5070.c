/* Ghidra address: 017c5070 */
/* Ghidra symbol: FUN_017c5070 */


undefined8 FUN_017c5070(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    if (*(short *)(param_1 + 8) == -1) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_017c4f60(&DAT_017bfed0,1,(longlong)*(short *)(param_1 + 8),0);
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 8);
    if (sVar1 == -1) {
      uVar3 = FUN_017c5070(lVar2);
    }
    else {
      uVar3 = FUN_017c5070(lVar2);
      uVar3 = FUN_017c4f60(&DAT_017bfed0,1,(longlong)sVar1,uVar3);
    }
  }
  return uVar3;
}

