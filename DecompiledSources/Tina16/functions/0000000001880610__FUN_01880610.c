/* Ghidra address: 01880610 */
/* Ghidra symbol: FUN_01880610 */


void FUN_01880610(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
                 undefined2 param_5)

{
  longlong *plVar1;
  undefined8 local_50 [2];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50[0] = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  FUN_01880190(param_1,param_2,param_3,&local_38,param_5);
  plVar1 = *(longlong **)(param_2 + 0x4b8);
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),local_50,param_3);
  FUN_005fbfa0(local_50[0],&local_3c);
  FUN_005fdab0(plVar1[0x10],local_3c);
  (**(code **)(*plVar1 + 0xf8))
            (plVar1,(int)local_38 + 2,local_38._4_4_ + 2,
             (int)local_38 + (uStack_30._4_4_ - local_38._4_4_) + -2,uStack_30._4_4_ + -2);
  FUN_00414480(local_50);
  return;
}

