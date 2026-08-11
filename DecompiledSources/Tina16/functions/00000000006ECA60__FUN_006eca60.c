/* Ghidra address: 006eca60 */
/* Ghidra symbol: FUN_006eca60 */


void FUN_006eca60(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_00655080(param_1);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x403,*(undefined1 *)(param_1 + 0x492),*(undefined1 *)(param_1 + 0x491));
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041b2403(uVar1,0x401,
                     CONCAT11(*(undefined1 *)(param_1 + 0x491),*(undefined1 *)(param_1 + 0x494)),0);
  return;
}

