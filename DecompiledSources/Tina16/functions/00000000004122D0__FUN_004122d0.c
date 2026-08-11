/* Ghidra address: 004122d0 */
/* Ghidra symbol: FUN_004122d0 */


void FUN_004122d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00411e50(param_1);
  while (lVar1 != 0) {
    (**(code **)(PTR_PTR_020069a0 + 0x20))(*(undefined8 *)(lVar1 + 0x10),0,0);
    lVar1 = FUN_00411e50(param_1);
  }
  return;
}

