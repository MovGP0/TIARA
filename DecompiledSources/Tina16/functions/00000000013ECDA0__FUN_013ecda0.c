/* Ghidra address: 013ecda0 */
/* Ghidra symbol: FUN_013ecda0 */


void FUN_013ecda0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),1);
  cVar1 = FUN_01b23030();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  if ((((iVar2 != 0) || (lVar3 = FUN_019a4600(), *(int *)(*(longlong *)(lVar3 + 0x470) + 0x10) < 1))
      || (*(char *)(param_1 + 0x1098) == '\x01')) &&
     (((iVar2 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0)), iVar2 != 1 ||
       (*(int *)(param_1 + 0x1084) != 0)) ||
      ((lVar3 = FUN_019a4600(), *(int *)(*(longlong *)(lVar3 + 0x468) + 0x10) < 1 ||
       (*(char *)(param_1 + 0x1099) == '\x01')))))) {
    iVar2 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
    if (iVar2 != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x1084) != 1) {
      return;
    }
    lVar3 = FUN_019a4600();
    if (*(int *)(*(longlong *)(lVar3 + 0x478) + 0x10) < 1) {
      return;
    }
    if (*(char *)(param_1 + 0x109a) == '\x01') {
      return;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x128))(*(longlong **)(param_1 + 0x6b0),0);
  return;
}

