/* Ghidra address: 01c77b30 */
/* Ghidra symbol: FUN_01c77b30 */


void FUN_01c77b30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x2768) == 0) ||
     (((cVar1 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar1 != '\x03' &&
       (cVar1 != '\x04')) || (*(longlong *)PTR_DAT_02005100 == 0)))) {
    FUN_01c77bb0(param_1,param_2);
    cVar1 = FUN_01c8cee0(param_1);
    if (cVar1 == '\0') {
      FUN_01c76c90(param_1,param_2);
    }
  }
  else {
    FUN_00bf1e50(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
  }
  return;
}

