/* Ghidra address: 01880920 */
/* Ghidra symbol: FUN_01880920 */


void FUN_01880920(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_008094d0(*(undefined8 *)PTR_DAT_02005950);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20),uVar1);
  return;
}

