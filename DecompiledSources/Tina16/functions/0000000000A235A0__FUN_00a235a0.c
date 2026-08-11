/* Ghidra address: 00a235a0 */
/* Ghidra symbol: FUN_00a235a0 */


void FUN_00a235a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x60);
  param_1[0x3d] = (longlong)puVar2;
  *puVar2 = FUN_00a23640;
  if (*(int *)((longlong)param_1 + 0x114) == 2) {
    puVar2[1] = FUN_00a23b10;
    puVar2[7] = FUN_00a25520;
  }
  else if (*(int *)((longlong)param_1 + 0x114) == 1) {
    puVar2[1] = FUN_00a239b0;
    puVar2[2] = FUN_00a24be0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 0x30;
    (*(code *)*puVar1)(param_1);
  }
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  return;
}

