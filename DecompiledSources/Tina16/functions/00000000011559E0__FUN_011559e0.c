/* Ghidra address: 011559e0 */
/* Ghidra symbol: FUN_011559e0 */


void FUN_011559e0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8);
  FUN_01155500(param_1,uVar1);
  if (*(char *)(param_1 + 0x7c8) == '\0') {
    FUN_00417c40(PTR_DAT_02004010,param_1 + 2000,&DAT_01d0d0b8);
    PTR_DAT_02004010[3] = uVar1;
  }
  return;
}

