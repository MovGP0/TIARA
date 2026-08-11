/* Ghidra address: 016e3b50 */
/* Ghidra symbol: FUN_016e3b50 */


ulonglong FUN_016e3b50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RBX;
  
  if (*(char *)(param_1 + 0x44) == '\x01') {
    cVar2 = '\0';
  }
  else if (*(char *)(param_1 + 0x44) == '\x02') {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(char *)(lVar1 + 0x328) == '\0') {
    FUN_016ddcd0(*(undefined8 *)(param_1 + 0x48),lVar1,*(ushort *)(param_1 + 0x38) + 1,
                 *(ushort *)(param_1 + 0x38) + 2,param_2,cVar2);
  }
  else {
    FUN_016de690(*(undefined8 *)(param_1 + 0x48),lVar1,*(ushort *)(param_1 + 0x38) + 1,param_2,
                 cVar2 == '\0');
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

