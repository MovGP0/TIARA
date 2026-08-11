/* Ghidra address: 019eecc0 */
/* Ghidra symbol: FUN_019eecc0 */


ulonglong * FUN_019eecc0(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_res18 [2];
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined4 local_38;
  uint local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  ulonglong uVar4;
  
  local_50 = auStack_a8;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,local_res18[0]);
  uVar4 = *param_2;
  local_24 = FUN_004170c0(&DAT_019eefdc,uVar4,1);
  while (0 < local_24) {
    local_6c = local_24 + 1;
    local_28 = FUN_004170c0(&DAT_019eefdc,*param_2,local_6c);
    local_20 = 0;
    FUN_00416dc0(&local_58,*param_2,1,local_24 + -1);
    FUN_00416dc0(&local_60,*param_2,local_6c,(local_28 - local_24) + -1);
    local_88 = L"_Neg";
    FUN_00416cd0(&local_20,3,local_58,local_60);
    local_38 = 0;
    if (*param_2 != 0) {
      local_38 = *(undefined4 *)(*param_2 - 4);
    }
    FUN_00416dc0(&local_68,*param_2,local_28 + 1,local_38);
    FUN_00416ba0(param_2,local_20,local_68);
    FUN_00414480(&local_20);
    uVar4 = *param_2;
    local_24 = FUN_004170c0(&DAT_019eefdc,uVar4,1);
  }
  local_3c = 0;
  if (*param_2 != 0) {
    local_3c = *(int *)(*param_2 - 4);
  }
  local_2c = 1;
  iVar6 = local_3c;
  if (0 < local_3c) {
    do {
      lVar5 = (longlong)(int)local_2c;
      uVar1 = *(short *)((*param_2 - 2) + lVar5 * 2) - 0x28;
      if (uVar1 < 8) {
        uVar3 = (int)CONCAT71((int7)(uVar4 >> 8),1) << ((byte)uVar1 & 0x1f);
        uVar4 = (ulonglong)uVar3;
        bVar7 = (uVar3 & 3) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        uVar4 = (ulonglong)local_2c;
        FUN_00416e20(param_2,uVar4,1);
      }
      if (*(short *)((*param_2 - 2) + lVar5 * 2) == 0x2f) {
        lVar2 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar2 + -2 + lVar5 * 2) = 0x2d;
      }
      local_2c = local_2c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_68,3);
  FUN_00414480(local_res18);
  return param_2;
}

