/* Ghidra address: 018883f0 */
/* Ghidra symbol: FUN_018883f0 */


longlong * FUN_018883f0(longlong param_1,longlong *param_2,char param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_0041b800(param_2);
  if (0 < param_4) {
    FUN_0043f750(local_30,param_4);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                      (*(longlong **)(param_1 + 0x28),local_30[0]);
    if (iVar1 < 0) {
      lVar2 = FUN_01888670(param_1,param_4,param_3);
      if (lVar2 == 0) {
        if (param_3 != '\x01') {
          FUN_018883f0(param_1,param_2,1,param_4);
          if (*param_2 != 0) {
            (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,param_3);
          }
        }
      }
      else {
        lVar3 = FUN_01888be0(&DAT_01886a50,1,*(undefined8 *)(param_1 + 0x28),param_4,param_3,param_1
                            );
        *(longlong *)(lVar3 + 0x20) = lVar2;
        uVar4 = FUN_01888620(param_1,param_3,param_4);
        local_38 = (undefined4)uVar4;
        *(undefined4 *)(lVar3 + 0x28) = local_38;
        uStack_34 = (undefined4)((ulonglong)uVar4 >> 0x20);
        *(undefined4 *)(lVar3 + 0x2c) = uStack_34;
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
                  (*(longlong **)(param_1 + 0x28),local_30[0],lVar3);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = lVar3 + 0x40;
        }
        FUN_0041b840(param_2,lVar3);
      }
    }
    else {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                        (*(longlong **)(param_1 + 0x28),iVar1);
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar2 + 0x40;
      }
      FUN_0041b840(param_2,lVar3);
      if (*(char *)(lVar2 + 0x34) != param_3) {
        lVar3 = FUN_01888670(param_1,param_4,param_3);
        if (lVar3 != 0) {
          FUN_00452320(lVar2 + 0x20);
          *(longlong *)(lVar2 + 0x20) = lVar3;
          *(char *)(lVar2 + 0x34) = param_3;
        }
      }
    }
  }
  FUN_00414480(local_30);
  return param_2;
}

