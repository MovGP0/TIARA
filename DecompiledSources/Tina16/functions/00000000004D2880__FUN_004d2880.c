/* Ghidra address: 004d2880 */
/* Ghidra symbol: FUN_004d2880 */


void FUN_004d2880(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  local_20 = param_2;
  FUN_00597e50(*(longlong *)(param_1 + 0x20) + 8,&local_20);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_004d3c10(param_1,param_2);
  }
  *(longlong *)(param_2 + 8) = param_1;
  return;
}

