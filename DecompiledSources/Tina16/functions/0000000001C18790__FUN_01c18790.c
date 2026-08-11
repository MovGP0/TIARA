/* Ghidra address: 01c18790 */
/* Ghidra symbol: FUN_01c18790 */


void FUN_01c18790(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined4 local_2c;
  
  local_40 = auStack_88;
  uVar2 = FUN_00781840();
  cVar1 = FUN_00779360(uVar2);
  if ((cVar1 == '\0') && (*(char *)(param_1[100] + 0x94) != '\0')) {
    return;
  }
  uVar2 = FUN_005ffa40(param_1[0x62]);
  local_2c = thunk_FUN_03b57162(uVar2);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    if (cVar1 == '\0') {
      if (((*(char *)((longlong)param_1 + 0x363) == '\0') &&
          (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) || (param_1[100] == 0))
      {
        uVar2 = FUN_00781840();
        uVar4 = FUN_005ffa40(param_1[0x62]);
        plVar3 = (longlong *)FUN_00781840();
        (**(code **)(*plVar3 + 0x200))(plVar3,local_50,2);
        local_68 = 0;
        local_60 = 0;
        FUN_00778dc0(uVar2,uVar4,local_50,param_2);
      }
      else {
        uVar2 = FUN_00781840();
        uVar4 = FUN_005ffa40(param_1[0x62]);
        plVar3 = (longlong *)FUN_00781840();
        cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
        if ((cVar1 == '\0') && (*(char *)((longlong)param_1 + 0x366) != '\x02')) {
          lVar5 = 0;
        }
        else {
          lVar5 = 1;
        }
        (**(code **)(*plVar3 + 0x200))(plVar3,local_50,(&DAT_01fe48cc)[lVar5]);
        local_68 = 0;
        local_60 = 0;
        FUN_00778dc0(uVar2,uVar4,local_50,param_2);
        if (*(char *)((longlong)param_1 + 0x363) == '\0') {
          uVar2 = FUN_00781840();
          uVar4 = FUN_005ffa40(param_1[0x62]);
          plVar3 = (longlong *)FUN_00781840();
          (**(code **)(*plVar3 + 0x200))(plVar3,local_50,4);
          local_68 = 0;
          local_60 = 0;
          FUN_00778dc0(uVar2,uVar4,local_50,param_2);
        }
      }
      goto code_r0x01c18a76;
    }
  }
  uVar2 = FUN_00781840();
  uVar4 = FUN_005ffa40(param_1[0x62]);
  plVar3 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0x228))(param_1);
  (**(code **)(*plVar3 + 0x200))(plVar3,local_50,(&DAT_01fe48ca)[uVar6 & 0xff]);
  local_68 = 0;
  local_60 = 0;
  FUN_00778dc0(uVar2,uVar4,local_50,param_2);
code_r0x01c18a76:
  uVar2 = FUN_005ffa40(param_1[0x62]);
  thunk_FUN_0402759f(uVar2,local_2c);
  return;
}

