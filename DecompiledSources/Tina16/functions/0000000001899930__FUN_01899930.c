/* Ghidra address: 01899930 */
/* Ghidra symbol: FUN_01899930 */


void FUN_01899930(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if ((*(longlong *)(param_1 + 0x4b8) == 0) && (cVar1 = FUN_01899540(param_1), cVar1 == '\0')) {
    return;
  }
  (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x130))(*(longlong **)(param_1 + 0x4c0),0);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x4b8),*(undefined4 *)(param_1 + 0x98));
  iVar2 = FUN_01899220(param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x9c) / 3;
  iVar2 = (*(int *)(param_1 + 0x98) - iVar2) - iVar3;
  if (*(char *)(param_1 + 0x4e0) == '\x02') {
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x4c0),*(int *)(param_1 + 0x98) - iVar3);
  }
  else if (*(int *)(param_1 + 0x4d4) < iVar2) {
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x4c0),*(int *)(param_1 + 0x4d4));
  }
  else if (iVar2 < *(int *)(param_1 + 0x4d0)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x4c0),0);
  }
  else {
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x4c0),iVar2);
  }
  if (*(int *)(param_1 + 0x4d0) < iVar2) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x4c0),1);
  }
  FUN_0064c650(*(undefined8 *)(param_1 + 0x4c8),4);
  (**(code **)(**(longlong **)(param_1 + 0x4c8) + 400))
            (*(longlong **)(param_1 + 0x4c8),2,0,
             *(int *)(*(longlong *)(param_1 + 0x4c0) + 0x98) + -4,
             *(undefined4 *)(*(longlong *)(param_1 + 0x4c0) + 0x9c));
  (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x130))
            (*(longlong **)(param_1 + 0x4c0),*(undefined8 *)(param_1 + 0x4b8));
  return;
}

