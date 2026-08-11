/* Ghidra address: 004d1300 */
/* Ghidra symbol: FUN_004d1300 */


char FUN_004d1300(longlong param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  
  iVar2 = thunk_FUN_0418e8e2(*(undefined8 *)(param_1 + 0x10));
  FUN_004d10c0(param_1,iVar2 != 0x7fffffff);
  cVar1 = '\x03';
  cVar3 = '\0';
  piVar4 = &DAT_01dcb64c;
  do {
    if (*piVar4 == iVar2) {
      cVar1 = cVar3;
    }
    cVar3 = cVar3 + '\x01';
    piVar4 = piVar4 + 1;
  } while (cVar3 != '\a');
  return cVar1;
}

