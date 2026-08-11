/* Ghidra address: 006ead30 */
/* Ghidra symbol: FUN_006ead30 */


void FUN_006ead30(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_0065b870(param_1);
  FUN_004701b0(uVar1,0x434,0,&local_20,0);
  local_1c = local_20 + param_2;
  uVar1 = FUN_0065b870(param_1);
  FUN_004701a0(uVar1,0x437,0,&local_20);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x431,0,0);
  return;
}

