/* Ghidra address: 007d7790 */
/* Ghidra symbol: FUN_007d7790 */


void FUN_007d7790(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d3710);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    local_28 = param_2;
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*param_1 + 0xb8))(param_1,local_20);
    FUN_004b6dc0(local_20,0);
    (**(code **)(*local_28 + 0xb0))(local_28,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

