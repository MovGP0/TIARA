/* Ghidra address: 018bba30 */
/* Ghidra symbol: FUN_018bba30 */


void FUN_018bba30(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  uVar3 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"previewpages");
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  local_20 = FUN_01810fa0(&DAT_018103d8,1,0);
  *(undefined1 *)(local_20 + 0x40) = *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x38);
  local_28 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"report");
  iVar1 = FUN_01803a10(local_28);
  if (0 < iVar1) {
    uVar3 = FUN_018039f0(local_28,0);
    FUN_01813d10(local_20,*(undefined8 *)(param_1 + 0x20),uVar3);
  }
  local_28 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"sourcepages");
  FUN_018b80f0(param_1);
  iVar1 = FUN_01803a10();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_018039f0(local_28,local_2c);
      iVar2 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x20),L"TfrxDMPPage");
      if (iVar2 == 0) {
        local_38 = FUN_01884990(&PTR_FUN_018837f0,1,0);
      }
      else {
        local_38 = FUN_0196b2d0(&PTR_FUN_01934910,1,0);
      }
      *(undefined8 *)(local_20 + 0x18) = local_38;
      FUN_018039f0(local_28,local_2c);
      FUN_01813d10(local_20,local_38);
      FUN_018bb720(auStack_78,local_38);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x88),local_38);
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_018039a0(local_28);
  FUN_00410f20(local_20);
  FUN_018bb7e0(auStack_78);
  FUN_01888710(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28)
              );
  local_28 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"postprocessing");
  FUN_0197f7f0(*(undefined8 *)(param_1 + 0x48),local_28);
  FUN_00410f20(local_28);
  return;
}

