/* Ghidra address: 0082d170 */
/* Ghidra symbol: FUN_0082d170 */


void FUN_0082d170(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_30 [3];
  undefined4 local_24;
  longlong *local_20 [2];
  
  local_40 = auStack_68;
  local_20[0] = (longlong *)0x0;
  FUN_0041b800(local_20);
  (**(code **)(*param_3 + 0x20))(param_3,local_20);
  local_res10 = param_2;
  while( true ) {
    cVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0]);
    if (cVar1 == '\0') break;
    local_30[0] = (**(code **)(*local_20[0] + 0x30))(local_20[0]);
    local_24 = local_30[0];
    FUN_00599e90(param_1 + 8,local_res10,local_30);
    local_res10 = local_res10 + 1;
  }
  FUN_0041b800(local_20);
  FUN_0041b800(local_20);
  return;
}

