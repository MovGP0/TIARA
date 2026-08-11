/* Ghidra address: 0149bbd0 */
/* Ghidra symbol: FUN_0149bbd0 */


void FUN_0149bbd0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined8 uVar1;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  if (param_3 == '\x01') {
    local_30[0] = FUN_00498310(0,0);
    uVar1 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x8c0),local_30);
    local_20._0_4_ = (int)uVar1;
    param_5 = (int)local_20 + param_5;
    local_20._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    param_6 = local_20._4_4_ + param_6;
    local_20 = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0xa8))
              (*(longlong **)(param_1 + 0x8c8),param_5,param_6);
  }
  return;
}

