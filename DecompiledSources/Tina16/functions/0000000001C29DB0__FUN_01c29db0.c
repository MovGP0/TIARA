/* Ghidra address: 01c29db0 */
/* Ghidra symbol: FUN_01c29db0 */


undefined8 * FUN_01c29db0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_64;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  FUN_00414ad0(param_2,L"[Misc]");
  local_64 = 0;
  iVar8 = 0;
  bVar2 = false;
  do {
    bVar3 = true;
    iVar6 = (**(code **)(**(longlong **)(&DAT_03565cf8 + (longlong)local_64 * 8) + 0x28))
                      (*(longlong **)(&DAT_03565cf8 + (longlong)local_64 * 8));
    if (0 < iVar6) {
      iVar6 = (**(code **)(**(longlong **)(&DAT_03565cf8 + (longlong)local_64 * 8) + 0x28))();
      local_60 = 0;
      if (iVar6 - 1U < 0x80000000) {
        do {
          (**(code **)(**(longlong **)(&DAT_03565cf8 + (longlong)local_64 * 8) + 0x18))
                    (*(longlong **)(&DAT_03565cf8 + (longlong)local_64 * 8),local_40,local_60);
          iVar7 = (**(code **)(*param_1 + 0xb0))(param_1,local_40[0]);
          if (iVar7 == -1) {
            bVar3 = false;
          }
          local_60 = local_60 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    bVar4 = false;
    iVar6 = (**(code **)(**(longlong **)(&DAT_03565d60 + (longlong)local_64 * 8) + 0x28))
                      (*(longlong **)(&DAT_03565d60 + (longlong)local_64 * 8));
    if (0 < iVar6) {
      iVar6 = (**(code **)(*param_1 + 0x28))();
      local_60 = 0;
      if (-1 < iVar6 + -1) {
        do {
          (**(code **)(*param_1 + 0x18))(param_1,&local_48,local_60);
          iVar7 = (**(code **)(**(longlong **)(&DAT_03565d60 + (longlong)local_64 * 8) + 0xb0))
                            (*(longlong **)(&DAT_03565d60 + (longlong)local_64 * 8),local_48);
          if (-1 < iVar7) {
            bVar4 = true;
          }
          local_60 = local_60 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    bVar1 = true;
    iVar6 = (**(code **)(**(longlong **)(&DAT_03565dc8 + (longlong)local_64 * 8) + 0x28))
                      (*(longlong **)(&DAT_03565dc8 + (longlong)local_64 * 8));
    if (0 < iVar6) {
      iVar6 = (**(code **)(*param_1 + 0x28))();
      local_60 = 0;
      bVar5 = true;
      if (-1 < iVar6 + -1) {
        do {
          bVar1 = bVar5;
          (**(code **)(*param_1 + 0x18))(param_1,&local_50,local_60);
          iVar7 = (**(code **)(**(longlong **)(&DAT_03565dc8 + (longlong)local_64 * 8) + 0xb0))
                            (*(longlong **)(&DAT_03565dc8 + (longlong)local_64 * 8),local_50);
          if (iVar7 == -1) {
            bVar1 = false;
          }
          local_60 = local_60 + 1;
          iVar6 = iVar6 + -1;
          bVar5 = bVar1;
        } while (iVar6 != 0);
      }
    }
    if ((bVar3) && (bVar4 || bVar1)) {
      (**(code **)(*DAT_03565e30 + 0x18))(DAT_03565e30,param_2,local_64);
      iVar8 = iVar8 + 1;
      if (bVar4) {
        bVar2 = true;
      }
    }
    local_64 = local_64 + 1;
    iVar6 = (**(code **)(*DAT_03565e30 + 0x28))(DAT_03565e30);
  } while (local_64 != iVar6);
  if ((iVar8 != 1) && (!bVar2)) {
    FUN_00414ad0(param_2,L"[Misc]");
    local_64 = 0;
    do {
      (**(code **)(*DAT_03565e38 + 0x18))(DAT_03565e38,&local_58,local_64);
      iVar8 = (**(code **)(*DAT_02111b70 + 0xb0))(DAT_02111b70,local_58);
      if (-1 < iVar8) {
        (**(code **)(*DAT_03565e38 + 0x18))(DAT_03565e38,param_2,local_64);
      }
      local_64 = local_64 + 1;
      iVar8 = FUN_00416db0(*param_2,L"[Misc]");
    } while ((iVar8 == 0) &&
            (iVar8 = (**(code **)(*DAT_03565e38 + 0x28))(DAT_03565e38), local_64 <= iVar8 + -1));
  }
  FUN_00414560(&local_58,4);
  return param_2;
}

