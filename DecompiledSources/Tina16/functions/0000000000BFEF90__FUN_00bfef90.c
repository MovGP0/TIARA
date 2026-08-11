/* Ghidra address: 00bfef90 */
/* Ghidra symbol: FUN_00bfef90 */


void FUN_00bfef90(longlong *param_1)

{
  char cVar1;
  undefined8 local_20;
  
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)param_1[0xbf] + 0x58))((longlong *)param_1[0xbf]);
  }
  if ((char)param_1[0x93] != '\0') {
    FUN_00be19c0(param_1[0x95]);
  }
  FUN_00c08bb0(param_1);
  FUN_0040d200(param_1 + 0xc5,0x10,0);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_20 = FUN_00bb7750(1,1);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_20);
  FUN_00bfcc50(param_1,1);
  FUN_00bfb1b0(param_1,1);
  *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | 1;
  return;
}

