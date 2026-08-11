/* Ghidra address: 0089df10 */
/* Ghidra symbol: FUN_0089df10 */


longlong FUN_0089df10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  char local_19;
  longlong local_18;
  
  local_30 = auStack_58;
  local_18 = FUN_0089db40(&PTR_FUN_0089d600,1);
  FUN_008762c0(param_2,local_18 + 0xe,&local_19);
  if (local_19 == '\0') {
    *(undefined1 *)(local_18 + 0xc) = 1;
  }
  else {
    uVar2 = FUN_00875380(param_2,&local_19);
    lVar1 = local_18;
    *(undefined4 *)(local_18 + 8) = uVar2;
    if (local_19 == '\0') {
      *(undefined1 *)(local_18 + 0xc) = 0;
    }
    else {
      local_28 = local_18;
      local_18 = 0;
      FUN_00410f20(lVar1);
    }
  }
  return local_18;
}

