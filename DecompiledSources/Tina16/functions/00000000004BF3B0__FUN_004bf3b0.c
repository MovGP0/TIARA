/* Ghidra address: 004bf3b0 */
/* Ghidra symbol: FUN_004bf3b0 */


void FUN_004bf3b0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  
  FUN_0040a690(param_2,0,0,0xffffc001);
  FUN_004be2f0(param_1,param_3 & 0xffffffff);
  if (9 < (longlong)param_3) {
    iVar1 = 0;
    do {
      FUN_0040a430(param_2,iVar1,
                   *(undefined1 *)
                    (*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20) + (longlong)iVar1
                    ));
      iVar1 = iVar1 + 1;
    } while (iVar1 != 10);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  return;
}

