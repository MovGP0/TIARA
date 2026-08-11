/* Ghidra address: 01600550 */
/* Ghidra symbol: FUN_01600550 */


undefined8 FUN_01600550(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  if ((puVar1 != (undefined8 *)0x0) && (lVar2 = (**(code **)*puVar1)(puVar1), 0 < lVar2)) {
    return 1;
  }
  return 0;
}

