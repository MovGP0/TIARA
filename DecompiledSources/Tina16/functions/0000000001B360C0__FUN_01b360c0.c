/* Ghidra address: 01b360c0 */
/* Ghidra symbol: FUN_01b360c0 */


void FUN_01b360c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x6a4;
  if (*(int *)(param_1 + 0x764) < 2) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_48,0x88d);
    uVar1 = FUN_00416740(local_48);
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_50,0x881);
    uVar2 = FUN_00416740(local_50);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0);
  }
  else {
    FUN_01b2d120(param_1,*(undefined1 *)(param_1 + 0x7c0));
    if (DAT_02110d19 == '\0') {
      *PTR_DAT_02004418 = 1;
      thunk_FUN_04176eb1(3);
      *(undefined1 *)(param_1 + 0x7c0) = 0;
      thunk_FUN_04176eb1(0);
      if (*(int *)(param_1 + 0x764) < 6) {
        FUN_008059a0(*(undefined8 *)PTR_DAT_02004ae8);
        FUN_008059a0(*(undefined8 *)PTR_DAT_02001a00);
      }
      else {
        uVar1 = FUN_00b89270();
        FUN_00b8e520(uVar1,local_30,0x88f);
        uVar1 = FUN_00b89270();
        FUN_00b8e520(uVar1,&local_38,0x890);
        FUN_00416ba0(local_20,local_30[0],local_38);
        uVar1 = FUN_00416740(local_20[0]);
        uVar2 = FUN_00b89270();
        FUN_00b8e520(uVar2,&local_40,0x881);
        uVar2 = FUN_00416740(local_40);
        FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,uVar2,0);
      }
      *PTR_DAT_02004418 = 0;
    }
  }
  FUN_00414560(&local_50,5);
  FUN_00414480(local_20);
  return;
}

