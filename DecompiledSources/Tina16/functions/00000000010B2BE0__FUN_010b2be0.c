/* Ghidra address: 010b2be0 */
/* Ghidra symbol: FUN_010b2be0 */


void FUN_010b2be0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_20;
  
  local_20 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  lVar2 = FUN_010ae9e0(&DAT_010a8e80,1);
  cVar1 = FUN_00440a20(local_res10,1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x20) + 0xd8))(*(longlong **)(lVar2 + 0x20),local_res10);
  }
  if (param_4 != '\0') {
    FUN_0160f060(&local_20,local_res18);
    FUN_00414b50(local_res18,local_20);
  }
  FUN_00414ad0(lVar2 + 0x30,local_res18[0]);
  if (-1 < param_5) {
    *(int *)(lVar2 + 0x4c) = param_5;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),lVar2);
  FUN_00414480(&local_20);
  FUN_00414560(&local_res10,2);
  return;
}

