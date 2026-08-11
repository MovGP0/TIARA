/* Ghidra address: 0140a820 */
/* Ghidra symbol: FUN_0140a820 */


void FUN_0140a820(longlong param_1,double param_2)

{
  undefined8 in_RAX;
  
  FUN_0140a760(param_2,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
               *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8),0);
  FUN_0140a760(param_2 + *(double *)(param_1 + 0x98),0,
               *(undefined8 *)(*(longlong *)(param_1 + 0x138) + 8),0);
  return;
}

