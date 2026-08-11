/* Ghidra address: 010d9630 */
/* Ghidra symbol: FUN_010d9630 */


void FUN_010d9630(longlong param_1)

{
  char cVar1;
  short sVar2;
  
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x9bb) = *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x328);
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x9bc) = *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x328);
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x9bd) = *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x328);
  }
  sVar2 = (char)(*(char *)(param_1 + 0x9be) + '\x01') * 2;
  cVar1 = (char)sVar2 + *(char *)(*(longlong *)(param_1 + 0x918) + 0x328);
  *(char *)(param_1 + 0x9bf) = cVar1;
  FUN_00e1d9a0(CONCAT11((char)((ushort)sVar2 >> 8),cVar1));
  FUN_010d8b90(param_1);
  return;
}

