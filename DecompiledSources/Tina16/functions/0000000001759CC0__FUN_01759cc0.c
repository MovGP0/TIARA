/* Ghidra address: 01759cc0 */
/* Ghidra symbol: FUN_01759cc0 */


void FUN_01759cc0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_01759d27:
    if (local_res18 == 0) goto LAB_01759f8d;
  }
  else {
    cVar3 = FUN_0175ad40(param_1,param_2);
    if (cVar3 == '\0') goto LAB_01759d27;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) == '\0') {
    cVar3 = *(char *)(param_1 + 0x38);
    local_40 = FUN_00498310(0xfffffff4,8);
    local_38 = FUN_00498310(0xffffffe3,3);
    local_30 = FUN_00498310(0xffffffe3,0xd);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))
              (*(longlong **)(param_1 + 0x28),param_2,param_5,param_6);
    if (cVar3 == '\0') {
      if (param_2 != (longlong *)0x0) {
        FUN_01a9a440(param_2,0);
        uVar1 = local_40;
        uVar2 = local_40._4_4_;
        FUN_01a9cce0(param_2,local_40 & 0xffffffff,local_40._4_4_);
        FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
        FUN_01a9cce0(param_2,uVar1 & 0xffffffff,uVar2);
        FUN_01a9cd30(param_2,local_38 & 0xffffffff,local_38._4_4_);
      }
      if (local_res18 != 0) {
        FUN_01243890(&local_58,local_res18,local_res20,local_40 & 0xffffffff,local_40._4_4_,
                     (undefined4)local_38,local_38._4_4_,1,0x8000);
      }
    }
    else {
      if (param_2 != (longlong *)0x0) {
        FUN_01a9a440(param_2,0);
        uVar1 = local_40;
        uVar2 = local_40._4_4_;
        FUN_01a9cce0(param_2,local_40 & 0xffffffff,local_40._4_4_);
        FUN_01a9cd30(param_2,local_38 & 0xffffffff,local_38._4_4_);
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
        FUN_01a9cce0(param_2,uVar1 & 0xffffffff,uVar2);
        FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
      }
      if (local_res18 != 0) {
        FUN_01243890(local_50,local_res18,local_res20,local_40 & 0xffffffff,local_40._4_4_,
                     (undefined4)local_30,local_30._4_4_,1,0x8000);
      }
    }
  }
LAB_01759f8d:
  FUN_00417840(&local_58,&LAB_00b9fca0,2);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

