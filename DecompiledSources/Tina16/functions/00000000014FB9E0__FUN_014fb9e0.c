/* Ghidra address: 014fb9e0 */
/* Ghidra symbol: FUN_014fb9e0 */


void FUN_014fb9e0(longlong param_1)

{
  undefined1 uVar1;
  undefined1 local_100 [8];
  int local_f8;
  int local_f0 [2];
  int local_e8;
  
  uVar1 = FUN_01aa16f0(*(undefined8 *)(param_1 + 0x550));
  FUN_014f9d60(local_f0,uVar1);
  FUN_014f9dc0(local_100,uVar1);
  *(undefined1 *)(param_1 + -0x1e0 + (longlong)local_e8 * 0x788) =
       *(undefined1 *)(param_1 + 0x567 + (longlong)local_f0[0]);
  *(undefined1 *)(param_1 + -0x1e0 + (longlong)local_f8 * 0x788) = 3;
  return;
}

