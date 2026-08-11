/* Ghidra address: 012a5150 */
/* Ghidra symbol: FUN_012a5150 */


void FUN_012a5150(longlong *param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  double local_20;
  
  *(undefined1 *)(param_1 + 0x14) = param_2;
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0xf8))(param_1,local_res10,&local_20,1);
  if (*(char *)((longlong)param_1 + 0x22) != '\0') {
    FUN_0153b660(local_20 * (double)*(byte *)((longlong)param_1 + 0xa1),
                 *(undefined8 *)(param_1[10] + 0x408));
  }
  return;
}

