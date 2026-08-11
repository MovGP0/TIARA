/* Ghidra address: 0099e8b0 */
/* Ghidra symbol: FUN_0099e8b0 */


void FUN_0099e8b0(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 *local_38;
  undefined1 local_30 [16];
  longlong *local_20 [2];
  
  local_50 = auStack_78;
  local_20[0] = (longlong *)0x0;
  FUN_0041b800(local_20);
  (**(code **)(*param_3 + 0x20))(param_3,local_20);
  local_res10 = param_2;
  while( true ) {
    cVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0]);
    if (cVar1 == '\0') break;
    (**(code **)(*local_20[0] + 0x30))(local_20[0],local_30);
    local_38 = local_30;
    FUN_0059a1a0(param_1 + 8,local_res10,local_38);
    local_res10 = local_res10 + 1;
  }
  FUN_0041b800(local_20);
  FUN_0041b800(local_20);
  return;
}

