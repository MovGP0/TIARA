/* Ghidra address: 01156520 */
/* Ghidra symbol: FUN_01156520 */


void FUN_01156520(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 *local_70;
  undefined1 local_64 [2];
  undefined2 local_62;
  undefined1 local_5c [52];
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_5c,&DAT_01d2e6d8);
  local_28 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8[0],0x20);
  local_88 = 0;
  local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_28,0x40);
  FUN_01d317c0(local_20,local_5c);
  FUN_01d30e90(local_20,local_64);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0x7a0) + 0x30))
            (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0x7a0),local_20,local_62);
  iVar1 = FUN_01d31a40(local_20);
  if (iVar1 != 0) {
    uVar2 = FUN_01d31a40(local_20);
    FUN_00b047e0(uVar2);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00417740(local_5c,&DAT_01d2e6d8);
  FUN_00414480(local_res8);
  return;
}

