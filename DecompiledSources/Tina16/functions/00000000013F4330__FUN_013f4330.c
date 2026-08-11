/* Ghidra address: 013f4330 */
/* Ghidra symbol: FUN_013f4330 */


void FUN_013f4330(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 in_stack_ffffffffffffff68;
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
  undefined8 local_28;
  undefined8 local_20 [2];
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0x8e3) == '\0') {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8))
    ;
    *(short *)(param_1 + 0x77e) = (short)uVar4;
    if (*(char *)(param_1 + 0x8e2) == '\0') {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x26);
      FUN_0172cc40(*(undefined8 *)(param_1 + 0x7c8),
                   CONCAT62((int6)(uVar4 >> 0x10),(short)uVar4 + *(short *)(param_1 + 0x780)) &
                   0xffffffff,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 1),
                   *(undefined8 *)(lVar1 + 9),param_1 + 0x7e0,CONCAT44(uVar3,0xff));
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_48,0x404);
      FUN_004169a0(&local_50,param_1 + 0x7e0);
      FUN_00416cd0(&local_40,3,local_48,&DAT_013f47ac,local_50);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x728),0,0,local_40);
    }
    else {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      (**(code **)(*plVar6 + 0x18))(plVar6,local_20,uVar4 & 0xffff);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6,*(undefined2 *)(param_1 + 0x77e));
      if (*plVar6 == 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x30);
        if (lVar1 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x90))(*(longlong **)(param_1 + 0x7b8));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x10))
                    (*(longlong **)(param_1 + 0x7b8),lVar1);
        }
      }
      else {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x7b8));
        uVar5 = FUN_016fedd0(*(undefined8 *)(param_1 + 0x940),local_20[0],plVar6,&local_28,&local_30
                             ,param_1 + 2000,&local_38);
        *(undefined8 *)(param_1 + 0x7b8) = uVar5;
      }
      FUN_00416910(param_1 + 0x7e0,local_38,0xff);
      if (*(longlong *)(param_1 + 0x7b8) != 0) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4d8);
        (**(code **)(*plVar6 + 0x10))(plVar6,*(longlong *)(param_1 + 0x7b8));
        FUN_013f3480(param_1);
      }
      FUN_004154b0(&local_60,param_1 + 0x7e0,0);
      FUN_004156b0(&local_58,"Manufacturer: ",local_60);
      FUN_00416880(&local_68,local_58);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x728),0,0,local_68);
    }
    FUN_00b0b140(*(undefined8 *)(param_1 + 0x728),1,2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8))
    ;
    FUN_0043f750(&local_78,iVar2 + 1);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4a0);
    uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
    FUN_0043f750(&local_80,uVar3);
    FUN_00416cd0(&local_70,3,local_78,&DAT_013f47dc,local_80);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_70);
  }
  FUN_00414560(&local_80,4);
  FUN_00414590(&local_60,2);
  FUN_00414560(&local_50,7);
  return;
}

