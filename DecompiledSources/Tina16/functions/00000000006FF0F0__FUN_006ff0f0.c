/* Ghidra address: 006ff0f0 */
/* Ghidra symbol: FUN_006ff0f0 */


void FUN_006ff0f0(longlong param_1)

{
  int iVar1;
  
  FUN_00701e30(param_1);
  *(undefined1 *)(param_1 + 0x621) = 0;
  iVar1 = FUN_006d3e90();
  if ((iVar1 == 0x50050) && (*(longlong *)(param_1 + 0x618) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x618) + 0x180))(*(longlong **)(param_1 + 0x618));
  }
  *(undefined1 *)(param_1 + 0x600) = 1;
  return;
}

