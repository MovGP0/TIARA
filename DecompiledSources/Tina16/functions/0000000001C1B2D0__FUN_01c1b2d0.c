/* Ghidra address: 01c1b2d0 */
/* Ghidra symbol: FUN_01c1b2d0 */


void FUN_01c1b2d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_38 [16];
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x363) == '\0')) {
    uVar2 = FUN_00781840();
    uVar3 = FUN_005ffa40(param_1[0x62]);
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x200))(plVar4,local_38,2);
    FUN_00778dc0(uVar2,uVar3,local_38,param_2,0,0);
  }
  else {
    uVar2 = FUN_00781840();
    uVar3 = FUN_005ffa40(param_1[0x62]);
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x200))
              (plVar4,local_38,(&DAT_01fe48e4)[*(char *)((longlong)param_1 + 0x366) == '\x02']);
    FUN_00778dc0(uVar2,uVar3,local_38,param_2,0,0);
  }
  return;
}

