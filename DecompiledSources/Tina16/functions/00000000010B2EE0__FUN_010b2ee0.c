/* Ghidra address: 010b2ee0 */
/* Ghidra symbol: FUN_010b2ee0 */


void FUN_010b2ee0(longlong param_1,int param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1 < param_2) {
    param_1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"TMCUProject.GetSourceFile: index out of bound");
    FUN_004134c0();
  }
  FUN_004aeac0(*(undefined8 *)(param_1 + 0x18));
  return;
}

