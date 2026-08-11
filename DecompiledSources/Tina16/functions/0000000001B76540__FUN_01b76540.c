/* Ghidra address: 01b76540 */
/* Ghidra symbol: FUN_01b76540 */


void FUN_01b76540(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  FUN_0040d200(param_1 + 0x6d8,0x18,0);
  uVar2 = FUN_00498310(param_5,param_6);
  *(undefined8 *)(param_1 + 0x6d8) = uVar2;
  if (param_3 == '\x01') {
    lVar3 = FUN_006f7390(*(undefined8 *)(param_1 + 0x6b0),param_5,param_6);
    if (lVar3 == 0) {
      lVar3 = FUN_0064fca0(*(undefined8 *)(param_1 + 0x6b0),0x1039,0,param_1 + 0x6d8);
      if (lVar3 != -1) {
        local_30[0] = FUN_00498310(param_5,param_6);
        uVar4 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6b0),local_30);
        local_20._4_4_ = (undefined4)(uVar4 >> 0x20);
        uVar1 = local_20._4_4_;
        local_20 = uVar4;
        (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0xa8))
                  (*(longlong **)(param_1 + 0x6b8),uVar4 & 0xffffffff,uVar1);
      }
    }
  }
  return;
}

