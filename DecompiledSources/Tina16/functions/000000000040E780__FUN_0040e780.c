/* Ghidra address: 0040e780 */
/* Ghidra symbol: FUN_0040e780 */


char * FUN_0040e780(char *param_1,uint param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_2c [20];
  
  uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    acStack_2c[iVar3] = (char)((ulonglong)uVar1 % 10) + '0';
    iVar4 = iVar3 + 1;
    uVar1 = uVar1 / 10;
  } while (uVar1 != 0);
  if ((int)param_2 < 0) {
    acStack_2c[iVar4] = '-';
    iVar4 = iVar3 + 2;
  }
  if (param_3 < iVar4) {
    param_3 = iVar4;
  }
  if (0xff < param_3) {
    param_3 = 0xff;
  }
  *param_1 = (char)param_3;
  pcVar2 = param_1;
  for (; pcVar2 = pcVar2 + 1, iVar4 < param_3; param_3 = param_3 + -1) {
    *pcVar2 = ' ';
  }
  do {
    iVar4 = iVar4 + -1;
    *pcVar2 = acStack_2c[iVar4];
    pcVar2 = pcVar2 + 1;
  } while (0 < iVar4);
  return param_1;
}

