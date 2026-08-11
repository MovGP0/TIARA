/* Ghidra address: 0185dbf0 */
/* Ghidra symbol: FUN_0185dbf0 */


void FUN_0185dbf0(longlong param_1,int param_2,uint *param_3)

{
  ushort local_1c;
  byte local_19 [9];
  
  if (param_2 == 1) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),local_19,1);
    *param_3 = (uint)local_19[0];
  }
  else if (param_2 == 2) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_1c,2);
    *param_3 = (uint)local_1c;
  }
  else {
    FUN_01860ba0(8);
  }
  return;
}

