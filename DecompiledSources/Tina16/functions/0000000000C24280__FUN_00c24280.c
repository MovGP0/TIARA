/* Ghidra address: 00c24280 */
/* Ghidra symbol: FUN_00c24280 */


void FUN_00c24280(longlong param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = 0;
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) &&
     (bVar3 = 0x80, *(char *)(*(longlong *)(param_1 + 0x18) + 0x14) != '\0')) {
    bVar3 = 0x88;
  }
  bVar1 = FUN_00c24720(param_1);
  cVar2 = FUN_00c24700(param_1);
  *(byte *)(param_1 + 0x14) = bVar3 | (bVar1 & 7) << 4 | cVar2 - 1U & 7;
  return;
}

