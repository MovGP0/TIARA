/* Ghidra address: 01b99870 */
/* Ghidra symbol: FUN_01b99870 */


void FUN_01b99870(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [2];
  undefined1 local_b0 [48];
  undefined1 local_80 [8];
  undefined1 local_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00417580(local_78,&DAT_00ea5f80);
  FUN_00417580(local_80,&DAT_00ea5be0);
  FUN_00417580(local_b0,&DAT_00ea5ae8);
  lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar5 != 0) {
    uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b95130(uVar6);
    if (cVar1 == '\0') {
      uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      lVar5 = FUN_006dd390(uVar6);
      FUN_00414b50(local_40,*(undefined8 *)(lVar5 + 0x10));
    }
    else {
      lVar5 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      FUN_00414b50(local_40,*(undefined8 *)(lVar5 + 0x10));
    }
    iVar2 = FUN_007e2ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80));
    iVar2 = iVar2 + -1;
    if (2 < iVar2) {
      do {
        FUN_007e3300(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80),iVar2);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 2);
    }
    FUN_007e7110(*(undefined8 *)(param_1 + 0x7b8),1);
    lVar5 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
    while (cVar1 = FUN_01b95130(lVar5), cVar1 != '\0') {
      lVar7 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x7b8));
      FUN_00416ba0(local_c0,&DAT_01b99f24,*(undefined8 *)(lVar5 + 0x10));
      FUN_007e2c60(lVar7,local_c0[0]);
      iVar2 = FUN_00416db0(local_40[0],*(undefined8 *)(lVar5 + 0x10));
      FUN_007e2da0(lVar7,iVar2 != 0);
      *(longlong *)(lVar7 + 0x18) = (longlong)(int)lVar5;
      *(longlong *)(lVar7 + 0x118) = param_1;
      *(code **)(lVar7 + 0x110) = FUN_01b99f70;
      FUN_00414ad0(lVar7 + 0xb0,DAT_02110dd8);
      FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80),lVar7);
      lVar5 = FUN_006dd3e0(lVar5);
    }
    uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b95130(uVar6);
    if (cVar1 == '\0') {
      plVar8 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      iVar2 = (**(code **)(*plVar8 + 0x28))();
      iVar9 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
          if (iVar9 != iVar3) {
            uVar6 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x7b8));
            plVar8 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
            (**(code **)(*plVar8 + 0x18))(plVar8,&local_d0,iVar9);
            FUN_00416ba0(&local_c8,&DAT_01b99f24,local_d0);
            FUN_007e2c60(uVar6,local_c8);
            FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80),uVar6);
            plVar8 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))
                               (*(longlong **)(param_1 + 0x880),iVar9);
            (**(code **)(*plVar8 + 0x38))(plVar8,&local_48);
            FUN_00ea8930(&local_d8,local_48,L"^\\[\\!.+\\]",4);
            FUN_00417c40(local_80,&local_d8,&DAT_00ea5be0);
            iVar3 = FUN_00ea7830();
            iVar10 = 0;
            if (-1 < iVar3 + -1) {
              do {
                lVar5 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x7b8));
                FUN_00ea7860(local_80,local_b0,iVar10);
                FUN_00ea7500(local_b0,&local_e0);
                FUN_00414b50(&local_50,local_e0);
                iVar4 = 0;
                if (local_50 != 0) {
                  iVar4 = *(int *)(local_50 + -4);
                }
                FUN_00416dc0(&local_50,local_50,3,iVar4 + -3);
                iVar4 = FUN_004170c0(L"id_group",local_50,1);
                if (iVar4 < 1) {
                  FUN_00416ba0(&local_f8,&DAT_01b99f24,local_50);
                  FUN_007e2c60(lVar5,local_f8);
                }
                else {
                  FUN_00c848f0(*(undefined8 *)(*(longlong *)PTR_DAT_02002c40 + 0x30),&local_f0,
                               local_50,*(undefined8 *)PTR_DAT_02001f18);
                  FUN_00416ba0(&local_e8,&DAT_01b99f24,local_f0);
                  FUN_007e2c60(lVar5,local_e8);
                }
                *(longlong *)(lVar5 + 0x118) = param_1;
                *(code **)(lVar5 + 0x110) = FUN_01b99f70;
                FUN_00414ad0(lVar5 + 0xb0,DAT_02110dd8);
                FUN_007e34c0(uVar6,lVar5);
                iVar10 = iVar10 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    uVar6 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b95130(uVar6);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7c0),cVar1 == '\0');
    iVar2 = FUN_007e2ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x80));
    FUN_007e2f80(*(undefined8 *)(param_1 + 2000),3 < iVar2);
  }
  FUN_00414560(&local_f8,4);
  FUN_00417740(&local_d8,&DAT_00ea5be0);
  FUN_00414560(&local_d0,3);
  FUN_00417740(local_b0,&DAT_00ea5ae8);
  FUN_00417740(local_80,&DAT_00ea5be0);
  FUN_00417740(local_78,&DAT_00ea5f80);
  FUN_00414560(&local_50,3);
  return;
}

