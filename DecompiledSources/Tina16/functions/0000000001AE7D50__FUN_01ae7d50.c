/* Ghidra address: 01ae7d50 */
/* Ghidra symbol: FUN_01ae7d50 */


undefined8 *
FUN_01ae7d50(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  FUN_00414480(param_2);
  cVar1 = FUN_01ace420(param_1,param_3,param_4,&local_20);
  if (cVar1 != '\x02') {
    cVar1 = FUN_01ace420(param_1,param_3,param_4,&local_20);
    if (cVar1 != '\x03') {
      FUN_00414480(param_2);
      goto LAB_01ae8088;
    }
  }
  uVar2 = FUN_004aeac0(local_20,0);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01ab0e08);
  if (cVar1 == '\0') {
    uVar2 = FUN_004aeac0(local_20,0);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      uVar2 = FUN_004aeac0(local_20,0);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aaff18);
      if (cVar1 == '\0') {
        FUN_00414480(param_2);
      }
      else {
        uVar2 = FUN_004aeac0(local_20,0);
        FUN_01ab6de0(uVar2,&local_78);
        FUN_00416ad0(param_2,local_78);
      }
    }
    else {
      uVar2 = FUN_004aeac0(local_20,0);
      FUN_01ab2940(uVar2,local_50);
      iVar5 = 0;
      if (local_50[0] != 0) {
        iVar5 = *(int *)(local_50[0] + -4);
      }
      if (iVar5 < 1) {
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_60,0x824);
        FUN_00416ad0(param_2,local_60);
      }
      else {
        uVar2 = FUN_004aeac0(local_20,0);
        FUN_01ab2940(uVar2,&local_58);
        FUN_00416ad0(param_2,local_58);
      }
      lVar4 = FUN_004aeac0(local_20,0);
      FUN_01cc1600(*(undefined8 *)(lVar4 + 0xe0),&local_68);
      iVar5 = 0;
      if (local_68 != 0) {
        iVar5 = *(int *)(local_68 + -4);
      }
      if (0 < iVar5) {
        lVar4 = FUN_004aeac0(local_20,0);
        FUN_01cc1600(*(undefined8 *)(lVar4 + 0xe0),&local_70);
        FUN_00416cd0(param_2,3,*param_2,&DAT_01ae8124,local_70);
      }
    }
  }
  else {
    plVar3 = (longlong *)FUN_004aeac0(local_20,0);
    (**(code **)(*plVar3 + 0xf8))(plVar3,param_3,param_4,&local_28,&local_30);
    uVar2 = FUN_004aeac0(local_20,0);
    lVar4 = FUN_004113f0(uVar2,&PTR_FUN_01ab0e08);
    (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x10))
              (*(longlong **)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x98),1);
    *(undefined8 *)PTR_DAT_02005620 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)PTR_DAT_020041f8 = *(undefined8 *)(lVar4 + 0x80);
    local_30 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x50))
                         (*(longlong **)(lVar4 + 0x80),local_28);
    FUN_00b8fd60(&local_40,local_30,2,0,1);
    FUN_00414ad0(param_2,local_40);
  }
LAB_01ae8088:
  FUN_019b6930(param_2,&DAT_01ae8138,&LAB_01ae814c);
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,6);
  FUN_00414560(&local_40,2);
  return param_2;
}

