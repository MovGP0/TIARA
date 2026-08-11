/* Ghidra address: 01bd5be0 */
/* Ghidra symbol: FUN_01bd5be0 */


void FUN_01bd5be0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_0064ee30(param_1,param_2);
  uVar1 = FUN_0069fde0(&PTR_FUN_0069f2c8,1,param_1);
  *(undefined8 *)(param_1 + 0x540) = uVar1;
  *param_2 = uVar1;
  return;
}

