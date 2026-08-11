/* Ghidra address: 0147b1f0 */
/* Ghidra symbol: FUN_0147b1f0 */


void FUN_0147b1f0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  iVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0x68 + (longlong)iVar1 * 4) =
         *(undefined4 *)(param_2 + 0x68 + (longlong)iVar1 * 4);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  FUN_00414ad0(param_1 + 8,*(undefined8 *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  return;
}

