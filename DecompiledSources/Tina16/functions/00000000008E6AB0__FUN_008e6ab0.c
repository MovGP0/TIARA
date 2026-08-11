/* Ghidra address: 008e6ab0 */
/* Ghidra symbol: FUN_008e6ab0 */


undefined8 FUN_008e6ab0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)*param_1)(param_1);
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  else {
    lVar1 = (*(code *)*param_1)(param_1);
    uVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  }
  return uVar2;
}

