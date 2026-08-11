/* Ghidra address: 00a3dc10 */
/* Ghidra symbol: FUN_00a3dc10 */


undefined1
FUN_00a3dc10(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
            undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 *local_30;
  undefined1 local_19;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_78;
  FUN_00a3da10(param_1,param_3,param_5);
  local_10 = 0;
  local_18 = thunk_FUN_04137b5f(0);
  if (param_2 != 0) {
    local_10 = thunk_FUN_0418f5de(local_18,param_2,0);
    thunk_FUN_03a5de49(local_18);
  }
  uVar2 = (int)*(uint *)(param_3 + 8) >> 0x1f;
  local_48 = 0;
  local_58 = param_4;
  local_50 = param_3;
  iVar1 = thunk_FUN_0416e0b3(local_18,param_1,0,(*(uint *)(param_3 + 8) ^ uVar2) - uVar2);
  local_19 = iVar1 != 0;
  if (local_10 != 0) {
    thunk_FUN_0418f5de(local_18,local_10,0);
  }
  thunk_FUN_041a2fd8(local_18);
  return local_19;
}

