/* Ghidra address: 01a34ae0 */
/* Ghidra symbol: FUN_01a34ae0 */


void FUN_01a34ae0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  ulonglong local_90 [5];
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined4 local_4c [7];
  
  local_a8 = 0;
  local_90[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  FUN_01995600(*(undefined8 *)(param_1 + 0x10),0,0);
  plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0,0);
  while (plVar5 != (longlong *)0x0) {
    uVar2 = FUN_01d03160(plVar5);
    FUN_00414480(&local_68);
    cVar1 = FUN_01a32ac0((short)uVar2);
    uVar8 = uVar2 & 0xffff;
    if (cVar1 == '\0') {
      cVar1 = FUN_01a32ae0(uVar2 & 0xffff);
      if (cVar1 == '\0') {
        cVar1 = FUN_01a32aa0(uVar8);
        if (cVar1 != '\0') {
          FUN_00414b50(&local_68,L"ampermeter");
        }
      }
      else {
        FUN_00414b50(&local_68,L"ohmmeter");
      }
    }
    else {
      FUN_00414b50(&local_68,L"voltmeter");
    }
    (**(code **)(*plVar5 + 0x288))(plVar5,&local_58);
    cVar1 = FUN_01a344b0(uVar8);
    if (cVar1 == '\0') {
      if (local_58 == 0) {
        local_a0 = CONCAT44(local_a0._4_4_,uVar2) & 0xffffffff0000ffff;
        local_98 = 0;
        FUN_00442f70(&local_a8,L"Not allowed component found (no label), component id: %d",&local_a0
                     ,0);
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_a8);
        FUN_004134c0(uVar6);
      }
      else {
        local_a0 = local_58;
        local_98 = 0x11;
        FUN_00442f70(local_90,L"%s is not an allowed component",&local_a0,0);
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_90[0]);
        FUN_004134c0(uVar6);
      }
    }
    uVar2 = uVar2 & 0xffff;
    if ((local_68 != 0) && (local_58 == 0)) {
      cVar1 = FUN_01a32ac0(uVar8);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 1;
      }
      cVar1 = FUN_01a32ae0(uVar2);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
      }
      cVar1 = FUN_01a32aa0(uVar2);
      if (cVar1 != '\0') {
        *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 4;
      }
    }
    cVar1 = FUN_01a32ac0(uVar2);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
      uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5,1);
      cVar1 = FUN_01a340d0(param_1,uVar3,uVar4,local_4c);
      if (cVar1 == '\0') {
        FUN_00414480(&local_60);
      }
      else {
        lVar7 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),local_4c[0]);
        FUN_00414b50(&local_60,*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x18));
      }
      lVar7 = FUN_01a32700(&DAT_01a30bb0,1,0);
      *(undefined8 *)(lVar7 + 8) = 0;
      FUN_00414ad0(lVar7 + 0x18,local_58);
      FUN_00414ad0(lVar7 + 0x20,local_60);
      *(uint *)(lVar7 + 0x28) = uVar2;
      *(longlong **)(lVar7 + 0x30) = plVar5;
      *(undefined4 *)(lVar7 + 0x2c) = 1;
      *(uint *)(lVar7 + 0x2c) = *(uint *)(lVar7 + 0x2c) | 4;
      FUN_01a343b0(param_1,uVar3,uVar4);
    }
    cVar1 = FUN_01a32ae0(uVar2);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*plVar5 + 0x210))(plVar5,0);
      (**(code **)(*plVar5 + 0x210))(plVar5,1);
      uVar6 = 0;
      if (uVar2 == 0x62) {
        uVar6 = FUN_01a31ec0(plVar5,0,1);
      }
      lVar7 = FUN_01a32700(&DAT_01a30bb0,1,0);
      *(undefined8 *)(lVar7 + 8) = uVar6;
      FUN_00414ad0(lVar7 + 0x18,local_58);
      FUN_00414480(lVar7 + 0x20);
      *(uint *)(lVar7 + 0x28) = uVar2;
      *(longlong **)(lVar7 + 0x30) = plVar5;
      *(undefined4 *)(lVar7 + 0x2c) = 1;
      FUN_01a343b0(param_1,uVar3);
    }
    FUN_01995800(*(undefined8 *)(param_1 + 0x10),0);
    plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0);
  }
  FUN_00414480(&local_a8);
  FUN_00414480(local_90);
  FUN_00414560(&local_68,3);
  return;
}

