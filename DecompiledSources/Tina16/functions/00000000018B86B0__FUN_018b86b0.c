/* Ghidra address: 018b86b0 */
/* Ghidra symbol: FUN_018b86b0 */


undefined8 FUN_018b86b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"anchors");
  iVar1 = FUN_01803a10(uVar3);
  iVar1 = iVar1 + -1;
  uVar4 = local_38;
  if (-1 < iVar1) {
    do {
      uVar4 = FUN_018039f0(uVar3,iVar1);
      FUN_01803cc0(uVar4,local_30,L"text");
      iVar2 = FUN_0043e6d0(local_30[0],param_2);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + -1;
      uVar4 = local_38;
    } while (iVar1 != -1);
  }
  local_38 = uVar4;
  FUN_00414480(local_30);
  return local_38;
}

