/* Ghidra address: 00636250 */
/* Ghidra symbol: FUN_00636250 */


uint FUN_00636250(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  longlong local_res8 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar8 = 0;
  if (local_res8[0] != 0) {
    iVar8 = *(int *)(local_res8[0] + -4);
  }
  if (iVar8 < 6) {
    bVar10 = true;
  }
  else {
    iVar8 = 0;
    if (local_res8[0] != 0) {
      iVar8 = *(int *)(local_res8[0] + -4);
    }
    bVar10 = 7 < iVar8;
  }
  lVar6 = local_res8[0];
  if (bVar10) {
    FUN_0041ddd0(local_30,PTR_PTR_02001ab8);
    lVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30[0]);
    FUN_004134c0();
  }
  iVar8 = 0;
  if (lVar6 != 0) {
    iVar8 = *(int *)(lVar6 + -4);
  }
  iVar2 = 1;
  if (0 < iVar8) {
    do {
      uVar1 = *(ushort *)(local_res8[0] + -2 + (longlong)iVar2 * 2);
      if (uVar1 < 0x100) {
        bVar10 = ((byte)(&DAT_006364e0)[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) &
                 1) != 0;
      }
      else {
        bVar10 = false;
      }
      if (!bVar10) {
        puVar9 = PTR_PTR_02001ab8;
        FUN_0041ddd0(&local_38,PTR_PTR_02001ab8);
        uVar7 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
        iVar8 = (int)uVar7;
        uVar7 = FUN_0044d490(&PTR_FUN_004334c0,uVar7,local_38);
        iVar2 = FUN_004134c0(uVar7);
      }
      iVar2 = iVar2 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar8 = FUN_004170c0(&DAT_0063650c,local_res8[0],1);
  iVar8 = *(int *)(&DAT_01df598c + (ulonglong)(iVar8 == 1) * 4);
  FUN_00416dc0(&local_48,local_res8[0],iVar8 + 1,2);
  FUN_00416ba0(&local_40,&DAT_0063651c,local_48);
  uVar3 = FUN_0043fc00(local_40);
  FUN_00416dc0(&local_58,local_res8[0],iVar8 + 3,2);
  FUN_00416ba0(&local_50,&DAT_0063651c,local_58);
  uVar4 = FUN_0043fc00(local_50);
  FUN_00416dc0(&local_68,local_res8[0],iVar8 + 5,2);
  FUN_00416ba0(&local_60,&DAT_0063651c,local_68);
  uVar5 = FUN_0043fc00(local_60);
  FUN_00414560(&local_68,8);
  FUN_00414480(local_res8);
  return uVar3 & 0xff | (uVar4 & 0xff) << 8 | (uVar5 & 0xff) << 0x10;
}

