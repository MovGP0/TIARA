/* Ghidra address: 01849450 */
/* Ghidra symbol: FUN_01849450 */


undefined8 FUN_01849450(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      FUN_00468530(param_2,0,1);
    }
    else {
      uVar4 = 0;
      cVar1 = FUN_0046c3d0(param_1 + 0x90);
      if (cVar1 == '\0') {
        uVar4 = FUN_004634b0(param_1 + 0x90);
      }
      if (*(char *)(param_1 + 200) == '\0') {
        (**(code **)(param_1 + 0xe0))
                  (*(undefined8 *)(param_1 + 0xe8),param_2,uVar4,*(undefined8 *)(param_1 + 0xb8),
                   *(undefined8 *)(param_1 + 0x58),param_1);
      }
      else {
        FUN_00416ba0(&local_88,*(undefined8 *)(param_1 + 0x58),L".GET");
        (**(code **)(param_1 + 0xe0))
                  (*(undefined8 *)(param_1 + 0xe8),param_2,uVar4,*(undefined8 *)(param_1 + 0xb8),
                   local_88,param_1);
      }
    }
  }
  else {
    iVar2 = FUN_01847410();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)FUN_01847630(param_1,iVar6);
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_40);
        local_48[0] = iVar6;
        FUN_0046ccc0(param_1 + 0x110,&local_40,1,local_48);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = 0;
    cVar1 = FUN_0046c3d0(param_1 + 0x90);
    if (cVar1 == '\0') {
      uVar4 = FUN_004634b0(param_1 + 0x90);
    }
    if (*(char *)(param_1 + 200) == '\0') {
      (**(code **)(param_1 + 0xd0))
                (*(undefined8 *)(param_1 + 0xd8),param_2,uVar4,*(undefined8 *)(param_1 + 0xb8),
                 *(undefined8 *)(param_1 + 0x58),param_1 + 0x110);
    }
    else {
      FUN_00416ba0(&local_50,*(undefined8 *)(param_1 + 0x58),L".GET");
      (**(code **)(param_1 + 0xd0))
                (*(undefined8 *)(param_1 + 0xd8),param_2,uVar4,*(undefined8 *)(param_1 + 0xb8),
                 local_50,param_1 + 0x110);
    }
    iVar2 = FUN_01847410();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar5 = FUN_01847630(param_1,iVar6);
        if (*(char *)(lVar5 + 0xa1) != '\0') {
          plVar3 = (longlong *)FUN_01847630(param_1,iVar6);
          local_48[0] = iVar6;
          FUN_0046cb70(&local_68,param_1 + 0x110,1,local_48);
          (**(code **)(*plVar3 + 8))(plVar3,&local_68);
        }
        FUN_0046f180(&local_80);
        local_48[0] = iVar6;
        FUN_0046ccc0(param_1 + 0x110,&local_80,1,local_48);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(&local_88);
  FUN_00417840(&local_80,&DAT_004013d8,2);
  FUN_00414480(&local_50);
  FUN_00460ba0(&local_40);
  return param_2;
}

