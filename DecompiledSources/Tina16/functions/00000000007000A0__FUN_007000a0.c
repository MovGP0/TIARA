/* Ghidra address: 007000a0 */
/* Ghidra symbol: FUN_007000a0 */


void FUN_007000a0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_48 [16];
  longlong local_38;
  
  uVar2 = FUN_0065b870();
  iVar1 = thunk_FUN_041b2403(uVar2,0x418,0,0);
  (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x10))(*(longlong **)(param_1 + 0x4b0));
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_0065b870(param_1);
      FUN_004701b0(uVar2,0x417,(longlong)iVar4,local_48,0);
      if (local_38 == 0) {
        lVar3 = FUN_006f9550(&PTR_FUN_006cb0d0,1,*(undefined8 *)(param_1 + 8));
        FUN_006fa6a0(lVar3,3);
        *(longlong *)(lVar3 + 0x340) = param_1;
        local_38 = lVar3;
        uVar2 = FUN_0065b870();
        thunk_FUN_041b2403(uVar2,0x416,(longlong)iVar4,0);
        uVar2 = FUN_0065b870(param_1);
        FUN_004701a0(uVar2,0x443,(longlong)iVar4,local_48);
      }
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4b0),local_38);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006fd640(param_1);
  return;
}

