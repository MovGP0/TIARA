/* Ghidra address: 00c63fe0 */
/* Ghidra symbol: FUN_00c63fe0 */


undefined8 FUN_00c63fe0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  thunk_FUN_03e49910(param_1,&local_38);
  local_40 = local_38;
  local_3c = local_34;
  lVar2 = thunk_FUN_03de17fb(param_1);
  thunk_FUN_0417e313(lVar2,&local_40);
  if (lVar2 == DAT_02019cf0) {
    iVar1 = thunk_FUN_0410f747(8);
    thunk_FUN_041cc6e2(param_1,0,local_40 + param_2 + iVar1,local_3c,0,0,5);
  }
  thunk_FUN_041543e0(param_1,0,0,0);
  return 0xffffffff;
}

