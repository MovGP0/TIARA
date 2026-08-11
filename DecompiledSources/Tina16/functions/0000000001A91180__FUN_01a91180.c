/* Ghidra address: 01a91180 */
/* Ghidra symbol: FUN_01a91180 */


undefined8 FUN_01a91180(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = FUN_01a92da0(&PTR_FUN_01a94970,1);
  local_20 = (longlong *)(**(code **)*param_1)(param_1);
  while( true ) {
    cVar1 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar1 == '\0') break;
    local_30 = (**(code **)*local_20)(local_20);
    FUN_01a93110(local_28,&local_30);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_01a93b20(local_28,param_2);
  FUN_00410f20(local_28);
  return param_2;
}

