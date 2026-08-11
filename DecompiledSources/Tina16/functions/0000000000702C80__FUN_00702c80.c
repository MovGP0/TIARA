/* Ghidra address: 00702c80 */
/* Ghidra symbol: FUN_00702c80 */


void FUN_00702c80(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0xffffffff80000001;
  local_28 = FUN_00416740(*(undefined8 *)(param_1 + 0x630));
  local_20 = FUN_00416740(*(undefined8 *)(param_1 + 0x638));
  uVar1 = FUN_0065b870(param_1);
  FUN_004701a0(uVar1,0x44c,param_2,&local_30);
  return;
}

