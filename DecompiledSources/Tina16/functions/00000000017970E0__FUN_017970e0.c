/* Ghidra address: 017970e0 */
/* Ghidra symbol: FUN_017970e0 */


void FUN_017970e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  FUN_01797160(param_1,lVar1,0);
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_1 + 0xcb0);
  FUN_00c3f030(*(undefined8 *)(param_1 + 0xca8),lVar1);
  FUN_00c3f350(*(undefined8 *)(param_1 + 0xca8),param_2);
  FUN_00c3f1c0(param_2);
  FUN_01798270(param_1);
  FUN_017989e0(param_1);
  return;
}

