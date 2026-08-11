/* Ghidra address: 016a80f0 */
/* Ghidra symbol: FUN_016a80f0 */


void FUN_016a80f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(char *)(*(longlong *)(param_2 + 0x228) + 0x38) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x260) + 0x68);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x218));
  *(undefined8 *)(*(longlong *)(param_2 + 0x260) + 0x50) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(*(longlong *)(param_2 + 0x260) + 0x48) = *(undefined8 *)(param_2 + 0x208);
  return;
}

