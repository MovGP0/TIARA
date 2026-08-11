/* Ghidra address: 007e4f50 */
/* Ghidra symbol: FUN_007e4f50 */


int FUN_007e4f50(longlong param_1,char param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_3 + 200) != param_1) {
    FUN_007dc5c0(PTR_PTR_02004f58);
  }
  if (param_2 == '\0') {
    iVar2 = FUN_007e2fe0(param_3);
    iVar3 = FUN_007e2ef0(param_1);
    if (iVar2 < iVar3 + -1) {
      iVar2 = FUN_007e2fe0(param_3);
      uVar5 = FUN_007e2f10(param_1,iVar2 + 1);
      cVar1 = FUN_007e4e10(uVar5);
      if (cVar1 != '\0') {
        iVar2 = FUN_007e2fe0(param_3);
        iVar3 = FUN_007e2fe0(param_3);
        uVar5 = FUN_007e2f10(param_1,iVar3 + 1);
        FUN_007e2f80(uVar5,1);
        return iVar2 + 2;
      }
    }
    iVar2 = FUN_007e2fe0(param_3);
    iVar2 = iVar2 + 2;
    iVar3 = FUN_007e2fe0(param_3);
    uVar5 = FUN_007e8bb0();
    FUN_007e31e0(param_1,iVar3 + 1,uVar5);
  }
  else {
    iVar2 = FUN_007e2fe0(param_3);
    if (0 < iVar2) {
      iVar2 = FUN_007e2fe0(param_3);
      uVar5 = FUN_007e2f10(param_1,iVar2 + -1);
      cVar1 = FUN_007e4e10(uVar5);
      if (cVar1 != '\0') {
        iVar2 = FUN_007e2fe0(param_3);
        iVar3 = FUN_007e2fe0(param_3);
        uVar5 = FUN_007e2f10(param_1,iVar3 + -1);
        FUN_007e2f80(uVar5,1);
        return iVar2 + -1;
      }
    }
    iVar2 = FUN_007e2fe0(param_3);
    uVar4 = FUN_007e2fe0(param_3);
    uVar5 = FUN_007e8bb0();
    FUN_007e31e0(param_1,uVar4,uVar5);
  }
  return iVar2;
}

