/* Ghidra address: 0109ea20 */
/* Ghidra symbol: FUN_0109ea20 */


void FUN_0109ea20(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  uVar1 = FUN_006e2230(*(undefined8 *)(param_1 + 0x7a8),param_5,param_6);
  lVar2 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x7a8),param_5,param_6);
  *(undefined8 *)(param_1 + 0xa20) = 0;
  if (param_3 == '\x01') {
    local_40[0] = FUN_00498310(0,0);
    local_30 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x7a8),local_40);
    if (((uVar1 & 8) == 0) && ((uVar1 & 0x20) == 0)) {
      uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x80),0);
      FUN_007e2da0(uVar3,0);
      uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x80),1);
      FUN_007e2da0(uVar3,0);
    }
    else {
      uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x80),0);
      FUN_007e2da0(uVar3,1);
      uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x80),1);
      FUN_007e2da0(uVar3,1);
      *(longlong *)(param_1 + 0xa20) = lVar2;
      lVar2 = *(longlong *)(lVar2 + 0x18);
      uVar3 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x80),0);
      FUN_007e2d20(uVar3,*(undefined1 *)(lVar2 + 0x18));
      FUN_006e2590(*(undefined8 *)(param_1 + 0x7a8),*(undefined8 *)(param_1 + 0xa20));
    }
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0xa8))
              (*(longlong **)(param_1 + 0x8b0),param_5 + (int)local_30,param_6 + local_30._4_4_);
  }
  return;
}

