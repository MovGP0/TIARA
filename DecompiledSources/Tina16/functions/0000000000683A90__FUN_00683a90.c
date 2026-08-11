/* Ghidra address: 00683a90 */
/* Ghidra symbol: FUN_00683a90 */


void FUN_00683a90(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int local_20;
  int local_1c;
  
  uVar1 = FUN_0065b870(param_1);
  FUN_004701c0(uVar1,0x140,&local_20,&local_1c);
  local_1c = local_20 + param_2;
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x142,0,CONCAT22((undefined2)local_1c,(undefined2)local_20));
  return;
}

