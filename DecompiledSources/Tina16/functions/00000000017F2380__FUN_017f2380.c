/* Ghidra address: 017f2380 */
/* Ghidra symbol: FUN_017f2380 */


void FUN_017f2380(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_3d8 [40];
  longlong local_3b0;
  undefined1 local_3a8 [260];
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined1 local_276 [41];
  undefined1 local_24d [41];
  undefined1 local_224 [41];
  undefined1 local_1fb [43];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [8];
  undefined4 local_1c0;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined4 uStack_38;
  int local_34;
  longlong local_30 [2];
  
  local_30[0] = 0;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x868) + 0x4e8);
  local_3b0 = param_1;
  (**(code **)(*plVar5 + 0x90))(plVar5);
  FUN_010cd100(&local_2a0);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*param_2 + 0x18))(param_2,local_30,0);
  local_34 = 0;
LAB_017f2783:
  do {
    iVar4 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar4 + -1 < local_34) {
LAB_017f27a6:
      lVar1 = *(longlong *)(local_3b0 + 0xb48);
      *(ulonglong *)(lVar1 + 0x628) =
           CONCAT44(uStack_38,CONCAT13(uStack_39,CONCAT12(uStack_3a,CONCAT11(uStack_3b,local_3c))));
      *(undefined8 *)(lVar1 + 0x630) = local_60;
      *(ulonglong *)(lVar1 + 0x638) = CONCAT44(uStack_54,local_58);
      *(undefined8 *)(lVar1 + 0x640) = local_50;
      *(ulonglong *)(lVar1 + 0x648) = CONCAT44(uStack_44,local_48);
      puVar7 = &local_2a0;
      puVar8 = (undefined8 *)(lVar1 + 0x650);
      for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      plVar2 = *(longlong **)(*(longlong *)(local_3b0 + 0x868) + 0x4e8);
      (**(code **)(*plVar2 + 0x88))(plVar2,plVar5);
      FUN_00410f20(plVar5);
      FUN_00414480(local_30);
      return;
    }
    cVar3 = FUN_017f2120(local_30[0]);
    if (cVar3 == '\0') {
      (**(code **)(*plVar5 + 0x78))(plVar5,local_30[0]);
    }
    else {
      FUN_017f21b0(local_30);
      FUN_017f2230(auStack_3d8);
      FUN_017f20b0(local_30);
      if (local_30[0] == 0) {
        local_34 = local_34 + 1;
        goto LAB_017f2783;
      }
      FUN_017f2230(auStack_3d8);
      FUN_017f2230(auStack_3d8);
      cVar3 = FUN_010cb790(local_30[0],&local_2a4);
      local_3c = (undefined1)local_2a4;
      if (cVar3 != '\0') goto LAB_017f27a6;
      FUN_017f2230(auStack_3d8);
      FUN_010cb790(local_30[0],&local_2a4);
      uStack_3b = (undefined1)local_2a4;
      FUN_017f2230(auStack_3d8);
      cVar3 = FUN_010cb790(local_30[0],&local_2a4);
      uStack_3a = (undefined1)local_2a4;
      if (cVar3 != '\0') goto LAB_017f27a6;
      FUN_017f2230(auStack_3d8);
      cVar3 = FUN_010cb790(local_30[0],&local_2a4);
      uStack_39 = (undefined1)local_2a4;
      if (cVar3 != '\0') goto LAB_017f27a6;
      FUN_017f2230(auStack_3d8);
      cVar3 = FUN_010cb790(local_30[0],&local_2a4);
      uStack_38 = local_2a4;
      if (cVar3 != '\0') goto LAB_017f27a6;
      FUN_017f2230(auStack_3d8);
      FUN_017f2230(auStack_3d8);
      FUN_010cb800(local_30[0],&local_60);
      FUN_017f2230(auStack_3d8);
      FUN_010cb790(local_30[0],&local_2a4);
      local_58 = local_2a4;
      FUN_017f2230(auStack_3d8);
      FUN_010cb800(local_30[0],&local_50);
      FUN_017f2230(auStack_3d8);
      FUN_010cb790(local_30[0],&local_2a4);
      local_48 = local_2a4;
      FUN_017f2230(auStack_3d8);
      FUN_017f2230(auStack_3d8);
      cVar3 = FUN_010cb790(local_30[0],&local_2a4);
      local_2a0._0_1_ = (undefined1)local_2a4;
      if (cVar3 != '\0') goto LAB_017f27a6;
      FUN_017f2230(auStack_3d8);
      FUN_00416910(local_3a8,local_30[0],0xff);
      FUN_00415020((longlong)&local_2a0 + 1,local_3a8,0x28);
      FUN_017f2230(auStack_3d8);
      FUN_00416910(local_3a8,local_30[0],0xff);
      FUN_00415020(local_276,local_3a8,0x28);
      FUN_017f2230(auStack_3d8);
      FUN_00416910(local_3a8,local_30[0],0xff);
      FUN_00415020(local_24d,local_3a8,0x28);
      FUN_017f2230(auStack_3d8);
      FUN_00416910(local_3a8,local_30[0],0xff);
      FUN_00415020(local_224,local_3a8,0x28);
      FUN_017f2230(auStack_3d8);
      FUN_00416910(local_3a8,local_30[0],0xff);
      FUN_00415020(local_1fb,local_3a8,0x28);
      FUN_017f2230(auStack_3d8);
      FUN_010cb800(local_30[0],local_1d0);
      FUN_017f2230(auStack_3d8);
      FUN_010cb800(local_30[0],local_1c8);
      FUN_017f2230(auStack_3d8);
      FUN_010cb790(local_30[0],&local_2a4);
      local_1c0 = local_2a4;
      FUN_017f2230(auStack_3d8);
    }
    FUN_017f22d0(auStack_3d8);
  } while( true );
}

