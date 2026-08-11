/* Ghidra address: 018a70e0 */
/* Ghidra symbol: FUN_018a70e0 */


void FUN_018a70e0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_018a5440(*(undefined8 *)(param_1 + 0x528));
  local_20 = (int)uVar1;
  FUN_01893360(param_1,local_20 + 10);
  uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  FUN_01893490(param_1,uStack_1c + 10);
  return;
}

