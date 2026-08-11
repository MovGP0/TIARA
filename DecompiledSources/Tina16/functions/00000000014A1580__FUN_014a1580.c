/* Ghidra address: 014a1580 */
/* Ghidra symbol: FUN_014a1580 */


longlong * FUN_014a1580(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar5;
  undefined8 local_res8 [4];
  longlong *local_4020;
  undefined1 local_4018 [12288];
  undefined1 auStack_1018 [4096];
  ulonglong uVar4;
  
  uVar4 = 0xfc0;
  do {
    uVar3 = uVar4 - 0x1000;
    auStack_1018[uVar4] = (char)uVar3;
    uVar4 = uVar3;
  } while (0xffffffffffffbfc0 < uVar3);
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0047c498);
  if (cVar1 == '\0') {
    local_4020 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  }
  else {
    local_4020 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_res8[0],0xff00);
  }
  FUN_004b6dc0(param_2,0);
  (**(code **)(*param_2 + 0x18))(param_2,local_4018,param_3);
  (**(code **)(*local_4020 + 0x20))(local_4020,local_4018,param_3);
  plVar5 = (longlong *)FUN_00628260(&PTR_FUN_00626df0,1,local_4020);
  do {
    iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_4018,0x4000);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_4018,iVar2);
  } while (iVar2 != 0);
  FUN_00410f20(plVar5);
  FUN_00414480(local_res8);
  return local_4020;
}

