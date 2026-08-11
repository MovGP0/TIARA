/* Ghidra address: 01089f70 */
/* Ghidra symbol: FUN_01089f70 */


void FUN_01089f70(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  uVar1 = FUN_006e2230(*(undefined8 *)(param_1 + 0x7e0),param_5,param_6);
  lVar3 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x7e0),param_5,param_6);
  *(longlong *)(param_1 + 0xac0) = lVar3;
  if (*(char *)(param_1 + 0xb52) == '\0') {
    if (param_3 == '\x01') {
      local_40 = FUN_00498310(0,0);
      local_30 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x7e0),&local_40);
      if (((uVar1 & 8) == 0) && ((uVar1 & 0x20) == 0)) {
        uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x80),0);
        FUN_007e2da0(uVar4,0);
        uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x80),1);
        FUN_007e2da0(uVar4,0);
      }
      else {
        uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x80),0);
        FUN_007e2da0(uVar4,1);
        uVar4 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x80),1);
        FUN_007e2da0(uVar4,1);
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xac0) + 0x18);
        uVar5 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x7f0) + 0x80),0);
        uVar2 = FUN_010ae5f0(uVar4);
        FUN_007e2d20(uVar5,uVar2);
        FUN_006e2590(*(undefined8 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0xac0));
      }
      (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0xa8))
                (*(longlong **)(param_1 + 0x7f0),param_5 + (int)local_30,param_6 + local_30._4_4_);
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x18);
      FUN_010b3340(*(undefined8 *)(param_1 + 0xac8),lVar3,&local_38);
      FUN_01085110(param_1,*(undefined8 *)(local_38 + 0x30),*(undefined4 *)(lVar3 + 8));
    }
  }
  return;
}

