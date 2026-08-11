/* Ghidra address: 00c288b0 */
/* Ghidra symbol: FUN_00c288b0 */


longlong FUN_00c288b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1), lVar3 != 0)) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10));
    return lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 == 0) {
    cVar2 = FUN_00c360f0(*(undefined8 *)(param_1 + 8));
    if (cVar2 == '\0') {
      if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x10) < 1) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
      }
      else {
        uVar4 = FUN_00c23250(*(longlong *)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        lVar3 = *(longlong *)(param_1 + 0x28);
      }
    }
    else {
      uVar4 = FUN_00c1a180();
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      lVar3 = *(longlong *)(param_1 + 0x28);
    }
  }
  return lVar3;
}

