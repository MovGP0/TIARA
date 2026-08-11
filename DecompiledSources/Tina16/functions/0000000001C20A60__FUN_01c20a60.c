/* Ghidra address: 01c20a60 */
/* Ghidra symbol: FUN_01c20a60 */


void FUN_01c20a60(longlong param_1,undefined8 param_2,int param_3,short param_4)

{
  if (param_3 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))
              (*(longlong **)(param_1 + 0x6e8),param_4 != 0);
  }
  else if (param_3 == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x128))
              (*(longlong **)(param_1 + 0x6c0),param_4 != 0);
  }
  return;
}

