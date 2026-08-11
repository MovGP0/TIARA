/* Ghidra address: 00a7c630 */
/* Ghidra symbol: FUN_00a7c630 */


undefined8 FUN_00a7c630(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)*puVar1)(puVar1);
  }
  return uVar2;
}

