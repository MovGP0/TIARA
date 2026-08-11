/* Ghidra address: 015a93a0 */
/* Ghidra symbol: FUN_015a93a0 */


void FUN_015a93a0(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_015a9220(param_1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_015a9220(param_1);
    (**(code **)*puVar2)(puVar2,param_2);
  }
  return;
}

