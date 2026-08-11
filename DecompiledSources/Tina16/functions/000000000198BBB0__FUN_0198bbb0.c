/* Ghidra address: 0198bbb0 */
/* Ghidra symbol: FUN_0198bbb0 */


void FUN_0198bbb0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [2];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  bVar1 = *(byte *)(*param_2 + 0x78);
  local_a0 = param_1;
  if (bVar1 == 0) {
    FUN_004169a0(&local_50,param_1 + 0x242);
    local_94 = FUN_01d31350(local_50);
    iVar3 = FUN_012bf060(*(undefined8 *)(local_a0 + 0xd8),*param_2);
    FUN_004169a0(&local_58,local_a0 + 0x293);
    iVar4 = FUN_01d31350(local_58);
    iVar5 = FUN_01d31f80(*(undefined8 *)(local_a0 + 0x3b0));
    iVar6 = FUN_01d31f80(*(undefined8 *)(local_a0 + 0x438));
    FUN_004168e0(&local_60,*(undefined8 *)(local_a0 + 0xe68));
    iVar7 = FUN_01d31290(local_60);
    FUN_01d31180(*param_2,0x200,0x18,local_94 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + 0x14);
  }
  else if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x38U) != 0) {
    FUN_004169a0(&local_68,param_1 + 0x242);
    iVar3 = FUN_01d31350(local_68);
    iVar4 = FUN_012bf060(*(undefined8 *)(local_a0 + 0xd8),*param_2);
    FUN_004169a0(&local_70,local_a0 + 0x293);
    iVar5 = FUN_01d31350(local_70);
    iVar6 = FUN_01d31f80(*(undefined8 *)(local_a0 + 0x3b0));
    iVar7 = FUN_01d31f80(*(undefined8 *)(local_a0 + 0x438));
    FUN_01d31180(*param_2,0x200,0x17,iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + 0x14);
  }
  else {
    FUN_004169a0(&local_78,param_1 + 0x242);
    iVar3 = FUN_01d31350(local_78);
    iVar4 = FUN_012bf060(*(undefined8 *)(local_a0 + 0xd8),*param_2);
    FUN_004169a0(&local_80,local_a0 + 0x293);
    iVar5 = FUN_01d31350(local_80);
    iVar6 = FUN_01d31f80(*(undefined8 *)(local_a0 + 0x3b0));
    FUN_01d31180(*param_2,0x200,0x15,iVar3 + iVar4 + iVar5 + iVar6 + 0x14);
  }
  FUN_004169a0(&local_88,local_a0 + 0x242);
  FUN_01d313e0(*param_2,local_88);
  FUN_01d311c0(*param_2,local_a0 + 0x368,2);
  FUN_01d311c0(*param_2,local_a0 + 0x36a,2);
  FUN_012beff0(*(undefined8 *)(local_a0 + 0xd8),*param_2);
  if (*(longlong *)(local_a0 + 0x210) == 0) {
    *(undefined2 *)(local_a0 + 0xe0) = 0;
    *(undefined2 *)(local_a0 + 0xe2) = 0;
    *(undefined8 *)(local_a0 + 0xe8) = 0xbff0000000000000;
  }
  else {
    FUN_01a98210(*(longlong *)(local_a0 + 0x210),&local_38);
    FUN_01a98060(*(undefined8 *)(local_a0 + 0x210),local_48);
    uVar9 = local_30 + local_38 >> 0x1f;
    *(short *)(local_a0 + 0xe0) = (short)((int)((local_30 + local_38 ^ uVar9) - uVar9) / 2);
    uVar9 = local_2c + local_34 >> 0x1f;
    *(short *)(local_a0 + 0xe2) = (short)((int)((local_2c + local_34 ^ uVar9) - uVar9) / 2);
    uVar9 = local_40 + local_48[0] >> 0x1f;
    uVar10 = local_30 + local_38 >> 0x1f;
    *(double *)(local_a0 + 0xe8) =
         (double)(int)((local_40 + local_48[0] ^ uVar9) - uVar9) /
         (double)(int)((local_30 + local_38 ^ uVar10) - uVar10);
  }
  FUN_01d311c0(*param_2,local_a0 + 0xe0,2);
  FUN_01d311c0(*param_2,local_a0 + 0xe2,2);
  FUN_01d311c0(*param_2,local_a0 + 0xe8,8);
  FUN_004169a0(&local_90,local_a0 + 0x293);
  FUN_01d313e0(*param_2,local_90);
  FUN_01d311c0(*param_2,local_a0 + 0x35c,4);
  FUN_01d320f0(*param_2,*(undefined8 *)(local_a0 + 0x3b0));
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar11 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    FUN_01d320f0(*param_2,*(undefined8 *)(local_a0 + 0x438));
  }
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d31630(*param_2,*(undefined8 *)(local_a0 + 0xe68));
  }
  FUN_01d31aa0(*param_2,local_a0);
  iVar3 = *(int *)(local_a0 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      uVar8 = FUN_00b94e60(local_a0,iVar3);
      cVar2 = FUN_0198bb60(auStack_c8,uVar8);
      if (cVar2 != '\0') {
        FUN_00b94e60(local_a0,iVar3);
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  FUN_00414560(&local_90,6);
  FUN_00414520(&local_60);
  FUN_00414560(&local_58,2);
  return;
}

