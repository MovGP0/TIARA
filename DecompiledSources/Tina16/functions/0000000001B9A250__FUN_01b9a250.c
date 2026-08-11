/* Ghidra address: 01b9a250 */
/* Ghidra symbol: FUN_01b9a250 */


void FUN_01b9a250(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  if (param_3 == '\x01') {
    lVar2 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x7e8),param_5,param_6);
    lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    if (lVar2 == lVar3) {
      lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
      if (lVar2 != 0) {
        local_30[0] = FUN_00498310(param_5,param_6);
        uVar4 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x7e8),local_30);
        local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
        uVar1 = local_20._4_4_;
        local_20 = uVar4;
        (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0xa8))
                  (*(longlong **)(param_1 + 0x7b8),uVar4 & 0xffffffff,uVar1);
      }
    }
  }
  return;
}

