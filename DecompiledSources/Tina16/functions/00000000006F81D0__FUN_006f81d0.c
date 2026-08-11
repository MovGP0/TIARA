/* Ghidra address: 006f81d0 */
/* Ghidra symbol: FUN_006f81d0 */


void FUN_006f81d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 2) == 0) &&
     ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0x20) & 1) == 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_006f7fa0(param_1);
    }
  }
  FUN_00658560(param_1,param_2);
  return;
}

