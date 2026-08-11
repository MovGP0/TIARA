/* Ghidra address: 00411b70 */
/* Ghidra symbol: FUN_00411b70 */


undefined4 FUN_00411b70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  return uVar1;
}

