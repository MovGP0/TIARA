/* Ghidra address: 00d77430 */
/* Ghidra symbol: FUN_00d77430 */


void FUN_00d77430(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  FUN_005fcfa0(uVar2,param_2);
  iVar1 = FUN_00d77c90(param_1);
  if (0 < iVar1) {
    iVar1 = FUN_00d77c90();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        plVar3 = (longlong *)FUN_00d77ca0(param_1,iVar4);
        (**(code **)(*plVar3 + 0xf0))(plVar3,param_2);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

