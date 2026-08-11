/* Ghidra address: 01a79760 */
/* Ghidra symbol: FUN_01a79760 */


void FUN_01a79760(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_01adc240(*(longlong *)(param_1 + 0x798),0,0);
    FUN_0041ddd0(&local_10,&LAB_01a79748);
    FUN_0072d440(local_10,2,4,0);
  }
  FUN_00414480(&local_10);
  return;
}

