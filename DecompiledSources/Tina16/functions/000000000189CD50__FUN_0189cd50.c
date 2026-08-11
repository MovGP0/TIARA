/* Ghidra address: 0189cd50 */
/* Ghidra symbol: FUN_0189cd50 */


void FUN_0189cd50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [5];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  if (*(char *)(param_1 + 0x7e1) == '\0') {
    *(undefined1 *)(param_1 + 0x7e1) = 1;
    uVar3 = FUN_0188d920();
    plVar4 = (longlong *)FUN_0188d190(uVar3);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),local_40);
    iVar2 = FUN_0188b960(plVar4,local_40[0]);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_48);
    uVar3 = FUN_0180d800(local_48);
    uVar3 = FUN_0189bc30(param_1,uVar3);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_50);
    uVar5 = FUN_0180d800(local_50);
    uVar5 = FUN_0189bc30(param_1,uVar5);
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    if (iVar2 == 0x100) {
      (**(code **)(*plVar4 + 0x50))(plVar4,0x100,uVar5,uVar3,cVar1 == '\0');
    }
    else {
      (**(code **)(*plVar4 + 0x50))(plVar4,iVar2,uVar3,uVar5,cVar1 == '\0');
    }
    uVar3 = FUN_0189bbd0(param_1,plVar4[0x10]);
    FUN_0180d940(&local_58,uVar3);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_58);
    uVar3 = FUN_0189bbd0(param_1,plVar4[0xf]);
    FUN_0180d940(&local_60,uVar3);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_60);
    *(undefined1 *)(param_1 + 0x7e1) = 0;
  }
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_50,3);
  return;
}

