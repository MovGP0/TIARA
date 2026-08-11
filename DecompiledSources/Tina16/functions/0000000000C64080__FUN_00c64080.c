/* Ghidra address: 00c64080 */
/* Ghidra symbol: FUN_00c64080 */


undefined8 FUN_00c64080(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
  thunk_FUN_03e49910(param_1,&local_38);
  local_40 = local_38;
  local_3c = local_34;
  lVar2 = thunk_FUN_03de17fb(param_1);
  thunk_FUN_0417e313(lVar2,&local_40);
  if (lVar2 == DAT_02019cf0) {
    iVar1 = thunk_FUN_0410f747(7);
    thunk_FUN_041cc6e2(param_1,0,local_40,local_3c + param_2 + iVar1,0,0,5);
  }
  return 0xffffffff;
}

