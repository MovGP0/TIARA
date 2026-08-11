/* Ghidra address: 017963e0 */
/* Ghidra symbol: FUN_017963e0 */


void FUN_017963e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined1 local_6d;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined4 local_3c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_6c,&DAT_01d2e6d8);
  uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0xff00);
  lVar3 = FUN_01d30b30(&DAT_01d2e8e8,1,uVar2,1,0);
  if (lVar3 != 0) {
    FUN_00414b50(local_6c,L"TINA Device Database");
    FUN_00414b50(local_64,L"V1.0");
    FUN_00414b50(local_5c,L"30/04/97");
    FUN_00414480(local_54);
    FUN_00414b50(local_4c,L"TINA V1.0");
    FUN_00414b50(local_44,L"(c) Copyright 1993,94,95,96 DesignSoft Inc.\n\rAll rights reserved.");
    local_3c = 1;
    FUN_01d318b0(lVar3,local_6c);
    FUN_01d31180(lVar3,1,1,1);
    local_6d = *(undefined1 *)(*(longlong *)(param_1 + 0xd18) + 0x48);
    FUN_01d311c0(lVar3,&local_6d,1);
    FUN_01797060(param_1,*(undefined4 *)(param_1 + 0xca0));
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        plVar4 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                           (*(longlong **)(param_1 + 0xd18),iVar5);
        (**(code **)(*plVar4 + 0x40))(plVar4,lVar3);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01d31a40(lVar3);
  }
  FUN_00410f20(lVar3);
  FUN_00410f20(uVar2);
  FUN_00417740(local_6c,&DAT_01d2e6d8);
  FUN_00414480(local_res10);
  return;
}

