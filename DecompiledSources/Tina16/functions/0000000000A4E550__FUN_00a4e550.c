/* Ghidra address: 00a4e550 */
/* Ghidra symbol: FUN_00a4e550 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_00a4e550(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 *local_a0;
  char local_91;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int local_78 [2];
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  byte local_40;
  undefined1 local_39;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_b0 = auStack_108;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_38 = FUN_00a4e3d0(param_1,param_2);
  if (local_38 == 0) {
    local_38 = FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
    FUN_009ec440(&local_b8,*param_2);
    FUN_005fcd80(local_38,local_b8);
    iVar2 = FUN_0040c770(((double)param_2[1] *
                         (double)*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) / 72.0);
    FUN_005fcc80(local_38,-iVar2);
    FUN_005fce70(local_38,*(undefined1 *)(param_2 + 2));
    FUN_005fcfa0(local_38,*(undefined1 *)((longlong)param_2 + 0x1c));
    FUN_00a4e070(param_1,local_38);
    local_91 = '\0';
    if (*(int *)(*(longlong *)(local_38 + 0x18) + 0x28) != 0) {
      local_20 = thunk_FUN_040ef593(0);
      uVar4 = FUN_005fc8c0(local_38);
      local_28 = thunk_FUN_041a19a1(local_20,uVar4);
      local_39 = FUN_005fcf90(local_38);
      FUN_005fcfa0(local_38,1);
      iVar2 = thunk_FUN_04172119(local_20,local_78);
      local_91 = iVar2 != 0;
      if ((bool)local_91) {
        if (local_40 == 2) {
          FUN_005fcfa0(local_38,2);
        }
        else {
          FUN_005fcfa0(local_38,local_39);
        }
        cVar1 = FUN_005fcf90(local_38);
        if (cVar1 != '\x01') {
          thunk_FUN_04172119(local_20,local_78);
        }
      }
      else {
        FUN_005fcfa0(local_38,local_39);
      }
      thunk_FUN_041a19a1(local_20,local_28);
      thunk_FUN_041a9b5c(0,local_20);
    }
    if (local_91 != '\0') {
      *(int *)(local_38 + 0x58) = local_78[0] - local_6c;
      *(int *)(local_38 + 0x5c) = (local_78[0] - local_6c) / 2;
      *(int *)(local_38 + 0x3c) = local_78[0];
      *(undefined4 *)(local_38 + 0x40) = local_70;
      *(undefined4 *)(local_38 + 0x44) = local_68;
      *(undefined4 *)(local_38 + 0x4c) = local_60;
      *(undefined4 *)(local_38 + 0x48) = local_64;
      *(uint *)(local_38 + 0x50) = (uint)local_40;
    }
  }
  local_30 = (longlong *)FUN_00a4dfc0(&PTR_FUN_00a4d8c8,1);
  (**(code **)(*local_30 + 0x10))(local_30,local_38);
  *(undefined4 *)(local_30 + 7) = *(undefined4 *)(param_2 + 3);
  FUN_005fc860(local_30,*(undefined4 *)((longlong)param_2 + 0x14));
  FUN_00461840(&local_90,param_2 + 4);
  local_a0 = &local_90;
  if ((ushort)local_90 < 0x20) {
    bVar5 = (1 << ((byte)local_90 & 0x1f) & 0xf000cU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar3 = FUN_00462650(&local_90);
    *(undefined4 *)((longlong)local_30 + 0x54) = uVar3;
  }
  else {
    cVar1 = FUN_0046c390(&local_90);
    if (cVar1 != '\0') {
      FUN_00468a10(&local_d0,L"normal");
      cVar1 = FUN_0046f340(&local_90,&local_d0);
      if (cVar1 != '\0') {
        FUN_00467e90(&local_d8,&local_90);
        local_e8 = 0;
        FUN_00a2c0c0(local_d8,0,(double)(int)local_30[0xb],(double)(int)local_30[0xb]);
        uVar3 = FUN_0040c770();
        *(undefined4 *)((longlong)local_30 + 0x54) = uVar3;
        FUN_00468530(param_2 + 4,uVar3,0xfffffffffffffffc);
      }
    }
  }
  FUN_00414480(&local_d8);
  FUN_00460ba0(&local_d0);
  FUN_00414480(&local_b8);
  FUN_00460ba0(&local_90);
  return local_30;
}

