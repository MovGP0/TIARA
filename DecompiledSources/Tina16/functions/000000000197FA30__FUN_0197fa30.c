/* Ghidra address: 0197fa30 */
/* Ghidra symbol: FUN_0197fa30 */


void FUN_0197fa30(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  while( true ) {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) <= iVar3) break;
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),iVar3);
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x290) + 0xc);
    if (param_4 == '\x05') {
      bVar4 = *(int *)(lVar2 + 0x50) == *(int *)(param_1 + 0x24);
    }
    else if (param_4 == '\x06') {
      if ((iVar1 == *(int *)(param_1 + 0x20)) ||
         ((iVar1 == 0 && (*(int *)(lVar2 + 0x4c) == *(int *)(param_1 + 0x20))))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar4 = true;
    }
    if (((*(char *)(lVar2 + 0x49) != '\0') && (param_4 == *(char *)(lVar2 + 0x49))) && (bVar4)) {
      (**(code **)(**(longlong **)(lVar2 + 0x38) + 0x310))
                (*(longlong **)(lVar2 + 0x38),lVar2,param_2,param_1);
      FUN_004aee30(*(undefined8 *)(param_1 + 0x10),lVar2);
      iVar3 = iVar3 + -1;
    }
    iVar3 = iVar3 + 1;
  }
  if (param_4 == '\x06') {
    FUN_0197f7d0(param_1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

