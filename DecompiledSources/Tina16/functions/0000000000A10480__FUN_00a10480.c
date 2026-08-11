/* Ghidra address: 00a10480 */
/* Ghidra symbol: FUN_00a10480 */


void FUN_00a10480(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x168);
  *(undefined8 **)(param_1 + 0x250) = puVar1;
  *puVar1 = FUN_00a104d0;
  puVar1[1] = FUN_00a10640;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}

