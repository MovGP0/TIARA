/* Ghidra address: 00874bb0 */
/* Ghidra symbol: FUN_00874bb0 */


int FUN_00874bb0(undefined8 param_1,undefined8 *param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    do {
      if (param_4 == '\0') {
        cVar1 = FUN_00879070(param_1,*param_2);
        if (cVar1 != '\0') {
          return iVar3;
        }
      }
      else {
        iVar2 = FUN_00416db0(param_1,*param_2);
        if (iVar2 == 0) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return -1;
}

