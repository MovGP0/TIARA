/* Ghidra address: 006df730 */
/* Ghidra symbol: FUN_006df730 */


void FUN_006df730(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_006dfe80(param_1);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006b6f28);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    local_18 = param_2;
    FUN_006ded30(param_1);
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_006dfcd0(local_18,local_10);
    FUN_004b6dc0(local_10,0);
    FUN_006dfb20(param_1,local_10);
    FUN_00410f20(local_10);
  }
  return;
}

