/* Ghidra address: 01868df0 */
/* Ghidra symbol: FUN_01868df0 */


undefined1 * FUN_01868df0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0xb0))(param_1,param_3);
  *param_2 = uVar1;
  uVar1 = (**(code **)(param_1 + 0xc0))(param_1,param_3);
  param_2[1] = uVar1;
  *(undefined4 *)(param_2 + 2) = 0x1fffffff;
  *(undefined4 *)(param_2 + 6) = 100;
  param_2[10] = 0;
  return param_2;
}

