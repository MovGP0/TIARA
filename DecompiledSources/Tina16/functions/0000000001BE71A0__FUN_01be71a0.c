/* Ghidra address: 01be71a0 */
/* Ghidra symbol: FUN_01be71a0 */


void FUN_01be71a0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  FUN_01c00850(param_1);
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if (cVar1 == '\0') {
      uVar3 = FUN_00781840();
      uVar4 = FUN_005ffa40(param_1[0x96]);
      plVar2 = (longlong *)FUN_00781840();
      (**(code **)(*plVar2 + 0x158))(plVar2,local_38,0x12);
      FUN_004238d0(local_48,0,0,(int)param_1[0x13],
                   CONCAT44(uVar6,*(undefined4 *)((longlong)param_1 + 0x9c)));
      FUN_00778dc0(uVar3,uVar4,local_38,local_48,0,0);
      return;
    }
  }
  lVar5 = FUN_01c03e40(param_1);
  FUN_005fdab0(*(undefined8 *)(param_1[0x96] + 0x80),*(undefined4 *)(lVar5 + 0xc0));
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  (**(code **)(*(longlong *)param_1[0x96] + 0xa8))((longlong *)param_1[0x96],local_48);
  return;
}

