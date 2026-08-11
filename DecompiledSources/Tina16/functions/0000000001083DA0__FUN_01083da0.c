/* Ghidra address: 01083da0 */
/* Ghidra symbol: FUN_01083da0 */


void FUN_01083da0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  uVar2 = FUN_006e2230(*(undefined8 *)(param_1 + 0x6d8),param_5,param_6);
  uVar3 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x6d8),param_5,param_6);
  FUN_010792b0(param_1,uVar3);
  if ((param_3 == '\x01') && (*(char *)(param_1 + 0xb52) != '\0')) {
    cVar1 = FUN_0107a3b0(param_1,*(undefined8 *)(param_1 + 0xab0));
    if ((cVar1 == '\0') && (((uVar2 & 8) != 0 || ((uVar2 & 0x20) != 0)))) {
      local_40[0] = FUN_00498310(0,0);
      uVar3 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6d8),local_40);
      local_30._0_4_ = (int)uVar3;
      param_5 = param_5 + (int)local_30;
      local_30._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      param_6 = param_6 + local_30._4_4_;
      local_30 = uVar3;
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0xa8))
                (*(longlong **)(param_1 + 0x720),param_5,param_6);
    }
    else {
      cVar1 = FUN_0107a3b0(param_1,*(undefined8 *)(param_1 + 0xab0));
      if ((cVar1 == '\0') || (((uVar2 & 8) == 0 && ((uVar2 & 0x20) == 0)))) {
        if ((uVar2 & 4) != 0) {
          local_40[0] = FUN_00498310(0,0);
          uVar3 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6d8),local_40);
          local_30._0_4_ = (int)uVar3;
          param_5 = param_5 + (int)local_30;
          local_30._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
          param_6 = param_6 + local_30._4_4_;
          local_30 = uVar3;
          (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0xa8))
                    (*(longlong **)(param_1 + 0x6f0),param_5,param_6);
        }
      }
      else {
        local_40[0] = FUN_00498310(0,0);
        uVar3 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x6d8),local_40);
        local_30._0_4_ = (int)uVar3;
        param_5 = param_5 + (int)local_30;
        local_30._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
        param_6 = param_6 + local_30._4_4_;
        local_30 = uVar3;
        (**(code **)(**(longlong **)(param_1 + 0x730) + 0xa8))
                  (*(longlong **)(param_1 + 0x730),param_5,param_6);
      }
    }
  }
  else if (((param_3 == '\0') &&
           ((*(longlong *)(param_1 + 0xab0) != 0 &&
            (*(longlong *)(*(longlong *)(param_1 + 0xab0) + 0x18) != 0)))) &&
          (((uVar2 & 8) != 0 || ((uVar2 & 0x20) != 0)))) {
    FUN_010792a0(param_1,*(undefined8 *)(param_1 + 0xab0));
    if (*(char *)(*(longlong *)(param_1 + 0xa78) + 0x5e0) == '\0') {
      FUN_01085110(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0xab0) + 0x10),0xffffffff);
    }
  }
  return;
}

