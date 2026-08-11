/* Ghidra address: 005c2d60 */
/* Ghidra symbol: FUN_005c2d60 */


undefined8 FUN_005c2d60(undefined8 param_1,char param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  ushort local_58 [4];
  undefined1 local_50 [48];
  longlong *local_20;
  
  local_60 = auStack_88;
  FUN_00417580(local_58,&DAT_005bc868);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_005c2c40(local_res8,0,0,0);
  local_20 = (longlong *)(**(code **)*param_3)(param_3);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    (**(code **)*local_20)(local_20,local_58);
    FUN_005c3560(local_res8,local_58[0],local_50);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00417740(local_58,&DAT_005bc868);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

