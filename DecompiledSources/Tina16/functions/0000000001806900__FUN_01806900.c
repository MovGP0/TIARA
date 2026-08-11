/* Ghidra address: 01806900 */
/* Ghidra symbol: FUN_01806900 */


void FUN_01806900(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00418560(0x10,&DAT_01805d58);
  FUN_00414b90(lVar1,param_2);
  *(undefined8 *)(lVar1 + 8) = 0;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),lVar1);
  return;
}

