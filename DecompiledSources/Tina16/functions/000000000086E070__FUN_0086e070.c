/* Ghidra address: 0086e070 */
/* Ghidra symbol: FUN_0086e070 */


void FUN_0086e070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x10))
                    (param_1,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,param_2);
  FUN_004134c0(uVar1);
  return;
}

