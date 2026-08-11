/* Ghidra address: 00ef8930 */
/* Ghidra symbol: FUN_00ef8930 */


double FUN_00ef8930(longlong param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  double dVar4;
  
  dVar4 = 1.0;
  cVar1 = '\0';
  if (param_2 < 0x80) {
    cVar3 = param_2 + 1;
    do {
      cVar2 = '\0';
      while (*(char *)(*(longlong *)(param_1 + 0x60) + (longlong)cVar2 * 0x40 + (longlong)cVar1) !=
             -1) {
        cVar2 = cVar2 + '\x01';
      }
      dVar4 = dVar4 * (double)(int)cVar2;
      cVar1 = cVar1 + '\x01';
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  return dVar4;
}

