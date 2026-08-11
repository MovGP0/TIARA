/* Ghidra address: 009671f0 */
/* Ghidra symbol: FUN_009671f0 */


void FUN_009671f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1 + 0x98;
    }
    (**(code **)(param_1 + 0x60))(*(undefined8 *)(param_1 + 0x68),param_1,lVar1);
  }
  return;
}

