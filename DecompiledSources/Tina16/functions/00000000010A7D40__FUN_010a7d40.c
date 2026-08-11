/* Ghidra address: 010a7d40 */
/* Ghidra symbol: FUN_010a7d40 */


undefined1 FUN_010a7d40(longlong param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_d8 [36];
  int local_b4;
  int local_b0;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char local_89;
  longlong local_88;
  int local_80 [2];
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50 [2];
  longlong local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_a0 = 0;
  local_a8 = 0;
  local_40 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  local_b4 = param_2;
  local_b0 = param_3;
  uVar6 = FUN_0065b870(param_1);
  local_2c = 3;
  DAT_0202f91c = thunk_FUN_040ef593(uVar6);
  lVar7 = thunk_FUN_041b2403(uVar6,0xb2,0,local_80);
  local_a9 = lVar7 == 0;
  if ((bool)local_a9) {
    DAT_0202f920 = local_78;
    DAT_0202f924 = local_74;
    iVar3 = thunk_FUN_041b2403(uVar6,0xd7,0,&DAT_0202f920);
    DAT_0202f92c = thunk_FUN_041b2403(uVar6,0xc9,(longlong)iVar3,0);
    DAT_0202f928 = thunk_FUN_041b2403(uVar6,0xce,0,0);
    DAT_0202f914 = (local_78 - local_80[0]) / 6;
    DAT_0202f918 = thunk_FUN_03b994b9((longlong)DAT_0202f91c,1);
    uVar6 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0xb8));
    thunk_FUN_041a19a1((longlong)DAT_0202f91c,uVar6);
    if (DAT_0202f928 <= DAT_0202f92c) {
      iVar9 = (DAT_0202f92c - DAT_0202f928) + 1;
      iVar3 = DAT_0202f928;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
                  (*(longlong **)(param_1 + 0x510),&local_70,iVar3);
        FUN_00416ba0(&local_40,&DAT_010a835c,local_70);
        local_34 = 0;
        if (local_40 != 0) {
          local_34 = *(undefined4 *)(local_40 + -4);
        }
        uVar6 = FUN_0065b870(param_1);
        DAT_0202f930 = thunk_FUN_041b2403(uVar6,0xbb,(longlong)iVar3,0);
        local_30 = 1;
        if (local_b0 == 1) {
          iVar4 = FUN_00f8f620();
          if ((iVar4 == -1) || (iVar3 != local_b4)) {
            if (iVar3 == local_b4) {
              FUN_010a7830(param_1,iVar3,L"");
            }
            else {
              if (*(longlong *)PTR_DAT_02002ba8 == 0) {
LAB_010a7fbe:
                bVar1 = false;
              }
              else {
                cVar2 = FUN_00f60310(*(undefined8 *)PTR_DAT_02002ba8,iVar3 + 1,&local_88);
                if (cVar2 == '\0') goto LAB_010a7fbe;
                bVar1 = true;
              }
              if ((bVar1) && (*(char *)(local_88 + 0xc) != '\0')) {
                local_89 = '\x01';
              }
              else {
                local_89 = '\0';
              }
              if (local_89 == '\0') {
                uVar5 = 0x9f9f;
              }
              else {
                uVar5 = 0xff;
              }
              if (bVar1) {
                FUN_010a7830(param_1,iVar3,uVar5);
              }
            }
          }
          else {
            FUN_010a7830(param_1,iVar3,0xada8ea);
          }
        }
        else if (local_b0 == 2) {
          if ((iVar3 != -1) && (iVar3 == local_b4 + -1)) {
            FUN_010a7830(param_1,iVar3,0xada8ea);
          }
        }
        else if (local_b0 == 3) {
          local_2c = 0;
          if (iVar3 == local_b4 + -1) {
            FUN_010a7830(param_1,iVar3,0xada8ea);
          }
        }
        else if (local_b0 == 4) {
          local_2c = 4;
          if ((local_b4 == -1) || (iVar3 != local_b4 + -1)) {
            cVar2 = FUN_01089230(*(undefined8 *)PTR_DAT_02002ab0,iVar3 + 1,&local_98);
            if (cVar2 == '\0') {
              FUN_010a79d0(auStack_d8);
            }
            else {
              cVar2 = FUN_010ae5f0(local_98);
              if (cVar2 == '\0') {
                uVar5 = 0x9f9f;
              }
              else {
                uVar5 = 0xff;
              }
              FUN_010a7830(param_1,iVar3,uVar5);
            }
          }
          else {
            FUN_010a7830(param_1,iVar3,L"");
          }
        }
        else if (local_b0 == 5) {
          local_2c = 2;
          if ((local_b4 != -1) && (iVar3 == local_b4 + -1)) {
            uVar6 = FUN_0109e760(*(undefined8 *)PTR_DAT_02005738);
            FUN_004167d0(&local_a0,uVar6);
            FUN_0109e730(*(undefined8 *)PTR_DAT_02005738,&local_a8);
            iVar4 = FUN_00416db0(local_a0,local_a8);
            if (iVar4 == 0) {
              FUN_010a7830(param_1,iVar3,L"");
              goto LAB_010a8287;
            }
          }
          uVar6 = FUN_00f7bdb0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)PTR_DAT_02005738 + 0x1660) + 0x3548));
          uVar8 = FUN_0109e760(*(undefined8 *)PTR_DAT_02005738);
          cVar2 = _Dbg_IsBreakPoint(uVar6,iVar3 + 1,uVar8);
          if (cVar2 == '\0') {
            FUN_010a79d0(auStack_d8);
          }
          else {
            if (local_89 == '\0') {
              uVar5 = 0x9f9f;
            }
            else {
              uVar5 = 0xff;
            }
            FUN_010a7830(param_1,iVar3,uVar5);
          }
        }
        else if (local_b0 == 6) {
          local_2c = 1;
          if ((local_b4 == -1) || (iVar3 != local_b4 + -1)) {
            cVar2 = FUN_010a5480(*(undefined8 *)PTR_DAT_020047b0,iVar3 + 1);
            if (cVar2 == '\0') {
              FUN_010a79d0(auStack_d8);
            }
            else {
              FUN_010a7830(param_1,iVar3,0xff);
            }
          }
          else {
            FUN_010a7830(param_1,iVar3,L"");
          }
        }
LAB_010a8287:
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  uVar6 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar6,(longlong)DAT_0202f91c);
  FUN_00414560(&local_a8,2);
  FUN_00414560(&local_70,2);
  FUN_004144d0(local_60);
  FUN_00414480(local_50);
  FUN_00414480(&local_40);
  return local_a9;
}

