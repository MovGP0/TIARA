/* Ghidra address: 00668000 */
/* Ghidra symbol: FUN_00668000 */


void FUN_00668000(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 != *(char *)(param_1 + 0x30)) {
    *(char *)(param_1 + 0x30) = param_2;
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(lVar1 + 0x78) != 0) && ((*(ushort *)(lVar1 + 0x34) & 2) == 0)) {
      FUN_0064fca0(lVar1,0xb058,0,0);
    }
  }
  return;
}

