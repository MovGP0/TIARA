/* Ghidra address: 01ca0a20 */
/* Ghidra symbol: FUN_01ca0a20 */


void FUN_01ca0a20(undefined8 param_1,longlong param_2,undefined4 param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar4 = *(longlong **)(param_2 + 0x490);
  if (param_5 == '\0') {
    FUN_005fdab0(plVar4[0x10],0xff00000f);
  }
  else {
    FUN_005fdab0(plVar4[0x10],&DAT_00f0fbff);
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4,param_4);
  FUN_005fc860(plVar4[0xe],0);
  plVar7 = (longlong *)FUN_006d6380(param_2);
  (**(code **)(*plVar7 + 0x18))(plVar7,local_30,param_3);
  iVar1 = *param_4;
  iVar5 = FUN_005fdff0(plVar4,local_30[0]);
  iVar2 = param_4[2];
  iVar3 = param_4[1];
  iVar6 = FUN_005fdfd0(plVar4,local_30[0]);
  (**(code **)(*plVar4 + 0x120))
            (plVar4,iVar1 + ((iVar2 - iVar1) - iVar5) / 2,iVar3 + ((param_4[3] - iVar3) - iVar6) / 2
             ,local_30[0]);
  FUN_00414480(local_30);
  return;
}

