/* Ghidra address: 0046e770 */
/* Ghidra symbol: FUN_0046e770 */


undefined8 FUN_0046e770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 8);
  *param_4 = uVar1;
  return CONCAT71((uint7)(byte)((ushort)uVar1 >> 8),1);
}

