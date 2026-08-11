/* Ghidra address: 006ebf50 */
/* Ghidra symbol: FUN_006ebf50 */


void FUN_006ebf50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_40 = 0;
  local_50 = param_1;
  local_48 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    iVar2 = FUN_00654c00();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00654bc0(*(undefined8 *)(local_50 + 0x78),iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_006c0170);
        if (((cVar1 != '\0') &&
            (lVar4 = FUN_00654bc0(*(undefined8 *)(local_50 + 0x78),iVar6), lVar4 != local_50)) &&
           (lVar4 = FUN_00654bc0(*(undefined8 *)(local_50 + 0x78),iVar6),
           *(undefined8 **)(lVar4 + 0x498) == local_48)) {
          local_38 = local_48[2];
          local_30 = 0x11;
          lVar4 = FUN_00654bc0(*(undefined8 *)(local_50 + 0x78),iVar6);
          local_28 = *(undefined8 *)(lVar4 + 0x10);
          local_20 = 0x11;
          local_68 = 1;
          uVar3 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_020056d0,&local_38);
          FUN_004134c0(uVar3);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (*(longlong *)(local_50 + 0x498) != 0) {
    cVar1 = FUN_0065be20(local_50);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(local_50);
      thunk_FUN_041b2403(uVar3,0x469,0,0);
    }
    *(undefined8 *)(local_50 + 0x498) = 0;
  }
  if (((local_48 == (undefined8 *)0x0) || (local_48[0xf] != *(longlong *)(local_50 + 0x78))) ||
     ((cVar1 = FUN_004113d0(local_48,&PTR_FUN_006c0170), cVar1 != '\0' ||
      ((cVar1 = FUN_004113d0(local_48,&PTR_FUN_006b8830), cVar1 != '\0' ||
       (cVar1 = FUN_004113d0(local_48,&PTR_FUN_006c6e18), cVar1 != '\0')))))) {
    bVar7 = false;
  }
  else {
    cVar1 = FUN_006ebf00(auStack_88,*local_48,L"TDBEdit");
    bVar7 = cVar1 == '\0';
  }
  if ((bVar7) && (cVar1 = FUN_006ebf00(auStack_88,*local_48,L"TDBMemo"), cVar1 == '\0')) {
    cVar1 = FUN_0065be20(local_50);
    if (cVar1 != '\0') {
      FUN_006ec230(local_50,local_48);
      uVar3 = FUN_0065b870(local_50);
      uVar5 = FUN_0065b870(local_48);
      thunk_FUN_041b2403(uVar3,0x469,uVar5,0);
    }
    *(undefined8 **)(local_50 + 0x498) = local_48;
    cVar1 = FUN_004113d0(local_48,&PTR_FUN_0066ac78);
    if (cVar1 != '\0') {
      FUN_0043f750(&local_40,*(undefined4 *)(local_50 + 0x4b4));
      FUN_0064de00(local_48,local_40);
    }
  }
  FUN_00414480(&local_40);
  return;
}

