/* Ghidra address: 00845850 */
/* Ghidra symbol: FUN_00845850 */


void FUN_00845850(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x3e) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_1 + 0x3e) & 0x1f)
            & 0xcU) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_008456d0(param_1,param_1 + 0x4c,param_1 + 0x44,*(longlong *)(param_1 + 0xd0) + 0x4ec,1,
                 *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x4c0));
  }
  return;
}

