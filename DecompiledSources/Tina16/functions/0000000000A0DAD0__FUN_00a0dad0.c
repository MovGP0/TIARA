/* Ghidra address: 00a0dad0 */
/* Ghidra symbol: FUN_00a0dad0 */


void FUN_00a0dad0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x48];
  *puVar1 = FUN_00a0d7c0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))(param_1);
  (**(code **)param_1[0x49])(param_1);
  param_1[0x18] = 0;
  return;
}

