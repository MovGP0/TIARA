/* Ghidra address: 00ac3860 */
/* Ghidra symbol: FUN_00ac3860 */


undefined8 FUN_00ac3860(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  if ((char)param_3 == '\0') {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_00ac3910(param_1,iVar3);
        uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10) + -1;
    if (-1 < iVar4) {
      do {
        plVar1 = (longlong *)FUN_00ac3910(param_1,iVar4);
        uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,param_2,param_3);
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
    }
  }
  return uVar2;
}

