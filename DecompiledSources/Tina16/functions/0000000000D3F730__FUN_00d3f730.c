/* Ghidra address: 00d3f730 */
/* Ghidra symbol: FUN_00d3f730 */


longlong FUN_00d3f730(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_278 [512];
  undefined4 local_78 [8];
  longlong local_58;
  longlong local_30;
  
  lVar3 = thunk_FUN_041b2403(param_1[1],0x7f,0,0);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_041b2403(param_1[1],0x7f,1,0);
  }
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_041b2403(param_1[1],0x7f,2,0);
  }
  if (lVar3 == 0) {
    thunk_FUN_03b3efbf(param_1[1],local_278,0x200);
    FUN_0040d200(local_78,0x50,0);
    local_78[0] = 0x50;
    uVar4 = thunk_FUN_04118143(param_1[1],0xfffffffa);
    iVar1 = thunk_FUN_04142d5f(uVar4,local_278,local_78);
    if ((iVar1 != 0) && (lVar3 = local_30, local_30 == 0)) {
      lVar3 = local_58;
    }
  }
  if (param_1[0x1a] == 0) {
    lVar5 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
    param_1[0x1a] = lVar5;
  }
  if (lVar3 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x50))(param_1,0x31);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x50))(param_1,0x1e);
    }
    iVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x32);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x1f);
    }
    uVar4 = thunk_FUN_04148cfb(lVar3,1,iVar1,iVar2,0);
    FUN_0060d3b0(param_1[0x1a],uVar4);
    param_1[0x1b] = lVar3;
  }
  return param_1[0x1a];
}

