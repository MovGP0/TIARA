/* Ghidra address: 00599ab0 */
/* Ghidra symbol: FUN_00599ab0 */


void FUN_00599ab0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x10);
  FUN_004185d0(param_2 + 0x38,**(undefined8 **)(lVar1 + 6 + (ulonglong)*(byte *)(lVar1 + 1)),1);
  return;
}

