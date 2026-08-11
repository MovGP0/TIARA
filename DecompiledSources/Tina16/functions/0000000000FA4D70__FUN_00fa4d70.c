/* Ghidra address: 00fa4d70 */
/* Ghidra symbol: FUN_00fa4d70 */


void FUN_00fa4d70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (cVar2 == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x770),1);
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))
              (*(longlong **)(param_1 + 0x760),*(undefined4 *)(param_1 + 0xba8));
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x128))(*(longlong **)(param_1 + 0x760),1);
    *(undefined1 *)(param_1 + 0x890) = 1;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x898 + (longlong)iVar3 * 8);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))(*(longlong **)(param_1 + 0x760),8);
    *(undefined1 *)(param_1 + 0x890) = 0;
    *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x860);
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x128))(*(longlong **)(param_1 + 0x760),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x770),0);
  }
  plVar1 = *(longlong **)(param_1 + 0x760);
  uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_38,uVar4);
  FUN_0064de00(plVar1,local_38);
  FUN_00414480(&local_20);
  local_28 = *(undefined8 *)(param_1 + 0x858);
  FUN_00448450(&local_20,local_28,PTR_DAT_02004830);
  FUN_00416ba0(&local_40,local_20,&LAB_00fa4fe8);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_40);
  FUN_00414480(&local_20);
  if (*(char *)(param_1 + 0x874) == '\0') {
    FUN_00fa3f80(param_1,param_2);
  }
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_20);
  return;
}

