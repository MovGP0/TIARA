/* Ghidra address: 01b34e50 */
/* Ghidra symbol: FUN_01b34e50 */


void FUN_01b34e50(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x578;
  if (*(int *)(param_1 + 0x764) < 2) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_20,0x88d);
    uVar1 = FUN_00416740(local_20[0]);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_28,0x881);
    uVar2 = FUN_00416740(local_28);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0);
  }
  else {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02001d60);
    thunk_FUN_04176eb1(3);
    FUN_01b2d120(param_1,*(undefined1 *)(param_1 + 0x7c0));
    thunk_FUN_04176eb1(0);
  }
  FUN_00414560(&local_28,2);
  return;
}

