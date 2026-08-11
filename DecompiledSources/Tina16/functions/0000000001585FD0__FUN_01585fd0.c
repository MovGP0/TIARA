/* Ghidra address: 01585fd0 */
/* Ghidra symbol: FUN_01585fd0 */


void FUN_01585fd0(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  undefined1 *local_70;
  undefined1 local_62 [66];
  longlong *local_20 [2];
  
  local_80 = auStack_a8;
  local_20[0] = (longlong *)0x0;
  FUN_00417580(local_62,&DAT_015764a8);
  FUN_0041b800(local_20);
  (**(code **)(*param_3 + 0x20))(param_3,local_20);
  local_res10 = param_2;
  while( true ) {
    cVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0]);
    if (cVar1 == '\0') break;
    (**(code **)(*local_20[0] + 0x30))(local_20[0],local_62);
    local_70 = local_62;
    FUN_0059a060(param_1 + 8,local_res10,local_70);
    local_res10 = local_res10 + 1;
  }
  FUN_0041b800(local_20);
  FUN_00417740(local_62,&DAT_015764a8);
  FUN_0041b800(local_20);
  return;
}

