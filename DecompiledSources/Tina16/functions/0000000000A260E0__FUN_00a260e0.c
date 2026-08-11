/* Ghidra address: 00a260e0 */
/* Ghidra symbol: FUN_00a260e0 */


void FUN_00a260e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xb8);
  *(undefined8 **)(param_1 + 0x1f0) = puVar1;
  *puVar1 = FUN_00a26140;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  return;
}

