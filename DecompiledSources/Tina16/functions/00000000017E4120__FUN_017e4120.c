/* Ghidra address: 017e4120 */
/* Ghidra symbol: FUN_017e4120 */


void FUN_017e4120(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_2b8 [70];
  longlong *local_88;
  
  puVar2 = local_2b8;
  for (lVar1 = 0x52; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*local_88 + 0x38))(local_88,param_3,param_4,param_5,param_6);
  return;
}

