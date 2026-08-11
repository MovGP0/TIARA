/* Ghidra address: 004bf2d0 */
/* Ghidra symbol: FUN_004bf2d0 */


void FUN_004bf2d0(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  int iVar1;
  
  *param_2 = 0;
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (7 < (longlong)param_3) {
    iVar1 = 0;
    do {
      FUN_00458240(param_2,iVar1,
                   *(undefined1 *)
                    (*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20) + (longlong)iVar1
                    ));
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

