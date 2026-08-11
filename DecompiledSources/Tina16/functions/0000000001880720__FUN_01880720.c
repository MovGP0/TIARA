/* Ghidra address: 01880720 */
/* Ghidra symbol: FUN_01880720 */


void FUN_01880720(undefined8 param_1,longlong *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  FUN_01880260(param_1,param_2,&local_38);
  uVar1 = FUN_0187fde0(param_1);
  FUN_005fdab0(param_2[0x10],uVar1);
  (**(code **)(*param_2 + 0xf8))
            (param_2,local_38 & 0xffffffff,local_38._4_4_ + 1,
             (int)local_38 + (uStack_30._4_4_ - local_38._4_4_) + -5,uStack_30._4_4_ + -4);
  return;
}

