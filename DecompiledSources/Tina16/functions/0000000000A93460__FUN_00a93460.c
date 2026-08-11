/* Ghidra address: 00a93460 */
/* Ghidra symbol: FUN_00a93460 */


int FUN_00a93460(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c [3];
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0x61) != '\0') {
    FUN_00a74060(param_2,local_2c,&local_30);
    cVar1 = *(char *)(param_1 + 0x61);
    if (cVar1 == '\x01') {
      iVar3 = (local_2c[0] - param_3) + -1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = (local_30 - param_3) + -1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
      if (cVar1 == '\x03') {
        iVar2 = (local_30 - param_3) + -1;
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        iVar3 = (local_2c[0] - param_3) + -1;
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
      }
    }
  }
  return iVar3;
}

