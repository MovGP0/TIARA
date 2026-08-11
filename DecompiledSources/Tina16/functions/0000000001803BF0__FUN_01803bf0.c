/* Ghidra address: 01803bf0 */
/* Ghidra symbol: FUN_01803bf0 */


longlong FUN_01803bf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_01803b80(param_1,param_2);
  if (iVar1 == -1) {
    lVar2 = FUN_01803a30(param_1);
    FUN_00414ad0(lVar2 + 0x20,param_2);
  }
  else {
    lVar2 = FUN_018039f0(param_1,iVar1);
  }
  return lVar2;
}

