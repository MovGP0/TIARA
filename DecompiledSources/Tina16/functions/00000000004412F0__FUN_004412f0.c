/* Ghidra address: 004412f0 */
/* Ghidra symbol: FUN_004412f0 */


ulonglong FUN_004412f0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar4 = FUN_00416740(param_1);
  iVar1 = thunk_FUN_0418581b(uVar4);
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,iVar1 != 0);
  if (iVar1 == 0) {
    uVar2 = thunk_FUN_03ce33a6();
    uVar3 = thunk_FUN_0414b2cb(uVar4);
    if (((uVar3 == 0xffffffff) || ((uVar3 & 0x400) == 0)) || ((uVar3 & 0x10) == 0)) {
      thunk_FUN_041931fb(uVar2);
    }
    else {
      uVar4 = FUN_00416740(param_1);
      iVar1 = thunk_FUN_0411ad98(uVar4);
      uVar5 = CONCAT71(uVar6,iVar1 != 0);
    }
  }
  return uVar5 & 0xffffffff;
}

