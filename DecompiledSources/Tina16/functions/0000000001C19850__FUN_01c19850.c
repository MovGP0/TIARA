/* Ghidra address: 01c19850 */
/* Ghidra symbol: FUN_01c19850 */


void FUN_01c19850(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_res20;
  undefined1 local_30 [12];
  int local_24;
  short *local_20;
  
  local_20 = (short *)0x0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar2 = FUN_0060f580(*param_3);
  uVar3 = FUN_0060f570(uVar2);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x363) == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
        if (cVar1 != '\0') goto LAB_01c198f0;
      }
      else {
LAB_01c198f0:
        if (param_1[100] != 0) {
          plVar4 = (longlong *)FUN_00781840();
          cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
          if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 0x366) != '\x02')) {
            lVar5 = 0;
          }
          else {
            lVar5 = 1;
          }
          (**(code **)(*plVar4 + 0x200))(plVar4,local_30,(&DAT_01fe48d8)[lVar5]);
          if (*(char *)((longlong)param_1 + 0x363) == '\0') {
            plVar4 = (longlong *)FUN_00781840();
            (**(code **)(*plVar4 + 0x200))(plVar4,local_30,4);
          }
          goto LAB_01c199f1;
        }
      }
      if ((char)param_1[0x6d] == '\0') {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 0x200))(plVar4,local_30,2);
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 0x200))(plVar4,local_30,3);
      }
      goto LAB_01c199f1;
    }
  }
  plVar4 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0x228))(param_1);
  (**(code **)(*plVar4 + 0x200))(plVar4,local_30,(&DAT_01fe48d6)[uVar6 & 0xff]);
LAB_01c199f1:
  uVar7 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar7,local_30,2,&local_24);
  if ((cVar1 == '\0') || (local_24 == 0x1fffffff)) {
    local_24 = *(int *)(*(longlong *)(param_1[0x62] + 0x70) + 0x28);
  }
  FUN_00414b50(&local_20,local_res20);
  if (((uVar3 & 2) != 0) &&
     ((local_20 == (short *)0x0 || ((*local_20 == 0x26 && (local_20[1] == 0)))))) {
    FUN_00416ad0(&local_20,&LAB_01c19b14);
  }
  uVar7 = FUN_00781840();
  uVar8 = FUN_005ffa40(param_1[0x62]);
  FUN_00778f70(uVar7,uVar8,local_30,local_20,param_2,uVar3,local_24,0);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res20);
  return;
}

