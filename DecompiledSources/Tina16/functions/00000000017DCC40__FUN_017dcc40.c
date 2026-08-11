/* Ghidra address: 017dcc40 */
/* Ghidra symbol: FUN_017dcc40 */


longlong FUN_017dcc40(longlong param_1,undefined8 *param_2,char param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  uVar1 = *param_2;
  if (*(char *)(param_1 + 0x18) == '\x02') {
    local_30._0_4_ = (int)uVar1;
    if (((int)local_30 == 0) ||
       (local_30._4_4_ = (int)((ulonglong)uVar1 >> 0x20), local_30._4_4_ == 0)) {
      param_1 = param_1 + 0x1a0;
    }
    else {
      local_30 = uVar1;
      if (local_30._4_4_ < *(int *)(param_1 + 8)) {
        if (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10) < 1) {
          local_38 = 0;
        }
        else {
          iVar2 = local_30._4_4_ + -1;
          FUN_017d7470(*(longlong *)(param_1 + 0x1b0),iVar2,&local_38);
        }
        if (param_3 == '\0') {
          iVar2 = 8;
        }
        else {
          iVar2 = 0x10;
        }
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa0),local_30._4_4_ + -1);
        FUN_017d7470(uVar1,(int)local_30 + -1,&local_34);
        param_1 = FUN_017dcb00(param_1,*(undefined8 *)(param_1 + 0xd0),
                               (*(int *)(*(longlong *)(param_1 + 0xc0) +
                                        (longlong)((local_30._4_4_ - local_38) + -1) * 4) + local_34
                               ) * iVar2);
      }
      else if ((int)local_30 < 1) {
        param_1 = param_1 + 0x1a0;
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10) < 1) {
          local_38 = 0;
        }
        else {
          iVar2 = (int)local_30 + -1;
          FUN_017d7470(*(longlong *)(param_1 + 0x1b0),iVar2,&local_38);
        }
        if (param_3 == '\0') {
          param_1 = *(longlong *)(param_1 + 0x1c8) + (longlong)(((int)local_30 - local_38) + -1) * 8
          ;
        }
        else {
          param_1 = *(longlong *)(param_1 + 0x1c8) +
                    (longlong)
                    (param_4 * ((*(int *)(param_1 + 8) -
                                *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) + -1) +
                    (((int)local_30 - local_38) + -1) * 2) * 8;
        }
      }
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

