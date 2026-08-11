/* Ghidra address: 005c7350 */
/* Ghidra symbol: FUN_005c7350 */


void FUN_005c7350(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined1 *local_58;
  undefined1 local_50 [48];
  longlong *local_20 [2];
  
  local_70 = auStack_98;
  local_20[0] = (longlong *)0x0;
  FUN_00417580(local_50,&DAT_005bc4e0);
  FUN_0041b800(local_20);
  (**(code **)(*param_3 + 0x20))(param_3,local_20);
  local_res10 = param_2;
  while( true ) {
    cVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0]);
    if (cVar1 == '\0') break;
    (**(code **)(*local_20[0] + 0x30))(local_20[0],local_50);
    local_58 = local_50;
    FUN_0059a060(param_1 + 8,local_res10,local_58);
    local_res10 = local_res10 + 1;
  }
  FUN_0041b800(local_20);
  FUN_00417740(local_50,&DAT_005bc4e0);
  FUN_0041b800(local_20);
  return;
}

