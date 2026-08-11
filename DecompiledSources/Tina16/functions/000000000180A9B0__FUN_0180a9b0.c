/* Ghidra address: 0180a9b0 */
/* Ghidra symbol: FUN_0180a9b0 */


void FUN_0180a9b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  cVar1 = FUN_00440a20(param_2,1);
  if (cVar1 != '\0') {
    local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,param_2,0x40);
    FUN_0180aa30(param_1,local_10);
    FUN_00410f20(local_10);
  }
  return;
}

