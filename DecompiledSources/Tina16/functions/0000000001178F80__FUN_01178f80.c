/* Ghidra address: 01178f80 */
/* Ghidra symbol: FUN_01178f80 */


void FUN_01178f80(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0xa8))(*(longlong **)(param_1 + 0x7e0));
  if (cVar1 != '\0') {
    *(undefined4 *)PTR_DAT_020020f8 = *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + 0xd0);
  }
  return;
}

