/* Ghidra address: 00dd9e30 */
/* Ghidra symbol: FUN_00dd9e30 */


undefined8 FUN_00dd9e30(longlong param_1)

{
  int iVar1;
  short local_a;
  
  if (((*(longlong *)(param_1 + 0x48) != 0) &&
      (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x28))
                         (*(longlong **)(param_1 + 0x48),&local_a), iVar1 == 0)) && (0 < local_a)) {
    return 0;
  }
  return 1;
}

