/* Ghidra address: 01806950 */
/* Ghidra symbol: FUN_01806950 */


void FUN_01806950(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),param_2);
  if (lVar1 != 0) {
    FUN_00418590(lVar1,&DAT_01805d58);
  }
  FUN_004ae870(*(undefined8 *)(param_1 + 0x30),param_2);
  return;
}

