/* Ghidra address: 00a9bd50 */
/* Ghidra symbol: FUN_00a9bd50 */


undefined8
FUN_00a9bd50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      FUN_00ac3910(param_1,iVar3);
      plVar1 = (longlong *)FUN_00ac3910(param_1,iVar3);
      uVar2 = (**(code **)(*plVar1 + 0x60))
                        (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0xffffffff;
}

