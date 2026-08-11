/* Ghidra address: 01411980 */
/* Ghidra symbol: FUN_01411980 */


void FUN_01411980(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8);
  if ((iVar1 != *(int *)(param_1 + 0x818)) && (*(char *)(param_1 + 0x82c) != '\0')) {
    *(int *)(param_1 + 0x818) = iVar1;
    FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
    FUN_01410d70(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  }
  return;
}

