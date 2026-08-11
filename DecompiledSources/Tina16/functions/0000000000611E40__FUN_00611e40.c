/* Ghidra address: 00611e40 */
/* Ghidra symbol: FUN_00611e40 */


void FUN_00611e40(undefined8 param_1,int param_2,uint param_3)

{
  undefined1 local_60 [12];
  int local_54;
  undefined4 local_50;
  
  local_50 = 0xf000;
  local_54 = ((param_3 & 1) + 1) * 0x1000;
  thunk_FUN_041b2403(param_1,0x102b,(longlong)param_2,local_60);
  return;
}

