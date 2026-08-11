/* Ghidra address: 008ef3e0 */
/* Ghidra symbol: FUN_008ef3e0 */


ulonglong FUN_008ef3e0(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  undefined6 uVar3;
  ulonglong uVar2;
  
  cVar1 = (char)(param_2 & 0xffffffff);
  uVar3 = (undefined6)((param_2 & 0xffffffff) >> 0x10);
  if (cVar1 == '\x15') {
    uVar2 = CONCAT62(uVar3,0x85);
  }
  else if (cVar1 == '%') {
    uVar2 = CONCAT62(uVar3,10);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(&DAT_01e2d7a2 + (param_2 & 0xff) * 2);
  }
  return uVar2;
}

