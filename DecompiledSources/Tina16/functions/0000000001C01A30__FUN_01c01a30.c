/* Ghidra address: 01c01a30 */
/* Ghidra symbol: FUN_01c01a30 */


undefined4 FUN_01c01a30(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x498) != 0) && (cVar1 = FUN_01c019e0(param_1), cVar1 != '\0')) {
    lVar2 = FUN_01c019a0(param_1);
    return *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x10);
  }
  return 0;
}

