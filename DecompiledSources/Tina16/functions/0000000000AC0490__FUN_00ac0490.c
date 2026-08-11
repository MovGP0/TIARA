/* Ghidra address: 00ac0490 */
/* Ghidra symbol: FUN_00ac0490 */


void FUN_00ac0490(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x88);
  (**(code **)*puVar1)(puVar1,&DAT_00ac04d0,0);
  (**(code **)*puVar1)(puVar1,&LAB_00ac04d2,2);
  return;
}

