/* Ghidra address: 00d780e0 */
/* Ghidra symbol: FUN_00d780e0 */


void FUN_00d780e0(longlong param_1,undefined2 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined2 *)(param_1 + 0xf6) = param_2;
  iVar1 = FUN_00d77c90(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00d77c90();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        plVar2 = (longlong *)FUN_00d77ca0(param_1,iVar3);
        (**(code **)(*plVar2 + 0x90))(plVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

