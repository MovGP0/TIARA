/* Ghidra address: 01ba92a0 */
/* Ghidra symbol: FUN_01ba92a0 */


undefined4 FUN_01ba92a0(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_res20;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffffa0;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01baa420(*(undefined8 *)PTR_DAT_02002a68,uVar3,*(undefined8 *)(param_1 + 0x28));
  plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_01b442e0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar6 = 0;
  FUN_00c857e0(*(undefined8 *)PTR_DAT_02002c40,&local_20,*(undefined4 *)(param_1 + 0x18),local_res20
               ,0,in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  FUN_00414ad0(plVar4 + 0xd8,local_20);
  FUN_00806b40(plVar4,param_3 + 2);
  uVar5 = FUN_007ffaf0(plVar4);
  iVar2 = FUN_008077f0(uVar5);
  if (param_2 + (int)plVar4[0x13] < iVar2) {
    FUN_00806af0(plVar4,param_2);
  }
  else {
    FUN_00806af0(plVar4,(param_2 - (int)plVar4[0x13]) + 0x1d);
  }
  FUN_00c85700(*(undefined8 *)PTR_DAT_02002c40,&local_28,*(undefined4 *)(param_1 + 0x18),local_res20
               ,uVar6 & 0xffffffffffffff00,0);
  FUN_0064de00(plVar4,local_28);
  FUN_01b44940(plVar4,uVar3);
  iVar2 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
  if ((iVar2 == 1) && ((int)plVar4[0xd9] != -1)) {
    local_44 = 0x39;
    uVar5 = (**(code **)(**(longlong **)(plVar4[0xd6] + 0x4a0) + 0x30))
                      (*(longlong **)(plVar4[0xd6] + 0x4a0),(int)plVar4[0xd9]);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    FUN_004169a0(&local_30,uVar5);
    cVar1 = FUN_00440a20(local_30,1);
    if (cVar1 == '\0') {
      FUN_00414480(param_1 + 0x20);
    }
    else {
      FUN_004154b0(&local_40,*(undefined8 *)(param_1 + 0x30),0);
      FUN_004156b0(&local_38,&DAT_01ba9558,local_40);
      FUN_00416880(param_1 + 0x20,local_38);
    }
  }
  else {
    local_44 = 0xffffffff;
  }
  FUN_00410f20(plVar4);
  FUN_00410f20(uVar3);
  FUN_00414590(&local_40,2);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_res20);
  return local_44;
}

