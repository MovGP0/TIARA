/* Ghidra address: 014fb030 */
/* Ghidra symbol: FUN_014fb030 */


void FUN_014fb030(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_01d04b50(*(undefined8 *)(param_1 + 0x28),local_res10);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d8))(*(longlong **)(param_1 + 0x28));
  if (cVar2 != '\0') {
    uVar3 = FUN_019a45d0();
    uVar3 = FUN_0198d430(uVar3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x198);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
  }
  uVar3 = FUN_019a45d0();
  uVar3 = FUN_0198d430(uVar3);
  FUN_01d04aa0(*(undefined8 *)(param_1 + 0x28),uVar3);
  return;
}

