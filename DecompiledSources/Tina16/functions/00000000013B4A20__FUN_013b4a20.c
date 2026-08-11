/* Ghidra address: 013b4a20 */
/* Ghidra symbol: FUN_013b4a20 */


void FUN_013b4a20(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1);
  for (lVar2 = 0x52; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_2 = *puVar1;
    param_2 = param_2 + 1;
  }
  return;
}

