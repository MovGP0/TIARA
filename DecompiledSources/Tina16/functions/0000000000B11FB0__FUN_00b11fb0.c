/* Ghidra address: 00b11fb0 */
/* Ghidra symbol: FUN_00b11fb0 */


int FUN_00b11fb0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_1c = *(int *)((longlong)param_1 + 0x4ac);
  plVar3 = (longlong *)FUN_00b11070(param_1);
  iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (local_1c <= iVar2) {
    cVar1 = FUN_00b10a60(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2e0))(param_1,0,local_1c,param_2);
      (**(code **)(*param_1 + 0x2e0))(param_1,1,local_1c,param_3);
      goto code_r0x00b120fe;
    }
  }
  uVar4 = FUN_00b11070(param_1);
  FUN_004b3260(uVar4);
  if (param_4 == '\0') {
    plVar3 = (longlong *)FUN_00b11070(param_1);
    FUN_00b10a00(&local_40,param_2,param_3);
    (**(code **)(*plVar3 + 200))(plVar3,local_1c - (int)param_1[0x98],local_40);
  }
  else {
    plVar3 = (longlong *)FUN_00b11070(param_1);
    FUN_00b10a00(&local_38,param_2,param_3);
    local_1c = (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
    local_1c = local_1c + (int)param_1[0x98];
  }
  uVar4 = FUN_00b11070(param_1);
  FUN_004b3390(uVar4);
code_r0x00b120fe:
  FUN_00414560(&local_40,2);
  return local_1c;
}

