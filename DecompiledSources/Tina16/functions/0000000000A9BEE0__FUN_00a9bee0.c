/* Ghidra address: 00a9bee0 */
/* Ghidra symbol: FUN_00a9bee0 */


undefined8 FUN_00a9bee0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      plVar1 = (longlong *)FUN_00ac3910(param_1,iVar3);
      uVar2 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2,param_3,param_4);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return uVar2;
}

