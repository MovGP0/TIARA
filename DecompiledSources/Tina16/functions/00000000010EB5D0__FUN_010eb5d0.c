/* Ghidra address: 010eb5d0 */
/* Ghidra symbol: FUN_010eb5d0 */


void FUN_010eb5d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 local_28 [16];
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1);
  }
  FUN_00498350(local_28,0,0,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  FUN_01acf9e0(*(undefined8 *)(param_1 + 0x50),local_28);
  return;
}

