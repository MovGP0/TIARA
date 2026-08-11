/* Ghidra address: 00c98b90 */
/* Ghidra symbol: FUN_00c98b90 */


void FUN_00c98b90(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + -8);
  }
  iVar1 = (*DAT_01ea9b20)(param_1,param_2,uVar2);
  if (iVar1 != 1) {
    FUN_00c99220(&PTR_FUN_00c984e8,L"EVP_DigestUpdate error");
  }
  return;
}

