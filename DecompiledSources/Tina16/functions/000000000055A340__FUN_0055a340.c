/* Ghidra address: 0055a340 */
/* Ghidra symbol: FUN_0055a340 */


undefined8 FUN_0055a340(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  FUN_0055aa90(param_1);
  cVar1 = FUN_00563e00(*(undefined8 *)(param_1 + 0x58),param_2,&local_18);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  else {
    local_28 = *(undefined8 *)(param_1 + 0x30);
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(local_28);
    FUN_00411f00(uVar2,0xffffffff);
    cVar1 = FUN_0055f190(*(undefined8 *)(param_1 + 0x38),local_18,&local_20);
    if (cVar1 == '\0') {
      FUN_00412130(*(undefined8 *)(param_1 + 0x30));
      uVar2 = FUN_00546050(param_1,&PTR_FUN_00528c20,0,local_18);
      local_10 = FUN_004113f0(uVar2,&PTR_FUN_00528c20);
    }
    else {
      local_10 = FUN_004113f0(local_20,&PTR_FUN_00528c20);
      FUN_0055a440(0,local_30);
    }
  }
  return local_10;
}

