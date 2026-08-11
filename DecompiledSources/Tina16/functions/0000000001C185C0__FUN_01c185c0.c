/* Ghidra address: 01c185c0 */
/* Ghidra symbol: FUN_01c185c0 */


void FUN_01c185c0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    if ((((*(char *)((longlong)param_1 + 0x366) != '\x02') &&
         (*(char *)((longlong)param_1 + 0x365) != '\0')) &&
        (*(char *)((longlong)param_1 + 0x363) == '\0')) &&
       (cVar1 = (**(code **)(*param_1 + 0x228))(param_1), cVar1 == '\0')) {
      return;
    }
    uVar2 = FUN_00781840();
    uVar3 = FUN_005ffa40(param_1[0x62]);
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x158))(plVar4,local_48,0x1d);
    FUN_00778dc0(uVar2,uVar3,local_48,&local_38,0,0);
  }
  return;
}

