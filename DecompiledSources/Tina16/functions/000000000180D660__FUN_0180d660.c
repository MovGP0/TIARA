/* Ghidra address: 0180d660 */
/* Ghidra symbol: FUN_0180d660 */


void FUN_0180d660(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30 [2];
  int local_1c [3];
  
  local_30[0] = 0;
  local_1c[0] = 1;
  local_40 = param_1;
  local_38 = param_2;
  (**(code **)(*param_2 + 0x90))(param_2);
  while( true ) {
    iVar1 = FUN_00414cb0(local_40);
    if (iVar1 < local_1c[0]) break;
    FUN_0180d580(auStack_68,local_30,local_40,local_1c);
    (**(code **)(*local_38 + 0x78))(local_38,local_30[0]);
  }
  FUN_00414480(local_30);
  return;
}

