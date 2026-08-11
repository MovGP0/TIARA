/* Ghidra address: 018771c0 */
/* Ghidra symbol: FUN_018771c0 */


void FUN_018771c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x10))(*(undefined8 *)(param_2 + 0x80));
  FUN_004095f0(*(undefined8 *)(param_2 + 0x48),(longlong)iVar1);
  return;
}

