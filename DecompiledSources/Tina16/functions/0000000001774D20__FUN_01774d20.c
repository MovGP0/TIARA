/* Ghidra address: 01774d20 */
/* Ghidra symbol: FUN_01774d20 */


void FUN_01774d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_015653d0(*(undefined8 *)(param_1 + 0xd8),&local_10,local_res10);
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_res18);
    FUN_004134c0(uVar2);
  }
  FUN_01773e60(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0xf8),local_10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

