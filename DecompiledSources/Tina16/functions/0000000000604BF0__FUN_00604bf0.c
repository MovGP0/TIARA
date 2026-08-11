/* Ghidra address: 00604bf0 */
/* Ghidra symbol: FUN_00604bf0 */


void FUN_00604bf0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined8 local_28;
  undefined **local_20;
  
  local_48 = 0;
  FUN_00417580(local_40,&DAT_005f7210);
  lVar1 = FUN_00410e60(&DAT_00604b28,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_48,lVar2);
  *(undefined8 **)(lVar1 + 0x18) = param_2;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(*(undefined8 *)(lVar1 + 0x18));
  if (lVar2 == lVar3) {
    local_20 = &PTR_FUN_005f92e8;
  }
  else {
    local_20 = (undefined **)FUN_00602df0(DAT_01dee058,*(undefined8 *)(lVar1 + 0x18));
  }
  local_40[0] = 0;
  local_28 = *(undefined8 *)(lVar1 + 0x18);
  pcVar4 = (code *)FUN_00411550(param_1,0xfffb);
  (*pcVar4)(param_1,local_40,&local_20);
  if (local_20 == (undefined **)0x0) {
    FUN_005ffe20(PTR_PTR_020013e0);
  }
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
  }
  FUN_00603b30(param_1,local_20,lVar1);
  FUN_0041b800(&local_48);
  FUN_00417740(local_40,&DAT_005f7210);
  return;
}

