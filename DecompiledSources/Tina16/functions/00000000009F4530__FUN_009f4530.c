/* Ghidra address: 009f4530 */
/* Ghidra symbol: FUN_009f4530 */


char * FUN_009f4530(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  for (pcVar3 = param_2; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
  }
  iVar2 = (int)pcVar3 - (int)param_2;
  if (0 < iVar2) {
    pcVar3 = param_1 + ((longlong)param_3 - (longlong)iVar2);
    for (; (param_1 < pcVar3 && (*param_1 != '\0')); param_1 = param_1 + 1) {
      iVar1 = FUN_009f44f0(param_1,param_2,iVar2);
      if (iVar1 == 0) {
        return param_1;
      }
    }
  }
  return (char *)0x0;
}

