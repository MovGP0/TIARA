/* Ghidra address: 009841d0 */
/* Ghidra symbol: FUN_009841d0 */


void FUN_009841d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_2 + 0x90) + 0x170))(*(undefined8 *)(param_2 + 0x90));
  if (lVar1 == 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}

