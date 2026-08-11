/* Ghidra address: 00a0d750 */
/* Ghidra symbol: FUN_00a0d750 */


void FUN_00a0d750(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x30);
  *(undefined8 **)(param_1 + 0x240) = puVar1;
  *puVar1 = FUN_00a0d7c0;
  puVar1[1] = FUN_00a0dad0;
  puVar1[2] = FUN_00a0db20;
  puVar1[3] = &LAB_00a0dd90;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  return;
}

