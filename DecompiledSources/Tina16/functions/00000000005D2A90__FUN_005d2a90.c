/* Ghidra address: 005d2a90 */
/* Ghidra symbol: FUN_005d2a90 */


char FUN_005d2a90(ushort param_1,ushort *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = '\0';
  iVar3 = 0;
  iVar4 = 0;
  if (param_2 != (ushort *)0x0) {
    iVar4 = (int)*(undefined8 *)(param_2 + -4);
  }
  iVar4 = iVar4 + -1;
  if (((-1 < iVar4) && (*param_2 <= param_1)) && (param_1 <= param_2[iVar4])) {
    do {
      iVar1 = iVar3 + (iVar4 - iVar3) / 2;
      if (param_1 < param_2[iVar1]) {
        iVar4 = iVar1 + -1;
      }
      else if (param_2[iVar1] < param_1) {
        iVar3 = iVar1 + 1;
      }
      else {
        cVar2 = '\x01';
      }
    } while ((cVar2 == '\0') && (iVar3 <= iVar4));
  }
  return cVar2;
}

