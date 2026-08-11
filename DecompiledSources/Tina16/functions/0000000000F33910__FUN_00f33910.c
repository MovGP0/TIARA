/* Ghidra address: 00f33910 */
/* Ghidra symbol: FUN_00f33910 */


void FUN_00f33910(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  FUN_00453560(param_2,0x5b);
  if (0 < iVar4) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_00594f90();
    }
    plVar2 = (longlong *)**(undefined8 **)(lVar1 + 8);
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  iVar4 = iVar4 + -1;
  uVar3 = 1;
  if (0 < iVar4) {
    do {
      FUN_00453560(param_2,0x2c);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
      (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00453560(param_2,0x5d);
  return;
}

