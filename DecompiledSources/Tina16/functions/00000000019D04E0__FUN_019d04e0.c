/* Ghidra address: 019d04e0 */
/* Ghidra symbol: FUN_019d04e0 */


void FUN_019d04e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20._4_4_ = (int)((ulonglong)*param_2 >> 0x20);
  local_28._4_4_ = (int)((ulonglong)*param_3 >> 0x20);
  if (((*(int *)(param_1 + 0x94) <= local_20._4_4_) || (*(int *)(param_1 + 0x94) <= local_28._4_4_))
     && ((local_20._4_4_ <= *(int *)(param_1 + 0x9c) || (local_28._4_4_ <= *(int *)(param_1 + 0x9c))
         ))) {
    local_28 = *param_3;
    local_20 = *param_2;
    FUN_019cffb0(param_1,&local_20,&local_30);
    FUN_019cffb0(param_1,&local_28,&local_38);
    if (param_4 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 200))
                (*(longlong **)(param_1 + 0x30),local_30,local_2c);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc0))
                (*(longlong **)(param_1 + 0x30),local_38,local_34);
    }
    else {
      FUN_019d0450(param_1,&local_30,&local_38,&local_40,&local_48);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 200))
                (*(longlong **)(param_1 + 0x30),local_40,local_3c);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc0))
                (*(longlong **)(param_1 + 0x30),local_48,local_44);
    }
  }
  return;
}

