/* Ghidra address: 01aad6b0 */
/* Ghidra symbol: FUN_01aad6b0 */


void FUN_01aad6b0(longlong param_1,undefined1 *param_2)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = 1;
  for (sVar2 = *(short *)(param_1 + 0x19c2a); sVar2 != 0; sVar2 = sVar2 + -1) {
    param_2 = param_2 + 1;
    *param_2 = *(undefined1 *)
                (param_1 + 0x14ad8 +
                (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x19c30) + -2 + (ulonglong)uVar1 * 2)
                );
    uVar1 = uVar1 + 1;
  }
  return;
}

