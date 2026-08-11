/* Ghidra address: 017b6e20 */
/* Ghidra symbol: FUN_017b6e20 */


undefined8 FUN_017b6e20(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [24];
  
  FUN_00498350(local_28,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  FUN_017ad620(param_2,local_28);
  return param_2;
}

