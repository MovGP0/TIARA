/* Ghidra address: 01c1a830 */
/* Ghidra symbol: FUN_01c1a830 */


void FUN_01c1a830(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_30 [12];
  int local_24;
  short *local_20;
  
  local_20 = (short *)0x0;
  uVar2 = FUN_0060f580(param_5);
  uVar3 = FUN_0060f570(uVar2);
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 0x158))(plVar4,local_30,0x1d);
      goto LAB_01c1a8fd;
    }
  }
  plVar4 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    plVar5 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    if (cVar1 != '\0') goto LAB_01c1a8db;
    lVar7 = 0;
  }
  else {
LAB_01c1a8db:
    lVar7 = 1;
  }
  (**(code **)(*plVar4 + 0x158))(plVar4,local_30,(&DAT_01fe48de)[lVar7]);
LAB_01c1a8fd:
  uVar6 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar6,local_30,2,&local_24);
  if ((cVar1 == '\0') || (local_24 == 0x1fffffff)) {
    uVar6 = FUN_01c07120(param_1);
    lVar7 = FUN_01c03e40(uVar6);
    local_24 = *(int *)(lVar7 + 0x9c);
  }
  FUN_00414b50(&local_20,param_3);
  if (((uVar3 & 2) != 0) &&
     ((local_20 == (short *)0x0 || ((*local_20 == 0x26 && (local_20[1] == 0)))))) {
    FUN_00416ad0(&local_20,&LAB_01c1a9f4);
  }
  uVar6 = FUN_00781840();
  FUN_00778f70(uVar6,param_2,local_30,local_20,param_4,uVar3,local_24,0);
  FUN_00414480(&local_20);
  return;
}

