/* Ghidra address: 00835440 */
/* Ghidra symbol: FUN_00835440 */


void FUN_00835440(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  cVar1 = FUN_008355d0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00680640(param_1);
    if (cVar1 == '\0') {
      plVar3 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar3 + 0x30))(plVar3);
      uVar4 = FUN_006a6030();
      FUN_006a5810(uVar4,&local_20);
      plVar3 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar3 + 0x28))(plVar3);
      FUN_00835860(param_1,&local_2c,&local_30);
      FUN_008350c0(param_1,&local_28);
      FUN_00837570(param_1,&local_28,local_2c,local_30 - local_2c);
      FUN_00835030(param_1,local_28);
      local_2c = FUN_00837690(param_1,&local_28,local_20,local_2c);
      FUN_00835030(param_1,local_28);
      FUN_008358c0(param_1,local_2c);
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') {
        uVar4 = FUN_0065b870(param_1);
        uVar4 = thunk_FUN_03de17fb(uVar4);
        uVar5 = FUN_0065b870(param_1);
        uVar2 = thunk_FUN_04133d57(uVar5);
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar4,0x111,uVar2 & 0xffff | 0x3000000,uVar5);
      }
      goto code_r0x00835592;
    }
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
code_r0x00835592:
  FUN_00414560(&local_28,2);
  return;
}

