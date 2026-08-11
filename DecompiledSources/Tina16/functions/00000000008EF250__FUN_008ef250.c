/* Ghidra address: 008ef250 */
/* Ghidra symbol: FUN_008ef250 */


ulonglong FUN_008ef250(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined6 uVar3;
  ulonglong uVar2;
  
  cVar1 = (char)(param_2 & 0xffffffff);
  uVar3 = (undefined6)((param_2 & 0xffffffff) >> 0x10);
  if (cVar1 == -99) {
    uVar2 = CONCAT62(uVar3,0x2db);
  }
  else if (cVar1 == -0x44) {
    uVar2 = CONCAT62(uVar3,0x2014);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(&DAT_01e2d5a2 + (param_2 & 0xff) * 2);
  }
  return uVar2;
}

