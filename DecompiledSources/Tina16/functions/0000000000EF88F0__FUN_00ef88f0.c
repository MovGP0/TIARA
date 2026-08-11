/* Ghidra address: 00ef88f0 */
/* Ghidra symbol: FUN_00ef88f0 */


bool FUN_00ef88f0(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  while ((cVar1 <= param_3 &&
         ((ushort)*(byte *)(*(longlong *)(param_1 + 0x50) + (longlong)cVar1) != (short)param_2))) {
    cVar1 = cVar1 + '\x01';
  }
  return param_3 < cVar1;
}

