/* Ghidra address: 017688d0 */
/* Ghidra symbol: FUN_017688d0 */


longlong * FUN_017688d0(undefined8 param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_4440 [2];
  undefined1 local_442c [522];
  undefined1 local_4222 [522];
  undefined1 local_4018 [12288];
  undefined1 auStack_1018 [4096];
  ulonglong uVar3;
  
  uVar3 = 0xba0;
  do {
    uVar2 = uVar3 - 0x1000;
    auStack_1018[uVar3] = (char)uVar2;
    uVar3 = uVar2;
  } while (0xffffffffffffbba0 < uVar2);
  local_4440[0] = 0;
  FUN_0040d200(local_4222,0x20a,0);
  thunk_FUN_0418dd92(0x105,local_4222);
  thunk_FUN_041b7910(local_4222,&DAT_01768a08,0,local_442c);
  FUN_00416830(local_4440,local_442c,0x105);
  plVar4 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_4440[0],0xff00);
  plVar5 = (longlong *)FUN_00628b20(&PTR_FUN_00627390,1,param_1);
  do {
    iVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,local_4018,0x4000);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_4018,iVar1);
  } while (iVar1 != 0);
  FUN_00410f20(plVar5);
  FUN_00410f20(param_1);
  FUN_004b6dc0(plVar4,0);
  FUN_00414480(local_4440);
  return plVar4;
}

