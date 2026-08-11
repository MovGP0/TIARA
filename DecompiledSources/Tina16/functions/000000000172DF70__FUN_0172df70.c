/* Ghidra address: 0172df70 */
/* Ghidra symbol: FUN_0172df70 */


undefined8 FUN_0172df70(longlong param_1,int param_2)

{
  undefined8 local_20 [2];
  
  FUN_0172a910(*(undefined8 *)(param_1 + 8),*(int *)(param_1 + 0x174) + param_2 * 8);
  FUN_0172a920(*(undefined8 *)(param_1 + 8),local_20,8);
  return local_20[0];
}

