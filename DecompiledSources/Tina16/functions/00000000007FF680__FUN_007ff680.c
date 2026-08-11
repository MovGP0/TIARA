/* Ghidra address: 007ff680 */
/* Ghidra symbol: FUN_007ff680 */


void FUN_007ff680(longlong *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(char *)((longlong)param_1 + 0x4d1) == param_2) {
    return;
  }
  *(char *)((longlong)param_1 + 0x4d1) = param_2;
  if (*(char *)((longlong)param_1 + 0x494) != '\0') {
    if (*(byte *)((longlong)param_1 + 0x4d1) < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) <<
              (*(byte *)((longlong)param_1 + 0x4d1) & 0x1f);
      bVar8 = (uVar2 & 0x24) != 0;
      uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar8);
    }
    else {
      uVar4 = 0;
      bVar8 = false;
    }
    if (bVar8) {
      uVar3 = (undefined4)CONCAT71((int7)(uVar4 >> 8),1);
      goto LAB_007ff6d4;
    }
  }
  uVar3 = 0;
LAB_007ff6d4:
  FUN_007fb0c0(param_1,uVar3);
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') &&
     (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 ||
      (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0 && (param_1[0xf] != 0)))))) {
    uVar5 = FUN_0065b870(param_1);
    local_1c = thunk_FUN_04118143(uVar5,0xfffffff0);
    uVar5 = FUN_0065b870(param_1);
    local_20 = thunk_FUN_04118143(uVar5,0xffffffec);
    uVar5 = FUN_0065b870(param_1);
    local_24 = thunk_FUN_0418deec(uVar5,0xffffffe6);
    pcVar6 = (code *)FUN_00411550(param_1,0xffa5);
    (*pcVar6)(param_1,&local_1c,&local_20,&local_24);
    pcVar6 = (code *)FUN_00411550(param_1,0xffa6);
    (*pcVar6)(param_1,&local_1c,&local_20);
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(uVar5,0xfffffff0,local_1c);
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(uVar5,0xffffffec,local_20);
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_03b61ef5(uVar5,0xffffffe6,local_24);
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      if (*PTR_DAT_02003210 != '\0') {
        if (*(char *)((longlong)param_1 + 0x4d1) == '\x03') {
          uVar5 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar5,0x80,1,0);
        }
        else {
          uVar5 = FUN_0065b870(param_1);
          uVar7 = FUN_008029f0(param_1);
          thunk_FUN_041b2403(uVar5,0x80,1,uVar7);
        }
      }
      uVar5 = FUN_0065b870(param_1);
      thunk_FUN_0417c6e9(uVar5,0xffffffff);
      FUN_0064fca0(param_1,0x81,0,0);
    }
    uVar5 = FUN_0065b870(param_1);
    thunk_FUN_041cc6e2(uVar5,0,0,0,0,0,0x37);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

