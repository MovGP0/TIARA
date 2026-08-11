/* Ghidra address: 00a1dd30 */
/* Ghidra symbol: FUN_00a1dd30 */


void FUN_00a1dd30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x40);
  *(undefined8 **)(param_1 + 0x1d0) = puVar1;
  *puVar1 = FUN_00a1ddc0;
  puVar1[1] = FUN_00a1e510;
  puVar1[2] = FUN_00a1e660;
  puVar1[3] = FUN_00a1ead0;
  puVar1[4] = FUN_00a1eb50;
  puVar1[5] = FUN_00a1ed60;
  puVar1[6] = FUN_00a1ee60;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}

