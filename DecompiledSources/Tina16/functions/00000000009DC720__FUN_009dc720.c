/* Ghidra address: 009dc720 */
/* Ghidra symbol: FUN_009dc720 */


undefined4 FUN_009dc720(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_009d4270(*(undefined8 *)(param_1 + 0x68),param_2,param_1,param_1 + 0x78);
  *param_3 = uVar1;
  return 0;
}

