/* Ghidra address: 00f8b820 */
/* Ghidra symbol: FUN_00f8b820 */


void FUN_00f8b820(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00f8bc30(param_1,local_30,param_2);
  FUN_00416cd0(local_20,3,*(undefined8 *)(param_1 + 0x3508),local_30[0],L".lst");
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    lVar2 = FUN_00f8b910(param_1,param_2);
    (**(code **)(**(longlong **)(lVar2 + 0x48) + 0xd8))(*(longlong **)(lVar2 + 0x48),local_20[0]);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

