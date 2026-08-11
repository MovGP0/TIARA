/* Ghidra address: 00808470 */
/* Ghidra symbol: FUN_00808470 */


void FUN_00808470(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x18);
  *puVar1 = *(undefined8 *)(param_1 + 0x150);
  *(undefined4 *)(puVar1 + 1) = param_2;
  puVar1[2] = param_3;
  *(undefined8 **)(param_1 + 0x150) = puVar1;
  return;
}

