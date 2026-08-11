/* Ghidra address: 007e6bb0 */
/* Ghidra symbol: FUN_007e6bb0 */


undefined1
FUN_007e6bb0(longlong param_1,undefined8 param_2,ushort param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_31;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if ((param_3 & 0x10) == 0) {
    lVar3 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x80),param_2,1);
    if ((lVar3 != 0) && (iVar1 = FUN_007e2ef0(lVar3), param_4 < iVar1)) {
      lVar3 = FUN_007e2f10(lVar3,param_4);
    }
  }
  else {
    uVar2 = thunk_FUN_03ecce03(param_2,param_4);
    lVar3 = FUN_007e5b00(*(undefined8 *)(param_1 + 0x80),uVar2,1);
  }
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x78) == 0)) {
    local_31 = 0;
  }
  else {
    FUN_00416780(local_20,**(undefined2 **)(lVar3 + 0x78));
    FUN_00416780(&local_28,param_5);
    iVar1 = FUN_0043e6d0(local_20[0],local_28);
    if ((iVar1 == 0) && (FUN_007e8e80(&local_30,*(undefined8 *)(lVar3 + 0x78)), local_30 == 0)) {
      local_31 = 1;
    }
    else {
      local_31 = 0;
    }
  }
  FUN_00414560(&local_30,3);
  return local_31;
}

