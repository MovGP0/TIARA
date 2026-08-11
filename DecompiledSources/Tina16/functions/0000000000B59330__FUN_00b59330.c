/* Ghidra address: 00b59330 */
/* Ghidra symbol: FUN_00b59330 */


void FUN_00b59330(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_27 [7];
  longlong *local_20;
  
  local_30 = auStack_58;
  cVar1 = FUN_00b59060(param_1,local_27);
  if (cVar1 != '\0') {
    local_20 = (longlong *)FUN_00b3c1b0(&DAT_00b3ad98,1,param_1);
    FUN_00b3c370(local_20,param_2,local_27);
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return;
}

