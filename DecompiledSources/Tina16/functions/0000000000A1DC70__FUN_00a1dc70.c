/* Ghidra address: 00a1dc70 */
/* Ghidra symbol: FUN_00a1dc70 */


void FUN_00a1dc70(longlong *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  
  FUN_00a1f6c0(param_1,0);
  if ((int)param_1[0x20] == 0) {
    FUN_00a21e40(param_1);
    FUN_00a22560(param_1);
    FUN_00a206a0(param_1,0);
  }
  FUN_00a235a0(param_1);
  if (*(int *)((longlong)param_1 + 0x104) == 0) {
    if (*(int *)((longlong)param_1 + 0x134) == 0) {
      FUN_00a260e0(param_1);
    }
    else {
      FUN_00a23d10(param_1);
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 1;
    (*(code *)*puVar1)(param_1);
  }
  bVar2 = true;
  if ((int)param_1[0x1e] < 2) {
    bVar2 = (int)param_1[0x21] != 0;
  }
  FUN_00a21030(param_1,bVar2);
  FUN_00a204c0(param_1,0);
  FUN_00a1dd30(param_1);
  (**(code **)(param_1[1] + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00a1dd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1[0x3a])(param_1);
  return;
}

