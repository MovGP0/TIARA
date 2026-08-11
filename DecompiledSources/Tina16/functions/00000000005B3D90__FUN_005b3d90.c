/* Ghidra address: 005b3d90 */
/* Ghidra symbol: FUN_005b3d90 */


undefined1
FUN_005b3d90(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  lVar1 = FUN_00410e60(&DAT_005b3cb0,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_40,lVar2);
  *(undefined8 *)(lVar1 + 0x18) = local_38;
  *(undefined8 *)(lVar1 + 0x20) = uStack_30;
  local_49 = 0;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x28;
    }
    local_49 = FUN_005b3e60(param_1,lVar1,param_3,param_4);
  }
  FUN_0041b800(&local_40);
  return local_49;
}

