/* Ghidra address: 01749c80 */
/* Ghidra symbol: FUN_01749c80 */


void FUN_01749c80(longlong param_1,int param_2)

{
  undefined1 *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,&local_20)
  ;
  *local_20 = (char)((longlong)param_2 % 0x100);
  FUN_01749cd0(param_1);
  return;
}

