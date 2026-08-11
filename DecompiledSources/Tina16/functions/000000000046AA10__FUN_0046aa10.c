/* Ghidra address: 0046aa10 */
/* Ghidra symbol: FUN_0046aa10 */


undefined1 FUN_0046aa10(ushort *param_1,ushort *param_2,int param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [36];
  ushort local_44;
  ushort local_42;
  undefined1 *local_40;
  longlong *local_38;
  longlong *local_30;
  ushort local_26;
  ushort local_24;
  undefined1 local_21;
  ushort local_20 [12];
  
  local_40 = auStack_68;
  local_21 = 1;
  local_44 = *param_1;
  if ((local_44 & 0xfff) < 0x10f) {
    if (local_44 == 0) {
      local_40 = auStack_68;
      local_21 = FUN_0046a4f0(1,0);
    }
    else if (local_44 == 1) {
      local_40 = auStack_68;
      local_21 = FUN_0046a510(2,0,param_3);
    }
    else {
      local_40 = auStack_68;
      cVar1 = FUN_0046eed0(*param_2,&local_38);
      if (cVar1 == '\0') {
        FUN_00460210();
      }
      else {
        cVar1 = (**(code **)(*local_38 + 8))(local_38,param_1,0xb,&local_24);
        if (cVar1 == '\0') {
          thunk_FUN_04125dff(local_20);
          FUN_004620f0(local_20,param_2,local_44);
          if ((local_20[0] & 0xfff) != local_44) {
            FUN_004600a0();
          }
          local_21 = FUN_0046a7a0(param_1,local_20,param_3);
          FUN_00460b80(local_20);
        }
        else if (local_44 == local_24) {
          uVar2 = (**(code **)(*local_38 + 0x68))(local_38,param_1,param_2,param_3);
          local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
        }
        else {
          thunk_FUN_04125dff(local_20);
          FUN_004620f0(local_20,param_1,local_24);
          if ((local_20[0] & 0xfff) != local_24) {
            FUN_004600a0();
          }
          uVar2 = (**(code **)(*local_38 + 0x68))(local_38,local_20,param_2,param_3);
          local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
          FUN_00460b80(local_20);
        }
      }
    }
  }
  else {
    local_42 = *param_2;
    if (local_42 == 0) {
      local_40 = auStack_68;
      local_21 = FUN_0046a4f0(0,1);
    }
    else if (local_42 == 1) {
      local_40 = auStack_68;
      local_21 = FUN_0046a510(0,2,param_3);
    }
    else {
      cVar1 = FUN_0046eed0(local_44,&local_30);
      if (cVar1 == '\0') {
        FUN_00460210();
      }
      else {
        cVar1 = (**(code **)(*local_30 + 0x10))(local_30,param_2,0xb,&local_26);
        if (cVar1 == '\0') {
          if ((local_42 & 0xfff) < 0x10f) {
            thunk_FUN_04125dff(local_20);
            FUN_004620f0(local_20,param_1,local_42);
            if (local_20[0] != local_42) {
              FUN_004600a0();
            }
            local_21 = FUN_0046a7a0(local_20,param_2,param_3);
            FUN_00460b80(local_20);
          }
          else {
            cVar1 = FUN_0046eed0(local_42,&local_38);
            if (cVar1 == '\0') {
              FUN_00460210();
            }
            else {
              cVar1 = (**(code **)(*local_38 + 8))(local_38,param_1,0xb,&local_24);
              if (cVar1 == '\0') {
                FUN_00460210();
              }
              else if (local_44 == local_24) {
                uVar2 = (**(code **)(*local_38 + 0x68))(local_38,param_1,param_2,param_3);
                local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
              }
              else {
                thunk_FUN_04125dff(local_20);
                FUN_004620f0(local_20,param_1,local_24);
                if (local_20[0] != local_24) {
                  FUN_004600a0();
                }
                uVar2 = (**(code **)(*local_38 + 0x68))(local_38,local_20,param_2,param_3);
                local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
                FUN_00460b80(local_20);
              }
            }
          }
        }
        else if (local_42 == local_26) {
          uVar2 = (**(code **)(*local_30 + 0x68))(local_30,param_1,param_2,param_3);
          local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
        }
        else {
          thunk_FUN_04125dff(local_20);
          FUN_004620f0(local_20,param_2,local_26);
          if (local_20[0] != local_26) {
            FUN_004600a0();
          }
          uVar2 = (**(code **)(*local_30 + 0x68))(local_30,param_1,local_20,param_3);
          local_21 = (&DAT_01dc4696)[(uVar2 & 0xff) + (longlong)param_3 * 2];
          FUN_00460b80(local_20);
        }
      }
    }
  }
  return local_21;
}

