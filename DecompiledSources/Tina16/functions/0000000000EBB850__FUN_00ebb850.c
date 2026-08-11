/* Ghidra address: 00ebb850 */
/* Ghidra symbol: FUN_00ebb850 */


undefined8 FUN_00ebb850(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong local_res10 [3];
  int local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064cf60(DAT_0202ea98,0x484);
  *(undefined4 *)(DAT_0202ea98 + 0xec) = param_3;
  if (DAT_0202ea98[0xed] != 0) {
    if (local_res10[0] != 0) {
      iVar2 = FUN_004170c0(&DAT_00ebbf34,local_res10[0],1);
      if (iVar2 < 1) {
        FUN_00414b50(&local_38,L"PACKAGE.FPL");
      }
      else {
        iVar2 = FUN_004170c0(&DAT_00ebbf34,local_res10[0],1);
        FUN_00416dc0(&local_48,local_res10[0],1,iVar2 + -1);
        FUN_0043e130(&local_40,local_48);
        FUN_00416ba0(&local_38,local_40,L".FPL");
        iVar2 = FUN_004170c0(&DAT_00ebbf34,local_res10[0],1);
        uVar3 = 0;
        if (local_res10[0] != 0) {
          uVar3 = *(undefined4 *)(local_res10[0] + -4);
        }
        FUN_00416dc0(local_res10,local_res10[0],iVar2 + 1,uVar3);
      }
      iVar2 = (**(code **)(*(longlong *)DAT_0202ea98[0xeb] + 0xb8))
                        ((longlong *)DAT_0202ea98[0xeb],local_38);
      if (iVar2 < 0) {
        (**(code **)(*(longlong *)DAT_0202ea98[0xde] + 0x268))((longlong *)DAT_0202ea98[0xde],0);
      }
      else {
        (**(code **)(*(longlong *)DAT_0202ea98[0xde] + 0x268))((longlong *)DAT_0202ea98[0xde],iVar2)
        ;
      }
      FUN_00ebbfa0(DAT_0202ea98,0);
      local_8c = 0;
      while( true ) {
        iVar2 = (**(code **)(**(longlong **)(DAT_0202ea98[0xed] + 0x10) + 0x28))
                          (*(longlong **)(DAT_0202ea98[0xed] + 0x10));
        if (iVar2 <= local_8c) break;
        (**(code **)(**(longlong **)(DAT_0202ea98[0xed] + 0x10) + 0x18))
                  (*(longlong **)(DAT_0202ea98[0xed] + 0x10),&local_50,local_8c);
        iVar2 = FUN_004170c0(local_res10[0],local_50,1);
        if (iVar2 != 0) break;
        local_8c = local_8c + 1;
      }
    }
    if (local_res10[0] != 0) {
      iVar2 = (**(code **)(**(longlong **)(DAT_0202ea98[0xed] + 0x10) + 0x28))
                        (*(longlong **)(DAT_0202ea98[0xed] + 0x10));
      if (local_8c < iVar2) {
        FUN_004b3cf0(*(undefined8 *)(DAT_0202ea98[0xed] + 0x10),&local_28,local_8c);
        FUN_004b4060(*(undefined8 *)(DAT_0202ea98[0xed] + 0x10),local_20,local_28);
        FUN_00ea9f80(&local_58,local_20[0]);
        FUN_00414b50(local_20,local_58);
        iVar2 = FUN_004170c0(&DAT_00ebbf80,local_20[0],1);
        if (iVar2 < 1) {
          FUN_00414b50(&local_30,local_20[0]);
        }
        else {
          iVar2 = FUN_004170c0(&DAT_00ebbf80,local_20[0],1);
          FUN_00416dc0(&local_30,local_20[0],1,iVar2 + -1);
        }
        plVar1 = (longlong *)DAT_0202ea98[0xdf];
        uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],local_30);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
        FUN_00ebc110(DAT_0202ea98,0);
        plVar1 = (longlong *)DAT_0202ea98[0xe2];
        uVar3 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],local_28);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
        goto LAB_00ebbcdd;
      }
    }
    (**(code **)(*(longlong *)DAT_0202ea98[0xdf] + 0x268))((longlong *)DAT_0202ea98[0xdf],0);
    FUN_00ebc110(DAT_0202ea98,0);
    (**(code **)(*(longlong *)DAT_0202ea98[0xe2] + 0x268))((longlong *)DAT_0202ea98[0xe2],0);
  }
LAB_00ebbcdd:
  FUN_0064de00(DAT_0202ea98[0xdb],local_res10[0]);
  iVar2 = (**(code **)(*DAT_0202ea98 + 0x2d0))(DAT_0202ea98);
  if (iVar2 == 1) {
    if (*(longlong *)(DAT_0202ea98[0xd8] + 0x530) == DAT_0202ea98[0xd9]) {
      uVar3 = (**(code **)(*(longlong *)DAT_0202ea98[0xde] + 0x260))((longlong *)DAT_0202ea98[0xde])
      ;
      FUN_004b3cf0(DAT_0202ea98[0xeb],&local_60,uVar3);
      FUN_0043e130(local_20,local_60);
      iVar2 = FUN_00416db0(local_20[0],L"PACKAGE.FPL");
      if (iVar2 == 0) {
        plVar1 = (longlong *)DAT_0202ea98[0xe2];
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_80,uVar3);
        FUN_00ea9ca0(param_1,local_80);
      }
      else {
        FUN_004414c0(&local_68,local_20[0],0);
        FUN_00414b50(local_20,local_68);
        plVar1 = (longlong *)DAT_0202ea98[0xe2];
        uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_78,uVar3);
        FUN_00416cd0(&local_70,3,local_20[0],&DAT_00ebbf34,local_78);
        FUN_00ea9ca0(param_1,local_70);
      }
    }
    else if (*(longlong *)(DAT_0202ea98[0xd8] + 0x530) == DAT_0202ea98[0xda]) {
      FUN_0064dd90(DAT_0202ea98[0xdb],&local_88);
      FUN_00ea9ca0(param_1,local_88);
    }
    else {
      FUN_00414ad0(param_1,L"NOPCB");
    }
  }
  FUN_00414480(&local_88);
  FUN_00414560(&local_80,0xd);
  FUN_00414480(local_res10);
  return param_1;
}

