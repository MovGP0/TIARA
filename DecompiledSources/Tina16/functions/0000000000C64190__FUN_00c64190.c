/* Ghidra address: 00c64190 */
/* Ghidra symbol: FUN_00c64190 */


void FUN_00c64190(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  thunk_FUN_03e49910(param_1,&local_38);
  iVar1 = thunk_FUN_0410f747(0);
  iVar2 = thunk_FUN_0410f747(1);
  FUN_00498350(&local_48,(longlong)((iVar1 - (int)local_30) + (int)local_38) / 2 & 0xffffffff,
               (longlong)((iVar2 - local_30._4_4_) + local_38._4_4_) / 2 & 0xffffffff,
               (int)local_30 - (int)local_38,local_30._4_4_ - local_38._4_4_);
  local_38 = local_48;
  local_30 = uStack_40;
  FUN_00c64110(&local_38);
  thunk_FUN_041cc6e2(param_1,0,local_38 & 0xffffffff,local_38._4_4_,0,0,0x1d);
  return;
}

