/* Ghidra address: 00c3fba0 */
/* Ghidra symbol: FUN_00c3fba0 */


void FUN_00c3fba0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  short sVar5;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined4 local_3c;
  
  FUN_00417580(local_6c,&DAT_01d2e6d8);
  uVar1 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0xff00);
  lVar2 = FUN_01d30b30(&DAT_01d2e8e8,1,uVar1,1,0);
  if (lVar2 != 0) {
    FUN_00414b50(local_6c,L"TINA Device Database");
    FUN_00414b50(local_64,L"V1.0");
    FUN_00414b50(local_5c,L"30/04/97");
    FUN_00414480(local_54);
    FUN_00414b50(local_4c,L"TINA Device Editor V1.0");
    FUN_00414b50(local_44,L"Copyright 1997 DesignSoft, Inc.");
    local_3c = 1;
    FUN_01d318b0(lVar2,local_6c);
    FUN_01d31180(lVar2,1,1,1);
    FUN_01d311c0(lVar2,param_1 + 0x18,1);
    sVar5 = *(short *)(param_1 + 0x10);
    sVar4 = 0;
    if (-1 < (short)(sVar5 + -1)) {
      do {
        plVar3 = (longlong *)FUN_004aeac0(param_1,(longlong)sVar4);
        (**(code **)(*plVar3 + 0x40))(plVar3,lVar2);
        sVar4 = sVar4 + 1;
        sVar5 = sVar5 + -1;
      } while (sVar5 != 0);
    }
    FUN_01d31a40(lVar2);
  }
  FUN_00410f20(lVar2);
  FUN_00410f20(uVar1);
  FUN_00417740(local_6c,&DAT_01d2e6d8);
  return;
}

