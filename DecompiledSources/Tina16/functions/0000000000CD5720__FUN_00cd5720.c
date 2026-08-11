/* Ghidra address: 00cd5720 */
/* Ghidra symbol: FUN_00cd5720 */


void FUN_00cd5720(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd55d0(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00cd55d0(param_1);
    (**(code **)*puVar2)(puVar2,param_2);
  }
  return;
}

