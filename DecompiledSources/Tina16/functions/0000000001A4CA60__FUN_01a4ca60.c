/* Ghidra address: 01a4ca60 */
/* Ghidra symbol: FUN_01a4ca60 */


bool FUN_01a4ca60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  bool local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_30 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_31 = false;
  cVar1 = FUN_01b22620(*(undefined8 *)(param_1 + 0x910),local_res10,local_1c,0);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x910) + 0x18))
              (*(longlong **)(param_1 + 0x910),&local_28,local_1c[0]);
    FUN_0043e1a0(&local_30,local_28);
    iVar2 = FUN_004170c0(local_res18,local_30,1);
    local_31 = 0 < iVar2;
  }
  FUN_00414560(&local_30,2);
  FUN_00414560(&local_res10,2);
  return local_31;
}

