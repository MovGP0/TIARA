/* Ghidra address: 014a0ec0 */
/* Ghidra symbol: FUN_014a0ec0 */


void FUN_014a0ec0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(char *)(param_2 + 0x62) == '\0') {
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_2 + 0xb0));
  }
  else {
    FUN_01768520(local_30,*(undefined8 *)(param_2 + 0x48),0);
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_30[0]);
  }
  FUN_014a10e0(param_1,&local_20,param_2);
  uVar4 = FUN_01099960(*(undefined8 *)(param_1 + 0x778),local_20);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x740),uVar4);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x4e8);
  (**(code **)(*plVar1 + 0x10))(plVar1,plVar3);
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x740));
  }
  FUN_00410f20(plVar3);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

