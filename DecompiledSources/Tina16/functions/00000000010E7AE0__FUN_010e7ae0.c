/* Ghidra address: 010e7ae0 */
/* Ghidra symbol: FUN_010e7ae0 */


undefined8 FUN_010e7ae0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
  lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
  iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x28))(*(longlong **)(lVar3 + 0x80));
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0xc0))
                      (*(longlong **)(lVar3 + 0x80),param_2);
    *(int *)(param_1 + 0x24) = iVar2;
    if (-1 < iVar2) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      if (*(int *)(param_1 + 0x24) < 0) {
        iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x28))(*(longlong **)(lVar3 + 0x80));
        *(int *)(param_1 + 0x24) = iVar2 + -1;
      }
      uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0x30))
                        (*(longlong **)(lVar3 + 0x80),*(undefined4 *)(param_1 + 0x24));
    }
  }
  return uVar4;
}

