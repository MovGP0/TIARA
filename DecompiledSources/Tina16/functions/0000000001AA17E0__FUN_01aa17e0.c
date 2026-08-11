/* Ghidra address: 01aa17e0 */
/* Ghidra symbol: FUN_01aa17e0 */


undefined8 FUN_01aa17e0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_58 [6];
  undefined8 local_28;
  undefined8 local_20;
  
  puVar2 = local_58;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  if (param_2 == 0) {
    local_28 = local_20;
  }
  return local_28;
}

