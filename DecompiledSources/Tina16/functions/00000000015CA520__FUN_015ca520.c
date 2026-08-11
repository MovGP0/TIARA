/* Ghidra address: 015ca520 */
/* Ghidra symbol: FUN_015ca520 */


void FUN_015ca520(longlong *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x245) = param_2;
  uVar1 = FUN_015c0be0(param_2);
  *(undefined1 *)((longlong)param_1 + 0x244) = uVar1;
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

