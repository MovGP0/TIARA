/* Ghidra address: 01c77bb0 */
/* Ghidra symbol: FUN_01c77bb0 */


void FUN_01c77bb0(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x2768) == 0) ||
     (((cVar1 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar1 != '\x03' &&
       (cVar1 != '\x04')) || (*(longlong *)PTR_DAT_02005100 == 0)))) {
    FUN_01b9b8a0();
  }
  else {
    FUN_00bf1d60(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
  }
  return;
}

