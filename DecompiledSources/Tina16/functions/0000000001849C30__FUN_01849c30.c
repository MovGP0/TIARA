/* Ghidra address: 01849c30 */
/* Ghidra symbol: FUN_01849c30 */


undefined8 FUN_01849c30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_004634b0(param_1 + 0x90);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00486f38);
  if (cVar1 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_004d3a80(uVar2,*(undefined8 *)(param_1 + 0x20));
  }
  if (lVar3 == 0) {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    local_28 = 0x11;
    FUN_00442f70(local_20,*(undefined8 *)PTR_DAT_02003b50,&local_30,0);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_00468700(param_2,lVar3);
  }
  FUN_00414480(local_20);
  return param_2;
}

