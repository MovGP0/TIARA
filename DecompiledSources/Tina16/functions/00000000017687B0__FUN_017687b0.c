/* Ghidra address: 017687b0 */
/* Ghidra symbol: FUN_017687b0 */


void FUN_017687b0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_res8 [4];
  undefined1 local_4028 [12296];
  undefined1 auStack_1020 [4096];
  ulonglong uVar3;
  
  uVar3 = 0xfc8;
  do {
    uVar2 = uVar3 - 0x1000;
    auStack_1020[uVar3] = (char)uVar2;
    uVar3 = uVar2;
  } while (0xffffffffffffbfc8 < uVar2);
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar4 = (longlong *)FUN_004b9860(&PTR_FUN_0047c498,1,local_res8[0],0xff00);
  FUN_004b6dc0(param_2,0);
  (**(code **)(*param_2 + 0x18))(param_2,local_4028,param_3);
  (**(code **)(*plVar4 + 0x20))(plVar4,local_4028,param_3);
  plVar5 = (longlong *)FUN_00628260(&PTR_FUN_00626df0,1,plVar4);
  do {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_4028,0x4000);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_4028,iVar1);
  } while (iVar1 != 0);
  FUN_00410f20(plVar5);
  FUN_00410f20(plVar4);
  FUN_00414480(local_res8);
  return;
}

