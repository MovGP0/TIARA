/* Ghidra address: 004bf260 */
/* Ghidra symbol: FUN_004bf260 */


void FUN_004bf260(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  int iVar1;
  
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (3 < (longlong)param_3) {
    iVar1 = 0;
    do {
      FUN_004580c0(param_2,iVar1,
                   *(undefined1 *)
                    (*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20) + (longlong)iVar1
                    ));
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

