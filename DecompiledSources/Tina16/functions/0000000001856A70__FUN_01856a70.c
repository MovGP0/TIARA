/* Ghidra address: 01856a70 */
/* Ghidra symbol: FUN_01856a70 */


undefined1 * FUN_01856a70(undefined8 param_1,undefined1 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*param_3 + 0x58))(param_3);
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = 0x1fffffff;
  *(undefined4 *)(param_2 + 6) = 100;
  param_2[10] = 0;
  return param_2;
}

