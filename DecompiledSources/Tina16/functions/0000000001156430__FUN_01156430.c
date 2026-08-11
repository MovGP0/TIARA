/* Ghidra address: 01156430 */
/* Ghidra symbol: FUN_01156430 */


void FUN_01156430(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00441640(&local_28,local_res8);
  cVar1 = FUN_00440b00(local_28,1);
  if (cVar1 != '\0') {
    local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res8,0xff00);
    FUN_01ae1660(local_res10);
    FUN_01156070(local_10,local_res10);
    FUN_00410f20(local_10);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_res8);
  return;
}

