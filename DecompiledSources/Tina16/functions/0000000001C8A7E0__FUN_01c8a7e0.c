/* Ghidra address: 01c8a7e0 */
/* Ghidra symbol: FUN_01c8a7e0 */


void FUN_01c8a7e0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)PTR_DAT_02005100 != 0) {
    if (*(longlong *)PTR_DAT_02005100 != 0) {
      cVar1 = (**(code **)(**(longlong **)PTR_DAT_02005100 + 0xf8))(*(longlong **)PTR_DAT_02005100);
      if (cVar1 == '\0') {
        FUN_0064c650(*(undefined8 *)PTR_DAT_02005100,0);
        FUN_0064f700(*(undefined8 *)PTR_DAT_02005100,param_1 + 0x1880);
      }
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0xa10),1);
  }
  return;
}

