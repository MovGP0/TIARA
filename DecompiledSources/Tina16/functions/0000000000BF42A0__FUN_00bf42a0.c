/* Ghidra address: 00bf42a0 */
/* Ghidra symbol: FUN_00bf42a0 */


void FUN_00bf42a0(longlong *param_1,undefined4 param_2,ushort param_3,int param_4,undefined4 param_5
                 )

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)((longlong)param_1 + 0x4b4);
  local_38 = *(undefined8 *)((longlong)param_1 + 0x4bc);
  bVar6 = 0;
  bVar5 = (byte)param_2;
  bVar1 = false;
  if ((bVar5 == 0) && (cVar2 = FUN_00bf2c80(param_1), bVar1 = false, cVar2 != '\0')) {
    bVar1 = true;
    *(int *)(param_1 + 0xb6) = param_4;
    *(undefined4 *)((longlong)param_1 + 0x5b4) = param_5;
  }
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  if ((bVar5 == 0) && ((param_3 & 0x40) != 0)) {
    return;
  }
  uVar3 = FUN_00bd9ce0(param_1[0xcb],param_1,param_2,param_3,param_4,param_5);
  if (bVar5 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (bVar5 & 0x1f) & 3U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) goto LAB_00bf4449;
  if (bVar5 != 1) {
    FUN_00bf1a50(param_1,param_4,param_5);
    goto LAB_00bf4449;
  }
  uVar4 = FUN_00c09df0(param_1);
  if ((uVar4 & 0x4000) == 0) {
    return;
  }
  cVar2 = FUN_00bf2c80(param_1);
  if (cVar2 == '\0') {
LAB_00bf43fb:
    cVar2 = FUN_00bf2c80(param_1);
    if (cVar2 != '\0') {
      return;
    }
  }
  else {
    local_40 = FUN_00bf19b0(param_1,param_4,param_5);
    local_40 = FUN_00c0ee50(param_1,&local_40);
    cVar2 = FUN_00c09ab0(param_1,&local_40);
    if (cVar2 != '\0') goto LAB_00bf43fb;
  }
  FUN_00bf3bb0(param_1);
  *(undefined8 *)((longlong)param_1 + 0x4bc) = *(undefined8 *)((longlong)param_1 + 0x4b4);
  FUN_00bf1a50(param_1,param_4,param_5);
LAB_00bf4449:
  if (bVar5 == 0) {
    *(undefined8 *)((longlong)param_1 + 0x4b4) = local_30;
    *(undefined8 *)((longlong)param_1 + 0x4bc) = local_38;
    FUN_0064e190(param_1,1);
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 0x400;
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xff7f;
    if ((((bVar1) && ((*(uint *)((longlong)param_1 + 0x63a) & 0x10) != 0)) &&
        ((int)param_1[0x122] + 2 <= param_4)) && (*(char *)((longlong)param_1 + 0x5f4) == '\0')) {
      local_40 = FUN_00bf19b0(param_1,param_4,param_5);
      local_40 = FUN_00c0ee50(param_1,&local_40);
      cVar2 = FUN_00c09ab0(param_1,&local_40);
      if (cVar2 != '\0') {
        bVar6 = 1;
      }
    }
  }
  if ((bool)(bVar6 & bVar5 == 0)) {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 0x80;
  }
  else if ((*(ushort *)(param_1 + 199) & 0x20) == 0) {
    if ((param_3 & 1) == 0) {
      uVar4 = FUN_00c09df0(param_1);
      if (((uVar4 & 1) != 0) && (*(char *)((longlong)param_1 + 0x5f5) != '\x01')) {
        if ((param_3 & 2) == 0) {
          FUN_00c086c0(param_1,0);
        }
        else {
          FUN_00c086c0(param_1,2);
        }
      }
      local_40 = FUN_00bfaa10(param_1);
      FUN_00bfa470(param_1,&local_40);
    }
    else {
      local_40 = FUN_00bfaa10(param_1);
      FUN_00bfa6c0(param_1,&local_40);
    }
  }
  if (param_4 < (int)param_1[0x122]) {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 0x40;
  }
  if (((*(ushort *)(param_1 + 199) & 0x40) != 0) && (bVar5 == 1)) {
    (**(code **)(*param_1 + 0x2e0))(param_1,param_2,param_4,param_5);
  }
  (**(code **)(*param_1 + 600))(param_1);
  uVar3 = FUN_0065b870(param_1);
  thunk_FUN_03c244fb(uVar3);
  return;
}

