/* Ghidra address: 01ccdc30 */
/* Ghidra symbol: FUN_01ccdc30 */


undefined1 FUN_01ccdc30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x78),
     iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar2 < 2)) {
    return 1;
  }
  return *(undefined1 *)(param_1 + 0x12);
}

