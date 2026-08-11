/* Ghidra address: 013efd90 */
/* Ghidra symbol: FUN_013efd90 */


void FUN_013efd90(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26) + 9);
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x26);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_48,0x404);
  FUN_004169a0(&local_50,param_1 + 0x750);
  uVar4 = local_50;
  FUN_00416cd0(&local_40,3,local_48,&LAB_013f0058,local_50);
  FUN_0084e3e0(lVar2,0,0,local_40);
  FUN_00848a70(lVar2,*(int *)(lVar2 + 0x4c0) + (uint)*(ushort *)(lVar3 + 0x21));
  uVar6 = (uint)*(ushort *)(lVar3 + 0x21);
  local_6c = 0;
  if (-1 < (int)(uVar6 - 1)) {
    do {
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
      cVar1 = *(char *)(*(longlong *)(lVar3 + 1) + (longlong)local_6c);
      if (cVar1 == '\x01') {
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
                  (*(longlong **)(param_1 + 0x730),&local_58,local_6c);
        uVar5 = FUN_00b08760(&PTR_FUN_0142b130,1,local_30,local_6c);
        FUN_00b0ab70(lVar2,local_58,uVar5);
        FUN_00b909d0(&local_30,0x1f);
      }
      else if (cVar1 == '\x02') {
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
                  (*(longlong **)(param_1 + 0x730),&local_60,local_6c);
        uVar5 = FUN_00b08760(&PTR_FUN_0142bbf0,1,local_30,local_6c);
        FUN_00b0ab70(lVar2,local_60,uVar5);
        FUN_00b909d0(&local_30,2);
      }
      else if (cVar1 == '\x03') {
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0x18))
                  (*(longlong **)(param_1 + 0x730),&local_68,local_6c);
        uVar4 = CONCAT44(uVar7,local_6c + 1);
        FUN_01d082f0(*(undefined8 *)(param_1 + 0x708),&local_38,local_68,
                     *(int *)(param_1 + 0x718) + 1,uVar4);
        uVar5 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_30,local_6c);
        FUN_00b0ab70(lVar2,local_38,uVar5);
        FUN_00b909d0(&local_30,8);
      }
      local_6c = local_6c + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_00414560(&local_68,7);
  return;
}

