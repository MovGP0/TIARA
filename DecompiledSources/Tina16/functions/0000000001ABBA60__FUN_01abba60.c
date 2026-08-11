/* Ghidra address: 01abba60 */
/* Ghidra symbol: FUN_01abba60 */


void FUN_01abba60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  longlong local_40;
  longlong local_38;
  undefined4 local_2c [3];
  
  local_58 = 0;
  local_50 = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    FUN_01abdc90(&PTR_FUN_01aaff18,&local_38,&local_40);
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d30f00(param_2,local_2c,4);
    uVar4 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    FUN_01ab6ed0(param_1,uVar4);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      FUN_01ab6ed0(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
    }
    FUN_01d30f00(param_2,local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0x70) = lVar5;
    if (lVar5 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(local_40 + 0x70);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(local_38 + 0x70);
      }
    }
    FUN_01d30f00(param_2,local_2c,4);
    uVar3 = FUN_01a90ee0(local_2c[0]);
    FUN_005fd4e0(*(undefined8 *)(param_1 + 0x78),uVar3);
    FUN_01d30f00(param_2,local_2c,4);
    uVar4 = FUN_01cef240(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    FUN_01d30f00(param_2,local_2c,4);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      uVar4 = FUN_01cc5fa0(*(longlong *)(param_1 + 0x88),local_2c[0]);
      *(undefined8 *)(param_1 + 0x98) = uVar4;
    }
    FUN_01d30f00(param_2,&local_41,1);
    uVar4 = FUN_01abc400(local_41,*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    FUN_01cc8360(uVar4);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x58))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0xb8) = uVar4;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x60))
                      (*(longlong **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0xc0) = uVar4;
    FUN_01d30f00(param_2,local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xe8) = lVar5;
    if (lVar5 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_40 + 0xe8);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(local_38 + 0xe8);
      }
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0xf8),param_1);
    }
    FUN_01d30f00(param_2,local_2c,4);
    lVar5 = FUN_01cedea0(*(undefined8 *)(param_1 + 0x38),local_2c[0]);
    *(longlong *)(param_1 + 0xf0) = lVar5;
    if (lVar5 == 0) {
      if (local_38 == 0) {
        if (local_40 == 0) {
          *(undefined8 *)(param_1 + 0xf0) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(local_40 + 0xf0);
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(local_38 + 0xf0);
      }
    }
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0xf8),param_1);
    }
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (lVar5 == 0) {
      FUN_01ab6de0(param_1,&local_58);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x38);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_58,param_1);
    }
    else {
      FUN_01ab6de0(param_1,&local_50);
      plVar1 = *(longlong **)(lVar5 + 0x80);
      (**(code **)(*plVar1 + 0x80))(plVar1,local_50,param_1);
    }
  }
  FUN_00414560(&local_58,2);
  return;
}

