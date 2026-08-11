/* Ghidra address: 005dbcf0 */
/* Ghidra symbol: FUN_005dbcf0 */


undefined4 FUN_005dbcf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  FUN_00417580(local_18,&DAT_005d3e40);
  iVar1 = FUN_005db820(param_1,param_2,local_18);
  if (iVar1 < 0) {
    local_1c = 0xffffffff;
  }
  else {
    local_1c = local_10;
  }
  FUN_00417740(local_18,&DAT_005d3e40);
  return local_1c;
}

