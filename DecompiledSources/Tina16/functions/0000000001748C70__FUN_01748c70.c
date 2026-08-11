/* Ghidra address: 01748c70 */
/* Ghidra symbol: FUN_01748c70 */


void FUN_01748c70(longlong param_1,int param_2)

{
  undefined1 *local_20;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))(*(longlong **)(param_1 + 0x28),0,&local_20)
  ;
  *local_20 = (char)((longlong)param_2 % 0x100);
  FUN_01748cc0(param_1);
  return;
}

