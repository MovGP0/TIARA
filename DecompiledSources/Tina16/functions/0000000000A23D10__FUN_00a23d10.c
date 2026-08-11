/* Ghidra address: 00a23d10 */
/* Ghidra symbol: FUN_00a23d10 */


void FUN_00a23d10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0xb0);
  *(undefined8 **)(param_1 + 0x1f0) = puVar1;
  *puVar1 = FUN_00a23d70;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0xc] = 0;
  return;
}

