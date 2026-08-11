/* Ghidra address: 00c3f870 */
/* Ghidra symbol: FUN_00c3f870 */


void FUN_00c3f870(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [2];
  short local_66;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_4c [48];
  int local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_80 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_60 = 0;
  FUN_00417580(local_4c,&DAT_01d2e6d8);
  FUN_00414480(param_1 + 0x20);
  if (param_2 != 0) {
    local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_70,1);
    FUN_00441920(&local_88,param_2);
    FUN_004414c0(&local_60,local_88,0);
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x20);
    local_a8 = 0;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
    if ((local_10 != 0) && (iVar3 = FUN_01d31a40(local_10), iVar3 == 0)) {
      FUN_01d317c0(local_10,local_4c);
      cVar2 = FUN_00c3f780(auStack_c8,local_4c);
      if (cVar2 != '\0') {
        if (0 < local_1c) {
          FUN_01d30e90(local_10,local_68);
          if (local_66 != 0) {
            FUN_01d30f00(local_10,param_1 + 0x18,1);
          }
        }
LAB_00c3fa7d:
        do {
          cVar2 = FUN_01d31040(local_10,0x301);
          if (cVar2 == '\0') break;
          local_58 = FUN_01d331a0(&LAB_00c3a6d0,1,local_10);
          FUN_0043e130(&local_90,local_60);
          FUN_00414ad0(local_58 + 0x20,local_90);
          FUN_004ae7e0(param_1,local_58);
          if (0 < *(int *)(*(longlong *)(local_58 + 0x38) + 0x10)) {
            lVar4 = FUN_004aeac0(*(longlong *)(local_58 + 0x38),0);
            uVar1 = *(undefined8 *)(lVar4 + 0x14);
            local_78._2_2_ = (short)((ulonglong)uVar1 >> 0x10);
            local_78._6_2_ = (short)((ulonglong)uVar1 >> 0x30);
            local_78 = uVar1;
            if (local_78._2_2_ != local_78._6_2_) {
              local_78._0_2_ = (short)uVar1;
              local_78._4_2_ = (short)((ulonglong)uVar1 >> 0x20);
              bVar5 = (short)local_78 != local_78._4_2_;
              if (bVar5) goto LAB_00c3fa7d;
            }
            (**(code **)(*local_70 + 0x78))(local_70,*(undefined8 *)(local_58 + 0x10));
          }
        } while( true );
      }
      FUN_01d31a40(local_10);
      FUN_00414ad0(param_1 + 0x20,param_2);
    }
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
    FUN_00410f20(local_70);
  }
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_60);
  FUN_00417740(local_4c,&DAT_01d2e6d8);
  return;
}

