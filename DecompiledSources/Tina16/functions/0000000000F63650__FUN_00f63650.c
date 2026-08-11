/* Ghidra address: 00f63650 */
/* Ghidra symbol: FUN_00f63650 */


void FUN_00f63650(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  
  FUN_00f74dc0(*(undefined8 *)(param_1 + 0x48),local_1c,local_20,&local_24,&local_28);
  *param_2 = local_24;
  *param_3 = local_28;
  return;
}

