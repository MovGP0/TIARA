/* Ghidra address: 00a3af00 */
/* Ghidra symbol: FUN_00a3af00 */


void FUN_00a3af00(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined **local_40;
  longlong *local_38;
  uint local_30;
  int local_2c;
  char local_25;
  undefined1 local_24 [8];
  uint local_1c;
  
  local_50 = auStack_c8;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_1c = 0;
  FUN_00a39570(param_1);
  (**(code **)(*param_2 + 0x18))(param_2,local_24,8);
  iVar3 = FUN_00414f50(local_24,&DAT_01e71808,8);
  if (iVar3 == 0) {
    local_25 = '\0';
    FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),10);
    do {
      local_1c = local_1c + 1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x160) + 0x10);
      if (uVar1 < local_1c) {
        FUN_00a339b0(*(longlong *)(param_1 + 0x160),uVar1 + 10);
      }
      iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&local_2c,4);
      if (iVar3 == 0) {
        FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),local_1c - 1);
        FUN_0041ddd0(&local_60,PTR_PTR_02005c28);
        FUN_00a39bd0(param_1,&PTR_FUN_00a2d030,local_60);
      }
      local_2c = FUN_00a32f80(local_2c);
      (**(code **)(*param_2 + 0x18))(param_2,&local_30,4);
      if (local_1c == 1) {
        FUN_00416800(&local_68,&local_30,4);
        iVar3 = FUN_00416db0(local_68,L"IHDR");
        if (iVar3 != 0) {
          FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),local_1c - 1);
          FUN_0041ddd0(&local_70,PTR_PTR_02004e80);
          FUN_00a39bd0(param_1,&PTR_FUN_00a2d8f0,local_70);
          goto LAB_00a3b3ce;
        }
      }
      if (local_25 == '\0') {
LAB_00a3b18b:
        FUN_00416800(&local_80,&local_30,4);
        iVar3 = FUN_00416db0(local_80,L"cHRM");
        if (iVar3 == 0) goto LAB_00a3b1b5;
        FUN_00416800(&local_88,&local_30,4);
        iVar3 = FUN_00416db0(local_88,L"IDAT");
        if (iVar3 == 0) {
          local_25 = '\x01';
        }
        iVar3 = local_1c - 1;
        uVar4 = FUN_00a33180(param_1,local_30);
        FUN_00a33990(*(undefined8 *)(param_1 + 0x160),iVar3,uVar4);
        local_38 = (longlong *)FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),iVar3);
        local_40 = (undefined **)*local_38;
        if (((local_40 == &PTR_FUN_00a302d8) && ((local_30 & 0x20) == 0)) &&
           (FUN_00416800(&local_90,&local_30,4), local_90 != 0)) {
          FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),local_1c);
          FUN_0041ddd0(&local_98,PTR_PTR_02002c48);
          FUN_00a39bd0(param_1,&PTR_FUN_00a2db68,local_98);
        }
        plVar5 = (longlong *)FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),local_1c - 1);
        cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2,local_30,local_2c);
        if (cVar2 == '\0') break;
      }
      else {
        FUN_00416800(&local_78,&local_30,4);
        iVar3 = FUN_00416db0(local_78,L"IDAT");
        if (iVar3 != 0) goto LAB_00a3b18b;
LAB_00a3b1b5:
        local_1c = local_1c - 1;
        (**(code **)(*param_2 + 0x50))(param_2,local_2c + 4,1);
      }
      FUN_00416800(&local_a0,&local_30,4);
      iVar3 = FUN_00416db0(local_a0,L"IEND");
    } while (iVar3 != 0);
    FUN_00a339b0(*(undefined8 *)(param_1 + 0x160),local_1c);
    if (local_25 == '\0') {
      FUN_0041ddd0(&local_a8,PTR_PTR_020032c8);
      FUN_00a39bd0(param_1,&PTR_FUN_00a2e090,local_a8);
    }
  }
  else {
    FUN_0041ddd0(&local_58,PTR_PTR_02004210);
    FUN_00a39bd0(param_1,&PTR_FUN_00a2d7a8,local_58);
  }
LAB_00a3b3ce:
  FUN_00414560(&local_a8,0xb);
  return;
}

