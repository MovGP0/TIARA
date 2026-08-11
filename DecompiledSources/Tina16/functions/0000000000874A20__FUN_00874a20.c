/* Ghidra address: 00874a20 */
/* Ghidra symbol: FUN_00874a20 */


undefined8 FUN_00874a20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  return uVar1;
}

