/* Ghidra address: 01b76360 */
/* Ghidra symbol: FUN_01b76360 */


void FUN_01b76360(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0;
  FUN_00414480(&local_20);
  local_30 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  uVar3 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x6b0),&local_30);
  local_28._4_4_ = (undefined4)(uVar3 >> 0x20);
  uVar1 = local_28._4_4_;
  local_28 = uVar3;
  lVar4 = FUN_006f7390(*(undefined8 *)(param_1 + 0x6b0),uVar3 & 0xffffffff,uVar1);
  if (lVar4 == 0) {
    FUN_0040d200(param_1 + 0x6d8,0x18,0);
    *(ulonglong *)(param_1 + 0x6d8) = local_28;
    lVar4 = FUN_0064fca0(*(undefined8 *)(param_1 + 0x6b0),0x1039,0,param_1 + 0x6d8);
    if (lVar4 != -1) {
      lVar4 = FUN_006efcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0),
                           *(undefined4 *)(param_1 + 0x6e4));
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x18))
                (*(longlong **)(lVar4 + 0x10),&local_20,*(int *)(param_1 + 0x6e8) + -1);
    }
  }
  else {
    uVar2 = FUN_006f6f10(*(undefined8 *)(param_1 + 0x6b0),uVar3 & 0xffffffff,uVar1);
    if ((uVar2 & 0xff77) == 0) {
      lVar4 = FUN_006f6fe0(*(undefined8 *)(param_1 + 0x6b0));
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x18))(*(longlong **)(lVar4 + 0x10),&local_20,0);
    }
  }
  if (local_20 != 0) {
    uVar5 = FUN_00416740(local_20);
    thunk_FUN_0419adcc(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),L"explore",uVar5,0,0,1
                      );
  }
  FUN_00414480(&local_20);
  return;
}

