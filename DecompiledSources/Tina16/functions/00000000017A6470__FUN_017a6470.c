/* Ghidra address: 017a6470 */
/* Ghidra symbol: FUN_017a6470 */


void FUN_017a6470(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6f0));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_20);
  FUN_006dc8a0(uVar1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

