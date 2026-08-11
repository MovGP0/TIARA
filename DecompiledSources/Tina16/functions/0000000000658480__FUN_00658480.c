/* Ghidra address: 00658480 */
/* Ghidra symbol: FUN_00658480 */


void FUN_00658480(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_38 [24];
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if (((cVar1 == '\0') || (param_1[0xf] == 0)) || ((*(uint *)(param_1 + 0x14) & 0x40000) == 0)) {
    if (((char)param_1[0x8f] == '\0') ||
       (*(longlong *)(param_2 + 8) == *(longlong *)(param_2 + 0x10))) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      uVar3 = FUN_005fdb10(param_1[0x66]);
      thunk_FUN_03984819(*(undefined8 *)(param_2 + 8),local_38,uVar3);
    }
  }
  else if (*(char *)(param_1[0xf] + 0x478) == '\0') {
    uVar3 = FUN_00781840();
    uVar4 = FUN_0065b870(param_1);
    FUN_00778e90(uVar3,uVar4,*(undefined8 *)(param_2 + 8),0,0,0);
  }
  else {
    FUN_006487e0(param_1,*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

