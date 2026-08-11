/* Ghidra address: 0089dfe0 */
/* Ghidra symbol: FUN_0089dfe0 */


longlong FUN_0089dfe0(undefined8 param_1,undefined8 param_2,char param_3)

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
  if (param_3 == '\0') {
    uVar2 = FUN_00875380(param_2,&local_19);
    *(undefined4 *)(local_18 + 8) = uVar2;
    if (local_19 == '\0') {
      *(undefined1 *)(local_18 + 0xc) = 0;
      return local_18;
    }
  }
  else if ((param_3 == '\x01') && (FUN_008762c0(param_2,local_18 + 0xe,&local_19), local_19 == '\0')
          ) {
    *(undefined1 *)(local_18 + 0xc) = 1;
    return local_18;
  }
  lVar1 = local_18;
  local_28 = local_18;
  local_18 = 0;
  FUN_00410f20(lVar1);
  return local_18;
}

