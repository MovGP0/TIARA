/* Ghidra address: 0058c240 */
/* Ghidra symbol: FUN_0058c240 */


int FUN_0058c240(char *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*param_1 == '\x06') {
    bVar1 = param_1[(ulonglong)(byte)param_1[1] + 2];
    if ((bVar1 & 0x80) == 0) {
      iVar2 = *(int *)(&DAT_01de1500 + (ulonglong)bVar1 * 4);
    }
    else {
      iVar2 = (int)(short)(bVar1 & 0xff7f);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

