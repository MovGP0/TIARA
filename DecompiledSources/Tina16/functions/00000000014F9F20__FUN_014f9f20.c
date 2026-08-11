/* Ghidra address: 014f9f20 */
/* Ghidra symbol: FUN_014f9f20 */


undefined8 FUN_014f9f20(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 local_120 [16];
  int local_110 [2];
  int local_108;
  
  uVar1 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  FUN_014f9d60(local_110,uVar1);
  FUN_014f9dc0(local_120,uVar1);
  FUN_01aa3960(param_1,local_108,param_1 + -0x1e0 + (longlong)local_108 * 0x788,param_2,
               *(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
               *(undefined1 *)(param_1 + 0x587 + (longlong)local_110[0]));
  return 1;
}

