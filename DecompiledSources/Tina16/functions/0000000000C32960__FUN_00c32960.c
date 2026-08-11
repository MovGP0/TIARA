/* Ghidra address: 00c32960 */
/* Ghidra symbol: FUN_00c32960 */


void FUN_00c32960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_2 + 0x68) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x78);
    uVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1);
    thunk_FUN_0418f5de(uVar2,*(undefined8 *)(param_2 + 0x68),0);
  }
  return;
}

