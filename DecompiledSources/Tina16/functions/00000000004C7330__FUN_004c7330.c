/* Ghidra address: 004c7330 */
/* Ghidra symbol: FUN_004c7330 */


void FUN_004c7330(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_18 = 0;
  local_28 = 0;
  local_20 = FUN_0058ada0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  if (local_20 == 0) {
    FUN_004c6c50(param_1);
    FUN_004c8510(*(undefined8 *)(param_1 + 0x60),0xd);
  }
  else {
    cVar1 = FUN_004113d0(local_20,&LAB_00474bd8);
    if (cVar1 != '\0') {
      cVar1 = FUN_004113d0(local_20,&PTR_FUN_00486f38);
      if ((cVar1 == '\0') || ((*(byte *)(local_20 + 0x58) & 4) != 0)) {
        local_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x40);
        FUN_00414b50(&local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58));
        local_30 = FUN_00588380(*(undefined8 *)(param_1 + 0x70));
        FUN_00587e00(&local_30,&local_48);
        local_58 = &DAT_004c764c;
        FUN_00416cd0(*(longlong *)(param_1 + 0x60) + 0x58,3,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x58),local_48);
        if (*(char *)(param_1 + 0x47) != '\0') {
          uVar2 = FUN_0058ada0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x40),
                               *(undefined8 *)(param_1 + 0x70));
          *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x40) = uVar2;
        }
        FUN_004c58f0(*(undefined8 *)(param_1 + 0x60),local_20);
        *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x40) = local_10;
        FUN_00414ad0(*(longlong *)(param_1 + 0x60) + 0x58,local_18);
        cVar1 = FUN_004113d0(local_20,&PTR_FUN_00475a40);
        if (cVar1 != '\0') {
          if (*(char *)(param_1 + 0x47) != '\0') {
            uVar2 = FUN_0058ada0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x40),
                                 *(undefined8 *)(param_1 + 0x70));
            cVar1 = FUN_004ae230(local_20,uVar2,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x38),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x50));
            if (cVar1 != '\0') goto code_r0x004c75a2;
          }
          FUN_004c6e30(param_1,local_20);
        }
      }
      else {
        FUN_004c7160(param_1,&local_28,local_20);
        if (local_28 != 0) {
          FUN_004c6c50(param_1);
          FUN_004c55e0(*(undefined8 *)(param_1 + 0x60),local_28);
        }
      }
    }
  }
code_r0x004c75a2:
  FUN_00414480(&local_48);
  FUN_00414480(&local_28);
  FUN_00414480(&local_18);
  return;
}

