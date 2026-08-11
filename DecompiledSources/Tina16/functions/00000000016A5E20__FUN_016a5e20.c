/* Ghidra address: 016a5e20 */
/* Ghidra symbol: FUN_016a5e20 */


void FUN_016a5e20(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)*param_2)
                    ((undefined8 *)*param_2,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff
                     ,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))(*(longlong **)(param_1 + 0x60),uVar1);
  return;
}

