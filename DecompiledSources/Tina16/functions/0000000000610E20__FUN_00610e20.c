/* Ghidra address: 00610e20 */
/* Ghidra symbol: FUN_00610e20 */


int FUN_00610e20(longlong param_1,longlong param_2,char param_3,int param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (param_4 <= iVar4) {
    iVar4 = (iVar4 - param_4) + 1;
    do {
      if (param_3 == '\0') {
        bVar5 = false;
      }
      else {
        plVar2 = (longlong *)FUN_00610ed0(param_1,param_4);
        bVar5 = *plVar2 == param_2;
      }
      if (bVar5) {
        return param_4;
      }
      if (param_3 == '\0') {
        puVar3 = (undefined8 *)FUN_00610ed0(param_1,param_4);
        cVar1 = FUN_00411580(*puVar3,param_2);
        if (cVar1 != '\0') {
          return param_4;
        }
      }
      param_4 = param_4 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return -1;
}

