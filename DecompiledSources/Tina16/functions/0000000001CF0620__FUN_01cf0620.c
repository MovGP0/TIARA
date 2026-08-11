/* Ghidra address: 01cf0620 */
/* Ghidra symbol: FUN_01cf0620 */


undefined8 FUN_01cf0620(longlong param_1,undefined8 *param_2)

{
  short local_2a [5];
  
  FUN_01d30f00(*param_2,local_2a,2);
  *(int *)(param_1 + 0xc) = (int)local_2a[0];
  FUN_01d30f00(*param_2,local_2a,2);
  *(int *)(param_1 + 0x10) = (int)local_2a[0];
  return 0;
}

