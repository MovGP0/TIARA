/* Ghidra address: 0064c3e0 */
/* Ghidra symbol: FUN_0064c3e0 */


void FUN_0064c3e0(longlong param_1,char param_2)

{
  if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) &&
     ((bool)param_2 != ((*(uint *)(param_1 + 0xa4) & 0x800) == 0))) {
    if (param_2 == '\0') {
      *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x800;
    }
    else {
      *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffff7ff;
    }
    FUN_0064e4c0(param_1,1,0);
  }
  return;
}

