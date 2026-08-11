/* Ghidra address: 006487e0 */
/* Ghidra symbol: FUN_006487e0 */


void FUN_006487e0(longlong param_1,undefined8 param_2)

{
  int local_20;
  int local_1c;
  
  thunk_FUN_040299ab(param_2,&local_20);
  thunk_FUN_0418c361(param_2,local_20 + *(int *)(param_1 + 0x90),local_1c + *(int *)(param_1 + 0x94)
                     ,0);
  FUN_0064fca0(*(undefined8 *)(param_1 + 0x78),0x14,param_2,param_2);
  thunk_FUN_0418c361(param_2,local_20,local_1c,0);
  return;
}

