/* Ghidra address: 017b29c0 */
/* Ghidra symbol: FUN_017b29c0 */


undefined8 FUN_017b29c0(longlong param_1,undefined8 param_2)

{
  undefined1 local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  FUN_00498350(local_38,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  FUN_017ad620(&local_28,local_38);
  FUN_00498350(param_2,local_28 + -3,local_24 + -3,local_20 + 3,local_1c + 3);
  return param_2;
}

