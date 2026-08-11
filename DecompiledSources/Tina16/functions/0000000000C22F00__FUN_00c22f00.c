/* Ghidra address: 00c22f00 */
/* Ghidra symbol: FUN_00c22f00 */


int FUN_00c22f00(undefined8 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char local_1b;
  char local_1a;
  char local_19;
  
  FUN_00c22dd0(*param_1,&local_1b,param_2);
  if (*(char *)((longlong)param_1 + 0x14) == '\0') {
    iVar2 = *(int *)(param_1 + 2);
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return iVar2;
      }
      pcVar1 = (char *)(param_1[1] + (longlong)iVar2 * 3);
    } while (((local_1b != *pcVar1) || (local_1a != pcVar1[1])) || (local_19 != pcVar1[2]));
  }
  else {
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 2); iVar2 = iVar2 + 1) {
      pcVar1 = (char *)(param_1[1] + (longlong)iVar2 * 3);
      if (((local_1b == *pcVar1) && (local_1a == pcVar1[1])) && (local_19 == pcVar1[2])) {
        return iVar2;
      }
    }
    iVar2 = -1;
  }
  return iVar2;
}

