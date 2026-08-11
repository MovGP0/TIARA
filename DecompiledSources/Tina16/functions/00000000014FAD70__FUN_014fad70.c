/* Ghidra address: 014fad70 */
/* Ghidra symbol: FUN_014fad70 */


void FUN_014fad70(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  FUN_01d04b50(param_1,local_res10);
  cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_019a45d0();
    uVar2 = FUN_0198d430(uVar2);
    (**(code **)(*(longlong *)param_1[0x33] + 0x68))((longlong *)param_1[0x33],uVar2);
  }
  uVar2 = FUN_019a45d0();
  uVar2 = FUN_0198d430(uVar2);
  FUN_01d04aa0(param_1,uVar2);
  return;
}

