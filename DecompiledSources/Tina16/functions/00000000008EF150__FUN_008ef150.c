/* Ghidra address: 008ef150 */
/* Ghidra symbol: FUN_008ef150 */


ulonglong FUN_008ef150(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined6 uVar3;
  ulonglong uVar2;
  
  cVar1 = (char)(param_2 & 0xffffffff);
  uVar3 = (undefined6)((param_2 & 0xffffffff) >> 0x10);
  if (cVar1 == -99) {
    uVar2 = CONCAT62(uVar3,0xb8);
  }
  else if (cVar1 == -0x44) {
    uVar2 = CONCAT62(uVar3,0xaf);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(&DAT_01e2d5a2 + (param_2 & 0xff) * 2);
  }
  return uVar2;
}

