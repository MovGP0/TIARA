/* Ghidra address: 014a7180 */
/* Ghidra symbol: FUN_014a7180 */


longlong * FUN_014a7180(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar5;
  longlong *local_4448;
  undefined8 local_4440 [2];
  undefined1 local_442c [522];
  undefined1 local_4222 [522];
  undefined1 local_4018 [12288];
  undefined1 auStack_1018 [4096];
  ulonglong uVar4;
  
  uVar4 = 0xba0;
  do {
    uVar3 = uVar4 - 0x1000;
    auStack_1018[uVar4] = (char)uVar3;
    uVar4 = uVar3;
  } while (0xffffffffffffbba0 < uVar3);
  local_4440[0] = 0;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_0047c498);
  if (cVar1 == '\0') {
    local_4448 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  }
  else {
    FUN_0040d200(local_4222,0x20a,0);
    thunk_FUN_0418dd92(0x105,local_4222);
    thunk_FUN_041b7910(local_4222,&DAT_014a72e8,0,local_442c);
    FUN_00416830(local_4440,local_442c,0x105);
    local_4448 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_4440[0],0xff00);
  }
  plVar5 = (longlong *)FUN_00628b20(&PTR_FUN_00627390,1,param_1);
  do {
    iVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,local_4018,0x4000);
    (**(code **)(*local_4448 + 0x20))(local_4448,local_4018,iVar2);
  } while (iVar2 != 0);
  FUN_00410f20(plVar5);
  FUN_00410f20(param_1);
  FUN_004b6dc0(local_4448,0);
  FUN_00414480(local_4440);
  return local_4448;
}

