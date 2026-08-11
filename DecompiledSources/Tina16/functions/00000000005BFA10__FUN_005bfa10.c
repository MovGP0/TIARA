/* Ghidra address: 005bfa10 */
/* Ghidra symbol: FUN_005bfa10 */


undefined8 FUN_005bfa10(longlong param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_30 = *(undefined8 *)(param_1 + 0x10);
  FUN_00411e10(local_30,0xffffffff);
  cVar1 = FUN_005bf720(param_1);
  if (cVar1 != '\0') {
    FUN_005bf790(param_1);
  }
  if ((param_3 < 0x79e) || (0x802 < param_3)) {
    uVar2 = FUN_00417740(param_2,&DAT_005bc4e0);
    cVar1 = FUN_005c34c0(*(undefined8 *)(param_1 + 0x10),param_3,uVar2);
    if (cVar1 == '\0') {
      local_20 = FUN_005bfce0(param_1,param_3);
      FUN_00417c40(param_2,local_20,&DAT_005bc4e0);
      FUN_005c3130(*(undefined8 *)(param_1 + 0x10),param_3,param_2);
      FUN_00418590(local_20,&DAT_005bc4e0);
    }
  }
  else {
    lVar3 = (longlong)(int)(param_3 - 0x79e);
    if (*(longlong *)(*(longlong *)(param_1 + 8) + lVar3 * 8) == 0) {
      uVar2 = FUN_005bfce0(param_1,param_3);
      *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar3 * 8) = uVar2;
    }
    FUN_00417c40(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar3 * 8),&DAT_005bc4e0);
  }
  local_28 = *(undefined8 *)(param_1 + 0x10);
  FUN_00412130(local_28);
  return param_2;
}

