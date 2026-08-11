/* Ghidra address: 00592ba0 */
/* Ghidra symbol: FUN_00592ba0 */


void FUN_00592ba0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x18);
  *puVar1 = param_1;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x14) = param_3;
  puVar1[1] = param_2;
  return;
}

