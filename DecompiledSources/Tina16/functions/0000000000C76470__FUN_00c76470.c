/* Ghidra address: 00c76470 */
/* Ghidra symbol: FUN_00c76470 */


undefined8 FUN_00c76470(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  
  thunk_FUN_03e49910(param_1,&local_28);
  local_30 = local_28;
  local_2c = local_24;
  uVar2 = thunk_FUN_03de17fb(param_1);
  thunk_FUN_0417e313(uVar2,&local_30);
  iVar1 = thunk_FUN_0410f747(8);
  thunk_FUN_041cc6e2(param_1,0,local_30 + param_2 + iVar1,local_2c,0,0,0xd);
  return 0xffffffff;
}

