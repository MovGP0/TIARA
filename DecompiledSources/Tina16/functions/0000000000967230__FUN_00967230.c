/* Ghidra address: 00967230 */
/* Ghidra symbol: FUN_00967230 */


void FUN_00967230(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    if (param_1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1 + 0x98;
    }
    (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),param_1,param_2,lVar1);
  }
  return;
}

