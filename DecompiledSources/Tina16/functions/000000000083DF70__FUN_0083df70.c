/* Ghidra address: 0083df70 */
/* Ghidra symbol: FUN_0083df70 */


undefined8 FUN_0083df70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
  thunk_FUN_041b2403(uVar1,0xb0,&local_10,(longlong)&local_10 + 4);
  return local_10;
}

