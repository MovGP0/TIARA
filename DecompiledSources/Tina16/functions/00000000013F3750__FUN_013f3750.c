/* Ghidra address: 013f3750 */
/* Ghidra symbol: FUN_013f3750 */


void FUN_013f3750(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar6;
  int local_84;
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
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26) + 9);
  lVar2 = *(longlong *)(param_1 + 0x728);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26);
  if (*(char *)(param_1 + 0x8e2) == '\0') {
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_48,0x404);
    FUN_004169a0(&local_50,param_1 + 0x7e0);
    in_stack_ffffffffffffff58 = local_50;
    FUN_00416cd0(&local_40,3,local_48,&DAT_013f3afc,local_50);
    FUN_0084e3e0(lVar2,0,0,local_40);
  }
  else {
    FUN_004154b0(&local_60,param_1 + 0x7e0,0);
    FUN_004156b0(&local_58,"Manufacturer: ",local_60);
    FUN_00416880(&local_68,local_58);
    FUN_0084e3e0(lVar2,0,0,local_68);
  }
  FUN_00848a70(lVar2,*(int *)(lVar2 + 0x4c0) + (uint)*(ushort *)(lVar3 + 0x21));
  uVar5 = (uint)*(ushort *)(lVar3 + 0x21);
  local_84 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
      cVar1 = *(char *)(*(longlong *)(lVar3 + 1) + (longlong)local_84);
      if (cVar1 == '\x01') {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                  (*(longlong **)(param_1 + 0x798),&local_70,local_84);
        uVar4 = FUN_00b08760(&PTR_FUN_0142b130,1,local_30,local_84);
        FUN_00b0ab70(lVar2,local_70,uVar4);
        FUN_00b909d0(&local_30,0x1f);
      }
      else if (cVar1 == '\x02') {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                  (*(longlong **)(param_1 + 0x798),&local_78,local_84);
        uVar4 = FUN_00b08760(&PTR_FUN_0142bbf0,1,local_30,local_84);
        FUN_00b0ab70(lVar2,local_78,uVar4);
        FUN_00b909d0(&local_30,2);
      }
      else if (cVar1 == '\x03') {
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x18))
                  (*(longlong **)(param_1 + 0x798),&local_80,local_84);
        in_stack_ffffffffffffff58 = CONCAT44(uVar6,local_84 + 1);
        FUN_01d082f0(*(undefined8 *)(param_1 + 0x750),&local_38,local_80,
                     *(int *)(param_1 + 0x760) + 1,in_stack_ffffffffffffff58);
        uVar4 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_30,local_84);
        FUN_00b0ab70(lVar2,local_38,uVar4);
        FUN_00b909d0(&local_30,8);
      }
      local_84 = local_84 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_00414560(&local_80,4);
  FUN_00414590(&local_60,2);
  FUN_00414560(&local_50,4);
  return;
}

