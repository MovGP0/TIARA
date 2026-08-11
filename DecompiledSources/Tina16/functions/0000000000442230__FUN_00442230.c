/* Ghidra address: 00442230 */
/* Ghidra symbol: FUN_00442230 */


void FUN_00442230(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  thunk_FUN_0404979e(param_1,&local_1c,&local_20,&local_24,&local_28);
  *param_2 = (ulonglong)(uint)(local_1c * local_20) * (ulonglong)local_24;
  *param_3 = (ulonglong)(uint)(local_1c * local_20) * (ulonglong)local_28;
  return;
}

