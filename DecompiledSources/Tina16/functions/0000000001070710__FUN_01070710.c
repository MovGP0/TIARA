/* Ghidra address: 01070710 */
/* Ghidra symbol: FUN_01070710 */


void FUN_01070710(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x260))(*(longlong **)(param_1 + 0x6b8));
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(param_1 + 0x6b8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x98))((longlong *)plVar1[0x94],uVar3);
  }
  return;
}

