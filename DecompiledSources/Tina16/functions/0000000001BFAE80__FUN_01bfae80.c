/* Ghidra address: 01bfae80 */
/* Ghidra symbol: FUN_01bfae80 */


void FUN_01bfae80(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_00410f20(uVar1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50));
  }
  return;
}

