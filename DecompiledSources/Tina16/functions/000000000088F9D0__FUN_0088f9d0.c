/* Ghidra address: 0088f9d0 */
/* Ghidra symbol: FUN_0088f9d0 */


int FUN_0088f9d0(longlong param_1,longlong param_2,uint *param_3,longlong *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  uint uVar10;
  int local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_30;
  int local_2c;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_5c = 0;
  uVar3 = 0;
  local_30 = 0;
  uVar10 = 0;
  *param_4 = 0;
  if ((param_1 == 0) && (param_2 == 0)) {
    local_60 = 0x2af9;
    goto LAB_0088fe20;
  }
  if (param_3 != (uint *)0x0) {
    if ((((*(longlong *)(param_3 + 4) != 0) || (*(longlong *)(param_3 + 6) != 0)) ||
        (*(longlong *)(param_3 + 8) != 0)) || (*(longlong *)(param_3 + 10) != 0)) {
      local_60 = 0x2afb;
      goto LAB_0088fe20;
    }
    local_68 = *param_3;
    if (((local_68 & 2) != 0) && (param_1 == 0)) {
      local_60 = 0x2726;
      goto LAB_0088fe20;
    }
    if ((param_3[1] != 0) && (param_3[1] != 2)) {
      local_60 = 0x273f;
      goto LAB_0088fe20;
    }
    local_64 = param_3[2];
    if ((((local_64 != 0) && (local_64 != 1)) && (local_64 != 2)) && (local_64 != 3)) {
      local_60 = 0x273c;
      goto LAB_0088fe20;
    }
    local_5c = param_3[3];
  }
  iVar4 = 0;
  if (param_2 != 0) {
    FUN_004167d0(local_40,param_2);
    cVar2 = FUN_0043fc80(local_40[0],&local_2c);
    iVar4 = 0;
    if ((cVar2 == '\0') || (local_2c < 0)) {
      if ((local_64 == 0) || (local_64 == 2)) {
        FUN_00415460(&local_48,param_2,0);
        uVar8 = FUN_00415ab0(local_48);
        lVar7 = (**(code **)PTR_PTR_02002220)(uVar8,&DAT_0088fe98);
        if (lVar7 != 0) {
          uVar3 = (uint)*(ushort *)(lVar7 + 0x10);
          uVar10 = (uint)*(ushort *)(lVar7 + 0x10);
        }
      }
      if ((local_64 == 0) || (uVar9 = 0, local_64 == 1)) {
        FUN_00415460(&local_50,param_2,0);
        uVar8 = FUN_00415ab0(local_50);
        lVar7 = (**(code **)PTR_PTR_02002220)(uVar8,&DAT_0088fe9c);
        uVar9 = 0;
        if (lVar7 != 0) {
          uVar9 = *(ushort *)(lVar7 + 0x10);
          uVar3 = (uint)uVar9;
        }
      }
      if ((short)uVar3 == 0) {
        local_60 = FUN_00875200(local_64 != 0,0x277d,0x2af9);
        goto LAB_0088fe20;
      }
      if (local_64 == 0) {
        local_64 = FUN_00875200(uVar9 != 0,1,2);
        if ((uVar9 == 0) || ((short)uVar10 == 0)) {
          bVar1 = 0;
        }
        else {
          bVar1 = 1;
        }
        iVar4 = -(uint)bVar1;
      }
    }
    else {
      uVar3 = (**(code **)PTR_PTR_02002a88)((undefined2)local_2c);
      uVar10 = uVar3;
      if (local_64 == 0) {
        local_64 = 1;
        iVar4 = -1;
      }
    }
  }
  if (param_1 == 0) {
LAB_0088fcbc:
    if (param_1 == 0) {
      uVar6 = FUN_00875200((local_68 & 1) != 0,0,0x7f000001);
      local_30 = (**(code **)PTR_PTR_020055b8)(uVar6);
    }
    lVar7 = FUN_0088f5b0(local_64,local_5c,uVar3,local_30);
    *param_4 = lVar7;
    if (*param_4 == 0) {
      local_6c = 8;
    }
    if (((local_6c == 0) && (param_1 != 0)) &&
       (*(uint *)*param_4 = *(uint *)*param_4 | 4, (local_68 & 2) != 0)) {
      uVar8 = (**(code **)PTR_PTR_02003ea8)(local_30);
      FUN_004167a0(&local_58,uVar8);
      uVar8 = FUN_00416740(local_58);
      lVar7 = FUN_0088f490(uVar8);
      *(longlong *)(*param_4 + 0x18) = lVar7;
      if (lVar7 == 0) {
        local_6c = 8;
      }
    }
  }
  else {
    iVar5 = FUN_0088f4f0(param_1,&local_30);
    if (iVar5 != 0) goto LAB_0088fcbc;
    if ((local_68 & 4) == 0) {
      local_6c = FUN_0088f7d0(param_1,local_64,local_5c,uVar3,-(uint)((local_68 & 2) != 0),param_4);
    }
    else {
      local_6c = 0x2af9;
    }
  }
  if ((local_6c == 0) && (iVar4 != 0)) {
    local_6c = FUN_0088f920(uVar10,*param_4);
  }
  if (local_6c != 0) {
    FUN_0088f980(*param_4);
    *param_4 = 0;
  }
  local_60 = local_6c;
LAB_0088fe20:
  FUN_00414480(&local_58);
  FUN_00414590(&local_50,2);
  FUN_00414480(local_40);
  return local_60;
}

