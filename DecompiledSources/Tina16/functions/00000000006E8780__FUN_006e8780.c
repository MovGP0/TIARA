/* Ghidra address: 006e8780 */
/* Ghidra symbol: FUN_006e8780 */


void FUN_006e8780(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_30;
  int local_2c;
  
  if (-1 < param_2) {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    local_30 = thunk_FUN_041b2403(uVar1,0xbb,(longlong)param_2,0);
    if (local_30 != -1) {
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      local_2c = thunk_FUN_041b2403(uVar1,0xc1,(longlong)local_30,0);
      local_2c = local_30 + local_2c;
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      FUN_004701a0(uVar1,0x437,0,&local_30);
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      FUN_00470120(uVar1,0xc2,0,param_3);
    }
  }
  return;
}

