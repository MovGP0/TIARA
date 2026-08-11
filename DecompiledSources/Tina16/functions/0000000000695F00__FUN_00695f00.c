/* Ghidra address: 00695f00 */
/* Ghidra symbol: FUN_00695f00 */


void FUN_00695f00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_f8 [4];
  int local_f4;
  int local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x88);
  if (iVar5 < 6) {
    if (iVar5 == 5) {
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
      lVar7 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
      thunk_FUN_041b2403(uVar1,0x197,lVar7 + -1,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_38);
      uVar3 = FUN_004230a0(local_38);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_48);
      uVar4 = FUN_004230c0(local_48);
      FUN_004238d0(local_28,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_28,0,5);
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
    }
    else if (iVar5 == 1) {
      FUN_00692650(*(undefined8 *)(param_1 + 0x70),5);
    }
    else if (iVar5 == 2) {
      FUN_00692650(*(undefined8 *)(param_1 + 0x70),6);
    }
    else if (iVar5 == 3) {
      FUN_00692650(*(undefined8 *)(param_1 + 0x70),7);
    }
    else if (iVar5 == 4) {
      FUN_00692650(*(undefined8 *)(param_1 + 0x70),8);
    }
  }
  else if (iVar5 == 6) {
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68);
    lVar7 = thunk_FUN_041b2403(uVar1,0x18e,0,0);
    thunk_FUN_041b2403(uVar1,0x197,lVar7 + 1,0);
    thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
    FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_58);
    uVar3 = FUN_004230a0(local_58);
    FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_68);
    uVar4 = FUN_004230c0(local_68);
    FUN_004238d0(local_28,0,0,uVar3,uVar4);
    thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_28,0,5);
    FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
  }
  else if (iVar5 == 7) {
    FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_78);
    cVar2 = FUN_00423210(local_78,*(longlong *)(param_1 + 0x70) + 0x48);
    if ((cVar2 == '\0') &&
       (FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_f8),
       *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c) <= local_ec)) {
      iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x1a1,0,0);
      if (iVar5 < 1) {
        iVar6 = 0;
      }
      else {
        FUN_00693830(*(undefined8 *)(param_1 + 0x70),local_88);
        iVar6 = FUN_004230c0(local_88);
        iVar6 = iVar6 / iVar5;
      }
      iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0,0);
      iVar5 = (iVar5 - iVar6) + 1;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,(longlong)iVar5
                         ,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_98);
      uVar3 = FUN_004230a0(local_98);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_a8);
      uVar4 = FUN_004230c0(local_a8);
      FUN_004238d0(local_28,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_28,0,5);
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      return;
    }
    FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
  }
  else if (iVar5 == 8) {
    FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_b8);
    cVar2 = FUN_00423210(local_b8,*(longlong *)(param_1 + 0x70) + 0x48);
    if ((cVar2 == '\0') &&
       (FUN_00693b00(*(undefined8 *)(param_1 + 0x70),local_f8),
       local_f4 <= *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c))) {
      iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x1a1,0,0);
      if (iVar5 < 1) {
        iVar6 = 0;
      }
      else {
        FUN_00693830(*(undefined8 *)(param_1 + 0x70),local_c8);
        iVar6 = FUN_004230c0(local_c8);
        iVar6 = iVar6 / iVar5;
      }
      iVar5 = thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x18e,0,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,0,0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0x197,
                         (longlong)(iVar5 + iVar6 + -1),0);
      thunk_FUN_041b2403(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),0xb,1,0);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_d8);
      uVar3 = FUN_004230a0(local_d8);
      FUN_00693810(*(undefined8 *)(param_1 + 0x70),local_e8);
      uVar4 = FUN_004230c0(local_e8);
      FUN_004238d0(local_28,0,0,uVar3,uVar4);
      thunk_FUN_041543e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x68),local_28,0,5);
      FUN_00693fa0(*(undefined8 *)(param_1 + 0x70),0);
      return;
    }
    FUN_006926b0(*(undefined8 *)(param_1 + 0x70));
  }
  return;
}

