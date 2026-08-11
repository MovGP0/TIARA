/* Ghidra address: 00b5f840 */
/* Ghidra symbol: FUN_00b5f840 */


void FUN_00b5f840(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ushort local_1c;
  byte local_19;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar1 = FUN_00b258c0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b256e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_1c);
    FUN_00b256b0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_19);
    if ((local_19 & 1) == 1) {
      FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,(uint)local_1c * 2);
      FUN_00b15310(&local_30,local_28);
    }
    else {
      FUN_00b257a0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),&local_28,local_1c);
      FUN_00b15390(&local_30,local_28);
    }
    iVar1 = FUN_00417170(&DAT_00b5fc10,local_30,1);
    if (0 < iVar1) {
      uVar4 = 0;
      if (local_30 != 0) {
        uVar4 = *(uint *)(local_30 + -4) >> 1;
      }
      FUN_00416430(&local_40,local_30,iVar1 + 2,uVar4);
      FUN_00416020(&local_38,local_40,L"&C&R");
      iVar2 = FUN_00417170(&PTR_DAT_00b5fc2c,local_38,1);
      iVar1 = FUN_00417170(&DAT_00b5fc38,local_38,1);
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      FUN_00416430(&local_38,local_38,1,iVar1 + -1);
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      FUN_00414b90(*(longlong *)(lVar3 + 0x40) + 0x80,local_38);
    }
    iVar1 = FUN_00417170(&PTR_DAT_00b5fc2c,local_30,1);
    if (0 < iVar1) {
      uVar4 = 0;
      if (local_30 != 0) {
        uVar4 = *(uint *)(local_30 + -4) >> 1;
      }
      FUN_00416430(&local_48,local_30,iVar1 + 2,uVar4);
      FUN_00416020(&local_38,local_48,L"&L&R");
      iVar2 = FUN_00417170(&DAT_00b5fc10,local_38,1);
      iVar1 = FUN_00417170(&DAT_00b5fc38,local_38,1);
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      FUN_00416430(&local_38,local_38,1,iVar1 + -1);
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      FUN_00414b90(*(longlong *)(lVar3 + 0x40) + 0x70,local_38);
    }
    iVar1 = FUN_00417170(&DAT_00b5fc38,local_30,1);
    if (0 < iVar1) {
      uVar4 = 0;
      if (local_30 != 0) {
        uVar4 = *(uint *)(local_30 + -4) >> 1;
      }
      FUN_00416430(&local_50,local_30,iVar1 + 2,uVar4);
      FUN_00416020(&local_38,local_50,L"&L&C");
      iVar2 = FUN_00417170(&PTR_DAT_00b5fc2c,local_38,1);
      iVar1 = FUN_00417170(&DAT_00b5fc10,local_38,1);
      if (iVar2 < iVar1) {
        iVar1 = iVar2;
      }
      FUN_00416430(&local_38,local_38,1,iVar1 + -1);
      lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x40));
      FUN_00414b90(*(longlong *)(lVar3 + 0x40) + 0x78,local_38);
    }
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  FUN_004145c0(&local_50,5);
  FUN_004144d0(&local_28);
  return;
}

