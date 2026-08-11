/* Ghidra address: 00cd8a40 */
/* Ghidra symbol: FUN_00cd8a40 */


void FUN_00cd8a40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_004b3260(param_2);
  local_c = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 <= local_c) break;
    FUN_00cd91c0(param_1,&local_18,local_c);
    FUN_00cd92b0(param_1,&local_20,&local_c);
    local_48 = local_20;
    FUN_00416cd0(&local_38,3,local_18,&LAB_00cd8b78);
    (**(code **)(*param_2 + 0x78))(param_2,local_38);
  }
  FUN_004b3390(param_2);
  FUN_00414480(&local_38);
  FUN_00414560(&local_20,2);
  return;
}

