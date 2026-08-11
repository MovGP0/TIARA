/* Ghidra address: 00c988e0 */
/* Ghidra symbol: FUN_00c988e0 */


undefined8 FUN_00c988e0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (*DAT_01eaa1f0)();
  uVar3 = FUN_00409570(0x30);
  (*DAT_01ea9c98)(uVar3);
  iVar1 = (*DAT_01ea9b18)(uVar3,uVar2,0);
  if (iVar1 != 1) {
    FUN_00c99220(&PTR_FUN_00c984e8,L"EVP_DigestInit_ex error");
  }
  return uVar3;
}

