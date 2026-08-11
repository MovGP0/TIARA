/* Ghidra address: 01123730 */
/* Ghidra symbol: FUN_01123730 */


void FUN_01123730(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_7c;
  uint local_78;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_7c = (int)param_2;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  uVar9 = *(uint *)(param_1 + 0xb48);
  local_78 = param_3;
  if (uVar9 == 8) {
    (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x10))
              (*(longlong **)(param_1 + 0x9f8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x808) + 0x4e8));
  }
  else if (uVar9 == 9) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
    (**(code **)(*plVar1 + 0x38))(plVar1,local_40);
    (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x60))
              (*(longlong **)(param_1 + 0xa21),local_40[0]);
  }
  else {
    if (uVar9 - 8 < 8) {
      uVar6 = (int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)(uVar9 - 8) & 0x1f);
      param_2 = (ulonglong)uVar6;
      bVar11 = (uVar6 & 0xc) != 0;
    }
    else {
      bVar11 = false;
    }
    if (!bVar11) {
      if (uVar9 < 8) {
        bVar11 = ((int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)uVar9 & 0x1f) & 0xfeU) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        uVar9 = (uint)(byte)PTR_DAT_02001408[(longlong)(int)uVar9 + -1];
        local_74 = 0;
        if (-1 < (int)(uVar9 - 1)) {
          do {
            lVar8 = (longlong)local_74;
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x8e8 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
             lVar8 * 8) = *(undefined8 *)
                           (*(longlong *)(param_1 + 0xad0 + (longlong)*(int *)(param_1 + 0xb48) * 8)
                           + lVar8 * 0x10);
            FUN_004095f0(*(undefined8 *)
                          (*(longlong *)
                            (param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
                          lVar8 * 8));
            iVar3 = FUN_00414ce0(*(undefined8 *)
                                  (*(longlong *)
                                    (param_1 + 0xad0 + (longlong)*(int *)(param_1 + 0xb48) * 8) + 8
                                  + lVar8 * 0x10));
            uVar5 = FUN_00409570((longlong)(iVar3 + 1));
            *(undefined8 *)
             (*(longlong *)(param_1 + 0x8f0 + (longlong)*(int *)(param_1 + 0xb48) * 0x21) +
             lVar8 * 8) = uVar5;
            iVar3 = *(int *)(param_1 + 0xb48);
            FUN_00415430(&local_48,
                         *(undefined8 *)
                          (*(longlong *)(param_1 + 0xad0 + (longlong)iVar3 * 8) + 8 + lVar8 * 0x10),
                         0);
            FUN_004425e0(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x8f0 + (longlong)iVar3 * 0x21) + lVar8 * 8),
                         local_48);
            local_74 = local_74 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x128))
            (*(longlong **)(param_1 + 0x8d8),local_78 == 8);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8d8),local_78 == 8);
  if (local_78 == 8) {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7f0));
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e8),1);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x708),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),
                 *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x86));
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),0);
    *(undefined1 *)(param_1 + 0xb4d) = 1;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),1);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
    FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x8ec),*(undefined4 *)(param_1 + 0x8f4));
    *(undefined1 *)(param_1 + 0xb4d) = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x9f8));
  }
  else {
    *(undefined1 *)(param_1 + 0xb4d) = 1;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
    FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,0);
    FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x8ec),*(undefined4 *)(param_1 + 0x8f0));
    *(undefined1 *)(param_1 + 0xb4d) = 0;
    uVar5 = *(undefined8 *)(param_1 + 0x7e8);
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x7e0),uVar5);
    if (local_78 - 8 < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << ((byte)(local_78 - 8) & 0x1f) &
               0xeU) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      if (local_78 == 9) {
        (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x38))
                  (*(longlong **)(param_1 + 0xa21),&local_68);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
        (**(code **)(*plVar1 + 0x60))(plVar1,local_68);
        FUN_006d78a0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7f0));
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e8),0);
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x708),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x86));
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),0);
      }
      else if (local_78 == 10) {
        FUN_006d78a0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7f8));
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e8),0);
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x708),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x86));
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),1);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x838),&local_70);
        cVar2 = FUN_00440a20(local_70,1);
        if (cVar2 != '\0') {
          FUN_01112a40(*(undefined8 *)(param_1 + 0x7d8));
        }
      }
      else {
        FUN_006d78a0(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x898));
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x6e8),0);
        FUN_007e2f80(*(undefined8 *)(param_1 + 0x708),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x86));
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),0);
      }
    }
    else {
      lVar8 = (longlong)(int)local_78;
      FUN_00848a70(*(undefined8 *)(param_1 + 0x800),PTR_DAT_02001408[lVar8 + -1]);
      uVar9 = (uint)(byte)PTR_DAT_02001408[lVar8 + -1];
      local_74 = 0;
      if (-1 < (int)(uVar9 - 1)) {
        do {
          lVar8 = (longlong)(int)local_78;
          lVar10 = (longlong)local_74;
          *(undefined8 *)(*(longlong *)(param_1 + 0xad0 + lVar8 * 8) + lVar10 * 0x10) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x8e8 + lVar8 * 0x21) + lVar10 * 8);
          FUN_004095f0(*(undefined8 *)
                        (*(longlong *)(param_1 + 0xad0 + lVar8 * 8) + 8 + lVar10 * 0x10));
          iVar3 = FUN_00414ce0(*(undefined8 *)
                                (*(longlong *)(param_1 + 0x8f0 + lVar8 * 0x21) + lVar10 * 8));
          uVar5 = FUN_00409570((longlong)(iVar3 + 1));
          *(undefined8 *)(*(longlong *)(param_1 + 0xad0 + lVar8 * 8) + 8 + lVar10 * 0x10) = uVar5;
          FUN_00415430(&local_50,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x8f0 + lVar8 * 0x21) + lVar10 * 8),0
                      );
          uVar7 = local_50;
          FUN_004425e0(*(undefined8 *)
                        (*(longlong *)(param_1 + 0xad0 + lVar8 * 8) + 8 + lVar10 * 0x10),local_50);
          if (local_78 < 8) {
            bVar11 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << ((byte)local_78 & 0x1f) & 0x90U) != 0;
          }
          else {
            bVar11 = false;
          }
          if ((bVar11) && (local_74 == 2)) {
            uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,
                                 *(longlong *)(param_1 + 0x8e8 + (longlong)(int)local_78 * 0x21) +
                                 0x10,2);
          }
          else {
            uVar5 = FUN_014313c0(&PTR_FUN_0142c230,1,
                                 *(longlong *)(param_1 + 0xad0 + (longlong)(int)local_78 * 8) +
                                 (longlong)local_74 * 0x10,local_74);
          }
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_58,local_7c + local_74);
          local_98 = local_74 + 1;
          FUN_01d082f0(*(undefined8 *)(param_1 + 0x8e0),local_30,local_58,
                       *(int *)(param_1 + 0x8e8) + 1);
          FUN_01123650(auStack_b8,&local_60,local_30[0]);
          FUN_00b0ab70(*(undefined8 *)(param_1 + 0x800),local_60,uVar5);
          local_74 = local_74 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      FUN_007e2f80(*(undefined8 *)(param_1 + 0x708),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x790),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x86));
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x780),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7d8),0);
    }
  }
  *(uint *)(param_1 + 0xb48) = local_78;
  FUN_01123220(param_1,param_1);
  uVar5 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x780) + 0x310));
  thunk_FUN_04015890(uVar5,0);
  FUN_00414480(&local_70);
  FUN_00414560(&local_68,3);
  FUN_00414590(&local_50,2);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

