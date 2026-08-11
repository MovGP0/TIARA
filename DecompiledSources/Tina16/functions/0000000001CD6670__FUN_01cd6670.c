/* Ghidra address: 01cd6670 */
/* Ghidra symbol: FUN_01cd6670 */


ulonglong FUN_01cd6670(longlong param_1)

{
  char cVar1;
  ulonglong unaff_RBX;
  undefined7 uVar2;
  
  if ((byte)(*(byte *)(param_1 + 0xf0) - 1) < 2) {
    cVar1 = FUN_01ce33d0(*(undefined8 *)(param_1 + 0x68));
    uVar2 = (undefined7)(unaff_RBX >> 8);
    if (cVar1 == '\0') {
      unaff_RBX = CONCAT71(uVar2,1);
    }
    else if (cVar1 == '\x01') {
      unaff_RBX = CONCAT71(uVar2,2);
    }
  }
  else {
    unaff_RBX = (ulonglong)*(byte *)(param_1 + 0xf0);
  }
  return unaff_RBX & 0xffffffff;
}

