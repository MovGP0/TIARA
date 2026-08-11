/* Ghidra address: 0082c280 */
/* Ghidra symbol: FUN_0082c280 */


void FUN_0082c280(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff40;
  undefined1 local_71;
  undefined8 local_70;
  undefined1 local_68 [20];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined1 local_44 [16];
  undefined8 local_34;
  undefined4 uStack_2c;
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_70 = 0;
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_008239c0);
  if (cVar2 == '\0') {
    FUN_00697190(param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),local_44);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if (cVar2 == '\0') {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 200))(plVar4,&local_34,5);
    }
    else if (*(char *)(param_1 + 0x41) == '\0') {
      if (param_3 == '\0') {
        if ((*(char *)(param_1 + 0x1a) == '\0') &&
           (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4a8) == '\0')) {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 200))(plVar4,&local_34,2);
        }
        else {
          plVar4 = (longlong *)FUN_00781840();
          (**(code **)(*plVar4 + 200))(plVar4,&local_34,6);
        }
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 200))(plVar4,&local_34,3);
      }
    }
    else {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 200))(plVar4,&local_34,4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xe0))(*(longlong **)(param_1 + 0x10),local_44);
    uVar5 = FUN_00781840();
    uVar6 = FUN_005ffa40(param_2);
    FUN_00778dc0(uVar5,uVar6,&local_34,local_44,0,(ulonglong)uVar3 << 0x20);
    local_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
    cVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    if (cVar2 == '\0') {
      local_71 = 1;
    }
    else if (*(char *)(param_1 + 0x41) == '\0') {
      local_71 = 0;
    }
    else {
      local_71 = 2;
    }
    FUN_005ff880(param_2,plVar4[0x17]);
    lVar1 = plVar4[0xa4];
    *(undefined1 *)(lVar1 + 0x2d) = 0;
    *(undefined8 *)(lVar1 + 0x30) = local_34;
    *(undefined4 *)(lVar1 + 0x38) = uStack_2c;
    *(undefined1 *)(lVar1 + 0x3c) = 1;
    *(bool *)(lVar1 + 0x50) = (*(byte *)(plVar4 + 0x59) & 1) != 0;
    FUN_0064dd90(plVar4,&local_70);
    uVar3 = FUN_006520b0(plVar4,0);
    FUN_00829020(lVar1,local_68,param_2,local_44,&local_4c,local_70,
                 *(undefined1 *)((longlong)plVar4 + 0x52a),(int)plVar4[0xa6],
                 *(undefined4 *)((longlong)plVar4 + 0x52c),local_71,0,
                 uVar3 | *(uint *)(&DAT_01e17984 +
                                  (ulonglong)*(byte *)((longlong)plVar4 + 0x491) * 4));
  }
  FUN_00414480(&local_70);
  return;
}

