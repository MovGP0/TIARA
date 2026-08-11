/* Ghidra address: 00c0e5f0 */
/* Ghidra symbol: FUN_00c0e5f0 */


void FUN_00c0e5f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong local_38;
  longlong lStack_30;
  
  local_38 = *param_2;
  lStack_30 = param_2[1];
  if (local_38 != 0) {
    iVar1 = FUN_00c0e4f0(param_1,&local_38);
    if (-1 < iVar1) {
      FUN_004ae870(*(undefined8 *)(param_1 + 0x650),iVar1);
    }
  }
  return;
}

