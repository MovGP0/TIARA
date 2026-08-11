/* Ghidra address: 01970bf0 */
/* Ghidra symbol: FUN_01970bf0 */


void FUN_01970bf0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    FUN_004b1e70(*(undefined8 *)(param_1 + 0x278));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x10))(*(longlong **)(param_1 + 0x278));
    FUN_0196e2e0(*(undefined8 *)(param_1 + 0x278));
  }
  return;
}

