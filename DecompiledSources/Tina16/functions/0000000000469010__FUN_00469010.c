/* Ghidra address: 00469010 */
/* Ghidra symbol: FUN_00469010 */


void FUN_00469010(ushort *param_1,ushort *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_78 [38];
  ushort local_52;
  undefined1 *local_50;
  longlong *local_48;
  longlong *local_40;
  ushort local_34;
  ushort local_32;
  ushort local_30 [16];
  
  local_50 = auStack_78;
  if ((*param_1 & 0xfff) < 0x10f) {
    local_50 = auStack_78;
    cVar1 = FUN_0046eed0(*param_2,&local_48);
    if (cVar1 == '\0') {
      FUN_00460210();
    }
    else {
      cVar1 = (**(code **)(*local_48 + 8))(local_48,param_1,param_3,&local_32);
      if (cVar1 == '\0') {
        thunk_FUN_04125dff(local_30);
        FUN_004620f0(local_30,param_2,*param_1);
        if (local_30[0] != *param_1) {
          FUN_004600a0();
        }
        FUN_0046a320(param_1,local_30,param_3);
        FUN_00460b80(local_30);
      }
      else {
        if (*param_1 != local_32) {
          thunk_FUN_04125dff(local_30);
          FUN_004620f0(local_30,param_1,local_32);
          FUN_00461840(param_1,local_30);
          if (*param_1 != local_32) {
            FUN_004600a0();
          }
          FUN_00460b80(local_30);
        }
        (**(code **)(*local_48 + 0x58))(local_48,param_1,param_2,param_3);
      }
    }
  }
  else {
    cVar1 = FUN_0046eed0(*param_1,&local_40);
    if (cVar1 == '\0') {
      FUN_00460210();
    }
    cVar1 = (**(code **)(*local_40 + 0x10))(local_40,param_2,param_3,&local_34);
    if (cVar1 == '\0') {
      local_52 = *param_2;
      if ((local_52 & 0xfff) < 0x10f) {
        if (*param_1 != local_52) {
          thunk_FUN_04125dff(local_30);
          FUN_004620f0(local_30,param_1,local_52);
          FUN_00461840(param_1,local_30);
          if (*param_1 != local_52) {
            FUN_004600a0();
          }
          FUN_00460b80(local_30);
        }
        FUN_0046a320(param_1,param_2,param_3);
      }
      else {
        cVar1 = FUN_0046eed0(local_52,&local_48);
        if (cVar1 == '\0') {
          FUN_00460210();
        }
        else {
          cVar1 = (**(code **)(*local_48 + 8))(local_48,param_1,param_3,&local_32);
          if (cVar1 == '\0') {
            FUN_00460210();
          }
          else {
            if (*param_1 != local_32) {
              thunk_FUN_04125dff(local_30);
              FUN_004620f0(local_30,param_1,local_32);
              FUN_00461840(param_1,local_30);
              if (*param_1 != local_32) {
                FUN_004600a0();
              }
              FUN_00460b80(local_30);
            }
            (**(code **)(*local_48 + 0x58))(local_48,param_1,param_2,param_3);
          }
        }
      }
    }
    else if (*param_2 == local_34) {
      (**(code **)(*local_40 + 0x58))(local_40,param_1,param_2,param_3);
    }
    else {
      thunk_FUN_04125dff(local_30);
      FUN_004620f0(local_30,param_2,local_34);
      if (local_30[0] != local_34) {
        FUN_004600a0();
      }
      (**(code **)(*local_40 + 0x58))(local_40,param_1,local_30,param_3);
      FUN_00460b80(local_30);
    }
  }
  return;
}

