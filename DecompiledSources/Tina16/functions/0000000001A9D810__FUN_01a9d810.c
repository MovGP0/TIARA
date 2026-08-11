/* Ghidra address: 01a9d810 */
/* Ghidra symbol: FUN_01a9d810 */


void FUN_01a9d810(longlong param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  int in_R10D;
  int iVar2;
  int in_R11D;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x165);
  iVar2 = param_2;
  iVar3 = param_3;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = -param_3;
      iVar3 = param_2;
    }
    else if (cVar1 == '\x02') {
      iVar2 = -param_2;
      iVar3 = -param_3;
    }
    else {
      iVar2 = in_R10D;
      iVar3 = in_R11D;
      if (cVar1 == '\x03') {
        iVar2 = param_3;
        iVar3 = -param_2;
      }
    }
  }
  *param_4 = iVar2 + *(int *)(param_1 + 0x168);
  *param_5 = iVar3 + *(int *)(param_1 + 0x16c);
  return;
}

