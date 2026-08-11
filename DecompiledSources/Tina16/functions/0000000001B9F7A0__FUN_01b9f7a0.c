/* Ghidra address: 01b9f7a0 */
/* Ghidra symbol: FUN_01b9f7a0 */


void FUN_01b9f7a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x708);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x700);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar2,&DAT_01984da0);
  }
  return;
}

