/* Ghidra address: 0183a210 */
/* Ghidra symbol: FUN_0183a210 */


void FUN_0183a210(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  int local_24;
  longlong local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414b50(&local_30,*(undefined8 *)(param_1 + 0x50));
  FUN_0181e5f0(param_2,&local_68,L"unit");
  FUN_00414ad0(param_1 + 0x50,local_68);
  local_20 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                    (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
  if (iVar2 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x78))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50));
    if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0xd0) != 0) {
      FUN_00414480(&local_38);
      lVar1 = *(longlong *)(param_1 + 0x38);
      (**(code **)(lVar1 + 0xd0))
                (*(undefined8 *)(lVar1 + 0xd8),lVar1,*(undefined8 *)(param_1 + 0x50),&local_38);
      if (local_38 != 0) {
        local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        (**(code **)(*local_40 + 0x60))(local_40,local_38);
        local_48 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
        (**(code **)(*local_40 + 0x110))(local_40,local_48);
        FUN_00410f20(local_40);
        FUN_004b6dc0(local_48,0);
        local_20 = FUN_0181ec70(&DAT_0181d588,1);
        FUN_0181ed90(local_20,local_48);
        FUN_00410f20(local_48);
      }
    }
    if (local_20 == 0) {
      iVar2 = FUN_0181e3e0();
      local_24 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar3 = FUN_0181e3c0(param_2,local_24);
          FUN_0183da20(param_1,uVar3,param_3);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      FUN_0183da20(param_1,*(undefined8 *)(local_20 + 0x10),param_3);
      FUN_00410f20(local_20);
    }
    FUN_00414ad0(param_1 + 0x50,local_30);
  }
  else {
    FUN_00414ad0(param_1 + 0x50,local_30);
  }
  FUN_00414480(&local_68);
  FUN_00414560(&local_38,2);
  return;
}

