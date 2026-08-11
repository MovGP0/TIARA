/* Ghidra address: 017596e0 */
/* Ghidra symbol: FUN_017596e0 */


void FUN_017596e0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if (param_2 == (longlong *)0x0) {
LAB_01759764:
    if (local_res18 == 0) goto LAB_01759b90;
  }
  else {
    cVar1 = FUN_0175ad40(param_1,param_2);
    if (cVar1 == '\0') goto LAB_01759764;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0xb) == '\0') {
    cVar1 = *(char *)(param_1 + 0x38);
    local_48 = FUN_00498310(5,0xc);
    local_40 = FUN_00498310(0x23,0xfffffff4);
    local_38 = FUN_00498310(0xe,0xfffffff6);
    local_30 = FUN_00498310(0xe,10);
    local_28 = FUN_00498310(0x1a,0xfffffff6);
    local_20 = FUN_00498310(0x1a,10);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))
              (*(longlong **)(param_1 + 0x28),param_2,param_5,param_6);
    if (cVar1 == '\0') {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        FUN_01a9a440(param_2,0);
        FUN_01a9cce0(param_2,local_48 & 0xffffffff,local_48._4_4_);
        FUN_01a9cd30(param_2,local_40 & 0xffffffff,local_40._4_4_);
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
        FUN_01a9cce0(param_2,local_38 & 0xffffffff,local_38._4_4_);
        FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
        FUN_01a9cce0(param_2,local_28 & 0xffffffff,local_28._4_4_);
        FUN_01a9cd30(param_2,local_20 & 0xffffffff,local_20._4_4_);
      }
      if (local_res18 != 0) {
        FUN_01243890(&local_68,local_res18,local_res20,local_38 & 0xffffffff,local_38._4_4_,
                     (undefined4)local_30,local_30._4_4_,1,0x8000);
        FUN_01243890(&local_70,local_res18,local_res20,local_28 & 0xffffffff,local_28._4_4_,
                     (undefined4)local_20,local_20._4_4_,1,0x8000);
      }
    }
    else {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a8))
                          (*(longlong **)(param_1 + 0x28),param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar2);
        FUN_01a9cce0(param_2,local_48 & 0xffffffff,local_48._4_4_);
        FUN_01a9cd30(param_2,local_40 & 0xffffffff,local_40._4_4_);
        FUN_01a9cce0(param_2,local_38 & 0xffffffff,local_38._4_4_);
        FUN_01a9cd30(param_2,local_30 & 0xffffffff,local_30._4_4_);
        FUN_01a9cce0(param_2,local_28 & 0xffffffff,local_28._4_4_);
        FUN_01a9cd30(param_2,local_20 & 0xffffffff,local_20._4_4_);
      }
      if (local_res18 != 0) {
        FUN_01243890(&local_50,local_res18,local_res20,local_48 & 0xffffffff,local_48._4_4_,
                     (undefined4)local_40,local_40._4_4_,1,0x8000);
        FUN_01243890(&local_58,local_res18,local_res20,local_38 & 0xffffffff,local_38._4_4_,
                     (undefined4)local_30,local_30._4_4_,1,0x8000);
        FUN_01243890(&local_60,local_res18,local_res20,local_28 & 0xffffffff,local_28._4_4_,
                     (undefined4)local_20,local_20._4_4_,1,0x8000);
      }
    }
  }
LAB_01759b90:
  FUN_00417840(&local_70,&LAB_00b9fca0,5);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

