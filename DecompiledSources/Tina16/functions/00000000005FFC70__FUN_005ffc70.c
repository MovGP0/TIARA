/* Ghidra address: 005ffc70 */
/* Ghidra symbol: FUN_005ffc70 */


void FUN_005ffc70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005fd520(*(undefined8 *)(param_1 + 0x78));
  thunk_FUN_041a19a1(*(undefined8 *)(param_1 + 0x60),uVar1);
  thunk_FUN_03f297b0(*(undefined8 *)(param_1 + 0x60),
                     *(undefined2 *)
                      (&DAT_01ded824 +
                      (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x78) + 0x28) * 2));
  return;
}

