/* Ghidra address: 01c270a0 */
/* Ghidra symbol: FUN_01c270a0 */


undefined8 FUN_01c270a0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    while( true ) {
      iVar1 = FUN_01c232b0(param_1);
      if (iVar1 <= iVar4) break;
      lVar2 = FUN_01c233d0(param_1,iVar4);
      if (*(longlong *)(lVar2 + 8) == param_2) break;
      iVar4 = iVar4 + 1;
    }
    iVar1 = FUN_01c232b0(param_1);
    if (iVar4 < iVar1) {
      uVar3 = FUN_01c233d0(param_1,iVar4);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

