/* Ghidra address: 009d3d70 */
/* Ghidra symbol: FUN_009d3d70 */


undefined4
FUN_009d3d70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res20;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_20 = (longlong *)0x0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  *param_5 = 0;
  uVar2 = FUN_0041b800(&local_20);
  cVar1 = FUN_00452340(local_res20,&DAT_009d3f40,uVar2);
  if (cVar1 == '\0') {
    lVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*local_20 + 0x18))(local_20);
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_0090c850);
  }
  uVar2 = FUN_009d4120(param_1);
  plVar4 = (longlong *)FUN_00956c80(&PTR_FUN_0090fbe0,1,uVar2);
  if (lVar3 != 0) {
    (**(code **)(*plVar4 + 0x1b0))(plVar4,lVar3);
  }
  if (param_3 != 0) {
    FUN_004168e0(&local_38,param_2);
    FUN_004168e0(&local_40,param_3);
    uVar2 = FUN_009511a0(&PTR_FUN_0090a420,1,plVar4,local_38,local_40);
    (**(code **)(*plVar4 + 0x1b0))(plVar4,uVar2);
  }
  lVar3 = FUN_009da9e0(&PTR_FUN_009d0e08,1,param_1,plVar4,1);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0xe8;
  }
  FUN_0041b840(param_5,lVar3);
  local_30 = 0;
  FUN_004145c0(&local_40,2);
  FUN_0041b800(&local_20);
  FUN_0041b800(&local_res20);
  return local_30;
}

