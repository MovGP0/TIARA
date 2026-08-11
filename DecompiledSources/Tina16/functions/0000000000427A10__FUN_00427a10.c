/* Ghidra address: 00427a10 */
/* Ghidra symbol: FUN_00427a10 */


undefined4 FUN_00427a10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}

