/* Ghidra address: 018bb7e0 */
/* Ghidra symbol: FUN_018bb7e0 */


void FUN_018bb7e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar4 = FUN_01803bf0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x98) + 0x28),
                       L"dictionary");
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  FUN_018b7680(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x58));
  iVar1 = FUN_01803a10();
  iVar8 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar5 = FUN_018039f0(*(undefined8 *)(param_1 + 0x50),iVar8);
      lVar6 = FUN_018039f0(*(undefined8 *)(param_1 + 0x50),iVar8);
      iVar2 = FUN_00414cb0(*(undefined8 *)(lVar6 + 0x30));
      FUN_00416dc0(&local_30,*(undefined8 *)(lVar5 + 0x30),7,iVar2 + -7);
      iVar2 = FUN_004170c0(&DAT_018bba2c,local_30,1);
      FUN_00416dc0(&local_38,local_30,1,iVar2 + -1);
      iVar2 = FUN_004170c0(&DAT_018bba2c,local_30,1);
      FUN_00416dc0(&local_40,local_30,iVar2 + 1,0xff);
      FUN_00416dc0(local_50,local_38,5,0xff);
      uVar3 = FUN_0043fc00(local_50[0]);
      lVar5 = FUN_018039f0(*(undefined8 *)(param_1 + 0x50),iVar8);
      plVar7 = (longlong *)FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x88),uVar3)
      ;
      uVar4 = (**(code **)(*plVar7 + 0x1e8))(plVar7,local_40);
      FUN_018b76b0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x58),
                   *(undefined8 *)(lVar5 + 0x20),local_30,uVar4);
      iVar8 = iVar8 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414560(&local_40,3);
  return;
}

