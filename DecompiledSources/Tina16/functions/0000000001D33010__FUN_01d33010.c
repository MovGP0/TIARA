/* Ghidra address: 01d33010 */
/* Ghidra symbol: FUN_01d33010 */


void FUN_01d33010(longlong param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_01d31a40(**(undefined8 **)(param_1 + 0x58));
  if ((iVar1 == 0) && (*(longlong *)(param_2 + 5) != 0)) {
    (**(code **)(param_2 + 5))(*(undefined8 *)(param_1 + 0x58),*param_2,0,0xffffffff);
  }
  return;
}

