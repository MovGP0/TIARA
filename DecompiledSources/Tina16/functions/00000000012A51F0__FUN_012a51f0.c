/* Ghidra address: 012a51f0 */
/* Ghidra symbol: FUN_012a51f0 */


undefined8 FUN_012a51f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))
            (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_1 + 8));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  if (0 < iVar2) {
    plVar1 = *(longlong **)(param_1 + 0x78);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return *(undefined8 *)(param_1 + 0x78);
}

