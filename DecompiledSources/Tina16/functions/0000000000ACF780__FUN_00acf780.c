/* Ghidra address: 00acf780 */
/* Ghidra symbol: FUN_00acf780 */


void FUN_00acf780(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043e420(param_3,*(undefined8 *)(param_1 + 0xe0));
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x268))(*(longlong **)(param_1 + 0x140),1);
  }
  return;
}

