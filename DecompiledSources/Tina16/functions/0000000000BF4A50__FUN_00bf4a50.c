/* Ghidra address: 00bf4a50 */
/* Ghidra symbol: FUN_00bf4a50 */


void FUN_00bf4a50(longlong *param_1,undefined4 param_2,ushort param_3,int param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_60;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined4 local_3c;
  ulonglong local_38;
  undefined8 local_30;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  FUN_00bd9dd0(param_1[0xcb],param_1,param_2,param_3,param_4,param_5);
  FUN_00742eb0(param_1[0xce],0);
  if ((((char)param_2 != '\x01') || (param_3 != 0x10)) || (param_1[0x1d] == 0)) {
    FUN_0064e190(param_1,0);
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfbff;
    if ((((*(ushort *)(param_1 + 199) & 0x40) == 0) || ((int)param_1[0x122] <= param_4)) ||
       ((char)param_2 == '\x01')) {
      if ((*(ushort *)(param_1 + 199) & 0xa0) == 0x80) {
        FUN_00bf1a50(param_1,param_4,param_5);
        if ((param_3 & 1) == 0) {
          local_60 = FUN_00bfaa10(param_1);
          FUN_00bfa470(param_1,&local_60);
        }
        local_60 = FUN_00bfaa10(param_1);
        FUN_00bfa6c0(param_1,&local_60);
        *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xff7f;
      }
    }
    else {
      (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_4,param_5);
    }
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xffdf;
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xffbf;
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfdff;
    local_38 = FUN_00bf19b0(param_1,param_4,param_5);
    uVar3 = FUN_00c0ee50(param_1,&local_38);
    if (((char)param_1[0x93] != '\0') && (*(char *)(param_1[0x94] + 0x19) != '\0')) {
      local_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar1 = local_30._4_4_;
      local_30 = uVar3;
      cVar2 = FUN_00bdfaa0(param_1[0x95],uVar1,&local_3c);
      if (cVar2 != '\0') {
        FUN_00bfce40(param_1,local_4c,local_38 >> 0x20,local_30._4_4_);
        local_50 = param_5;
        local_54 = param_4;
        cVar2 = FUN_004231e0(local_4c,&local_54);
        if (cVar2 != '\0') {
          FUN_00c00b80(param_1,local_3c,1);
        }
      }
    }
  }
  return;
}

