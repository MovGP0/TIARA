/* Ghidra address: 00897ac0 */
/* Ghidra symbol: FUN_00897ac0 */


undefined8 FUN_00897ac0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined1 *local_30;
  int local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_78;
  local_18 = 0;
  uVar2 = FUN_00416740(param_2);
  local_58 = CONCAT44(local_58._4_4_,3);
  local_50 = CONCAT44(local_50._4_4_,0x8000080);
  local_48 = 0;
  local_10 = thunk_FUN_041ac412(uVar2,0x80000000,1,0);
  if (local_10 == -1) {
    return local_18;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = local_48 & 0xffffffff00000000;
  iVar1 = (**(code **)PTR_PTR_02003758)(param_1,local_10,0,0);
  if (iVar1 != 0) {
    if (DAT_01e23560 == (code *)0x0) {
      local_20 = thunk_FUN_0414a8e7(local_10,&uStack_1c);
      if ((local_20 == -1) && (iVar1 = thunk_FUN_03ce33a6(), iVar1 != 0)) goto LAB_00897bb6;
    }
    else {
      iVar1 = (*DAT_01e23560)(local_10,&local_20);
      if (iVar1 == 0) {
LAB_00897bb6:
        FUN_00897bd0(0,local_30);
        return local_18;
      }
    }
    local_18 = CONCAT44(uStack_1c,local_20);
  }
  thunk_FUN_041d2921(local_10);
  return local_18;
}

