/* Ghidra address: 018c0a60 */
/* Ghidra symbol: FUN_018c0a60 */


undefined1 FUN_018c0a60(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  undefined1 *local_60;
  char local_51;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_31;
  longlong *local_30;
  
  local_60 = auStack_98;
  local_31 = 1;
  local_30 = (longlong *)FUN_01956000(&PTR_FUN_01920e40,1);
  (**(code **)(*local_30 + 0x10))(local_30,param_2);
  bVar1 = *(byte *)(local_30 + 1);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      if (local_30[6] != 0) {
        uVar4 = FUN_0043fc00(local_30[6]);
        FUN_018a9020(*(undefined8 *)(param_1[4] + 0x210),uVar4);
      }
    }
    else if (bVar1 == 0) {
      if (local_30[6] != 0) {
        uVar5 = thunk_FUN_0417695f();
        uVar6 = FUN_00416740(local_30[6]);
        local_78 = 0;
        local_70 = CONCAT44(local_70._4_4_,1);
        thunk_FUN_0419adcc(uVar5,0,uVar6,0);
      }
    }
    else if ((bVar1 == 1) && (local_30[6] != 0)) {
      FUN_018c0950(auStack_98,local_30[6]);
    }
  }
  else if (bVar1 == 3) {
    cVar3 = (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x2f8))
                      (*(longlong **)(param_1[4] + 0x210),local_30[6]);
    if (cVar3 == '\0') {
      cVar3 = FUN_019561e0(local_30);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x88))(param_1);
        local_40 = FUN_0196e3c0(&PTR_FUN_0193aeb8,1,0);
        (**(code **)(**(longlong **)(local_40 + 0x220) + 0x10))
                  (*(longlong **)(local_40 + 0x220),*(undefined8 *)(param_1[4] + 0x220));
        (**(code **)(**(longlong **)(local_40 + 0x1a8) + 0x10))
                  (*(longlong **)(local_40 + 0x1a8),*(undefined8 *)(param_1[4] + 0x1a8));
        plVar7 = (longlong *)FUN_0196f520(local_40);
        uVar5 = FUN_0196f520(param_1[4]);
        (**(code **)(*plVar7 + 0x10))(plVar7,uVar5);
        local_51 = '\0';
        lVar2 = param_1[4];
        if (*(longlong *)(lVar2 + 0x388) != 0) {
          *(undefined8 *)(local_40 + 0x388) = *(undefined8 *)(lVar2 + 0x388);
          *(undefined8 *)(local_40 + 0x390) = *(undefined8 *)(lVar2 + 0x390);
        }
        lVar2 = param_1[4];
        if (*(longlong *)(lVar2 + 0x398) != 0) {
          local_51 = (**(code **)(lVar2 + 0x398))
                               (*(undefined8 *)(lVar2 + 0x3a0),local_40,local_30[2],local_30);
        }
        if (local_51 == '\0') {
          local_51 = FUN_01972b60(local_40,local_30[2],0);
        }
        if (local_51 != '\0') {
          FUN_01955cf0(local_30,local_40);
          FUN_01976270(local_40,1);
          local_78 = CONCAT71(local_78._1_7_,1);
          local_70 = 0;
          (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x2e0))
                    (*(longlong **)(param_1[4] + 0x210),local_40,local_30[6],local_30[8]);
          param_1[0x16] = 0;
          param_1[0x17] = 0;
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x318))
                (*(longlong **)(param_1[4] + 0x210),local_30[6]);
    }
  }
  else if (bVar1 == 4) {
    cVar3 = (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x2f8))
                      (*(longlong **)(param_1[4] + 0x210),local_30[6]);
    if (cVar3 == '\0') {
      cVar3 = FUN_019561e0(local_30);
      if (cVar3 == '\0') {
        uVar5 = (**(code **)(*(longlong *)param_1[4] + 0x1e8))((longlong *)param_1[4],local_30[3]);
        local_48 = FUN_004113f0(uVar5,&PTR_FUN_019342a8);
        if (local_48 != 0) {
          FUN_01955cf0(local_30,param_1[4]);
          (**(code **)(*param_1 + 0x88))(param_1);
          FUN_01977630(param_1[4],0);
          FUN_01980390(*(undefined8 *)(param_1[4] + 0x208));
          local_50 = *(longlong **)(param_1[4] + 0x210);
          (**(code **)(*local_50 + 0x298))(local_50);
          local_78 = local_78 & 0xffffffffffffff00;
          local_70 = local_30[3];
          (**(code **)(*local_50 + 0x2e0))(local_50,param_1[4],local_30[6],local_30[8]);
          FUN_01977d90(param_1[4],local_48);
          (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x2a0))
                    (*(longlong **)(param_1[4] + 0x210),1);
        }
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1[4] + 0x210) + 0x318))
                (*(longlong **)(param_1[4] + 0x210),local_30[6]);
    }
  }
  FUN_00410f20(local_30);
  return local_31;
}

