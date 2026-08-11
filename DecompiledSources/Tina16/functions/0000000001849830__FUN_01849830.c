/* Ghidra address: 01849830 */
/* Ghidra symbol: FUN_01849830 */


void FUN_01849830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  if (*(char *)(param_1 + 200) != '\0') {
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      if (*(longlong *)(param_1 + 0xe0) != 0) {
        FUN_00461840(param_1 + 0xf0,param_2);
        uVar3 = FUN_004634b0(param_1 + 0x90);
        FUN_00416ba0(&local_b0,*(undefined8 *)(param_1 + 0x58),L".SET");
        (**(code **)(param_1 + 0xe0))
                  (*(undefined8 *)(param_1 + 0xe8),&local_a8,uVar3,*(undefined8 *)(param_1 + 0xb8),
                   local_b0,param_1);
        FUN_0046f180(&local_c8);
        FUN_00461840(param_1 + 0xf0,&local_c8);
      }
    }
    else {
      local_50 = 0;
      local_4c = FUN_01847410(param_1);
      FUN_0046c750(&local_40,&local_50,1,0xc);
      iVar1 = FUN_01847410();
      iVar4 = 0;
      if (-1 < iVar1 + -1) {
        do {
          plVar2 = (longlong *)FUN_01847630(param_1,iVar4);
          (**(code **)(*plVar2 + 0x10))(plVar2,&local_68);
          local_70[0] = iVar4;
          FUN_0046ccc0(&local_40,&local_68,1,local_70);
          iVar4 = iVar4 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_70[0] = FUN_01847410(param_1);
      FUN_0046ccc0(&local_40,param_2,1,local_70);
      uVar3 = FUN_004634b0(param_1 + 0x90);
      FUN_00416ba0(&local_90,*(undefined8 *)(param_1 + 0x58),L".SET");
      (**(code **)(param_1 + 0xd0))
                (*(undefined8 *)(param_1 + 0xd8),&local_88,uVar3,*(undefined8 *)(param_1 + 0xb8),
                 local_90,&local_40);
      FUN_0046f180(&local_40);
    }
  }
  FUN_00460ba0(&local_c8);
  FUN_00414480(&local_b0);
  FUN_00460ba0(&local_a8);
  FUN_00414480(&local_90);
  FUN_00460ba0(&local_88);
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_40);
  return;
}

