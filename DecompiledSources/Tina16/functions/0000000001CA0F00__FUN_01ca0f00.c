/* Ghidra address: 01ca0f00 */
/* Ghidra symbol: FUN_01ca0f00 */


void FUN_01ca0f00(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  
  iVar1 = FUN_01ca0e80(param_1,in_stack_00000028,in_stack_00000030);
  if (((-1 < iVar1) && (-1 < iVar1)) &&
     (iVar1 <= *(int *)(*(longlong *)(param_1 + 0x2500) + 0x10) + -1)) {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),iVar1);
    uVar2 = FUN_0065b870(uVar2);
    thunk_FUN_03ab0e43(uVar2,9);
    plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x2500),iVar1);
    (**(code **)(*plVar3 + 600))(plVar3);
  }
  return;
}

