/* Ghidra address: 019b0a30 */
/* Ghidra symbol: FUN_019b0a30 */


void FUN_019b0a30(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 *local_48;
  undefined1 local_40 [32];
  longlong *local_20 [2];
  
  local_60 = auStack_88;
  local_20[0] = (longlong *)0x0;
  FUN_00417580(local_40,&DAT_01984be0);
  FUN_0041b800(local_20);
  (**(code **)(*param_3 + 0x20))(param_3,local_20);
  local_res10 = param_2;
  while( true ) {
    cVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0]);
    if (cVar1 == '\0') break;
    (**(code **)(*local_20[0] + 0x30))(local_20[0],local_40);
    local_48 = local_40;
    FUN_0059a060(param_1 + 8,local_res10,local_48);
    local_res10 = local_res10 + 1;
  }
  FUN_0041b800(local_20);
  FUN_00417740(local_40,&DAT_01984be0);
  FUN_0041b800(local_20);
  return;
}

