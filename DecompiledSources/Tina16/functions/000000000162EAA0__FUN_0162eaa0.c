/* Ghidra address: 0162eaa0 */
/* Ghidra symbol: FUN_0162eaa0 */


void FUN_0162eaa0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0162ea80();
  iVar2 = FUN_0162ea80(param_2);
  *(undefined4 *)(param_3 + 0x34) = 1;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(int *)(param_3 + 0x30) = iVar1 + iVar2 + -1;
  return;
}

