/* Ghidra address: 015090e0 */
/* Ghidra symbol: FUN_015090e0 */


void FUN_015090e0(longlong param_1,undefined8 param_2,short *param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*param_3 == 0xd) {
    if (*(int *)(param_1 + 0xc10) == *(int *)(param_1 + 0xc0c)) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0xbf8),&local_10);
      FUN_00414ad0(*(longlong *)(param_1 + 0x870) + 8,local_10);
    }
    *param_3 = 0;
  }
  FUN_00414480(&local_10);
  return;
}

