/* Ghidra address: 0070a860 */
/* Ghidra symbol: FUN_0070a860 */


void FUN_0070a860(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  
  iVar1 = *param_2;
  if (iVar1 < 0x202) {
    if (iVar1 != 0x201) {
      if (iVar1 == 0xf) {
        (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 2));
        return;
      }
      if (iVar1 == 0x14) {
        param_2[6] = 1;
        param_2[7] = 0;
        return;
      }
      if (iVar1 == 0x82) {
        uVar2 = thunk_FUN_03a65bf1(param_1[0x11],param_1[0xf],0x82,*(undefined8 *)(param_2 + 2),
                                   *(undefined8 *)(param_2 + 4));
        *(undefined8 *)(param_2 + 6) = uVar2;
        param_1[0xf] = 0;
        param_1[0x11] = 0;
        return;
      }
      if (iVar1 == 0x200) {
        if (((int)param_1[0x13] == -1) && (*(char *)((longlong)param_1 + 0x9c) != '\0')) {
          (**(code **)(*param_1 + 0xa0))(param_1);
        }
        else if ((int)param_1[0x13] == -1) {
          local_38 = (int)(short)param_2[4];
          local_34 = (int)*(short *)((longlong)param_2 + 0x12);
          thunk_FUN_041b2403(param_1[0xf],0x1206,0,&local_38);
          if (((local_30 & 4) == 0) && ((local_30 & 8) == 0)) {
            *(undefined4 *)(param_1 + 0x12) = local_2c;
          }
          else {
            *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
          }
          if (*(int *)((longlong)param_1 + 0x94) != (int)param_1[0x12]) {
            *(int *)((longlong)param_1 + 0x94) = (int)param_1[0x12];
            thunk_FUN_041543e0(param_1[0xf],0,0,1);
          }
        }
      }
      goto LAB_0070aac2;
    }
LAB_0070a8ec:
    local_38 = (int)(short)param_2[4];
    local_34 = (int)*(short *)((longlong)param_2 + 0x12);
    thunk_FUN_041b2403(param_1[0xf],0x1206,0,&local_38);
    if (((local_30 & 4) == 0) && ((local_30 & 8) == 0)) {
      *(undefined4 *)(param_1 + 0x13) = local_2c;
    }
    else {
      *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
    }
    thunk_FUN_041543e0(param_1[0xf],0,0,1);
    *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  }
  else {
    if (iVar1 != 0x202) {
      if (iVar1 == 0x203) goto LAB_0070a8ec;
      if (iVar1 != 0x205) {
        if ((iVar1 == 0x2a3) && ((int)param_1[0x12] != -1)) {
          *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
          thunk_FUN_041543e0(param_1[0xf],0,0,1);
        }
        goto LAB_0070aac2;
      }
    }
    *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
    thunk_FUN_041543e0(param_1[0xf],0,0,1);
    *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
LAB_0070aac2:
  uVar2 = thunk_FUN_03a65bf1(param_1[0x11],param_1[0xf],*param_2,*(undefined8 *)(param_2 + 2),
                             *(undefined8 *)(param_2 + 4));
  *(undefined8 *)(param_2 + 6) = uVar2;
  return;
}

