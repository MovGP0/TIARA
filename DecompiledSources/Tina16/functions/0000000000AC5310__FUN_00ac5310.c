/* Ghidra address: 00ac5310 */
/* Ghidra symbol: FUN_00ac5310 */


undefined8
FUN_00ac5310(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
            undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_1,iVar3);
      cVar1 = (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_3,param_5,param_6);
      if (cVar1 != '\0') {
        *param_4 = plVar2;
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

