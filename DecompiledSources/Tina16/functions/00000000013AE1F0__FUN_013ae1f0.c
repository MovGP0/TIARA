/* Ghidra address: 013ae1f0 */
/* Ghidra symbol: FUN_013ae1f0 */


ulonglong FUN_013ae1f0(longlong *param_1)

{
  char cVar1;
  short sVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  cVar1 = FUN_0198a580(param_1);
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,cVar1 == '\x04');
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((((((sVar2 == 4) || (sVar2 == 5)) || (sVar2 == 0x21)) || ((sVar2 == 0x77 || (sVar2 == 6))))
        || ((sVar2 == 0x22 || ((sVar2 == 7 || (sVar2 == 8)))))) || (sVar2 == 0x62)) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 0xffffffff;
}

