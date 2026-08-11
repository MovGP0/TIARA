/* Ghidra address: 01892b60 */
/* Ghidra symbol: FUN_01892b60 */


undefined8 FUN_01892b60(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) &&
       (cVar1 = FUN_006838c0(param_1), cVar1 == '\0')) &&
      (lVar2 = thunk_FUN_041da4fa(), lVar2 != *(longlong *)(param_1 + 0x4f8))) &&
     (*(char *)(param_1 + 0x58c) == '\0')) {
    return 0;
  }
  return 1;
}

