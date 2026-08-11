/* Ghidra address: 01b35e60 */
/* Ghidra symbol: FUN_01b35e60 */


void FUN_01b35e60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x5dc;
  if (*(int *)(param_1 + 0x764) < 2) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_30,0x88d);
    uVar1 = FUN_00416740(local_30);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_38,0x881);
    uVar2 = FUN_00416740(local_38);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0);
  }
  else {
    *PTR_DAT_02004418 = 1;
    thunk_FUN_04176eb1(3);
    FUN_01b2d120(param_1,*(undefined1 *)(param_1 + 0x7c0));
    *(undefined1 *)(param_1 + 0x7c0) = 0;
    thunk_FUN_04176eb1(0);
    if (*(int *)(param_1 + 0x764) < 5) {
      FUN_008059a0(*(undefined8 *)PTR_DAT_02001d58);
    }
    *PTR_DAT_02004418 = 0;
  }
  FUN_00414560(&local_38,4);
  return;
}

