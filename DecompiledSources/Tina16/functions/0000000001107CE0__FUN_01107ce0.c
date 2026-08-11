/* Ghidra address: 01107ce0 */
/* Ghidra symbol: FUN_01107ce0 */


void FUN_01107ce0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x148);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_004095f0(uVar2);
  }
  return;
}

