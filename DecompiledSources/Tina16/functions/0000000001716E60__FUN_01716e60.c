/* Ghidra address: 01716e60 */
/* Ghidra symbol: FUN_01716e60 */


void FUN_01716e60(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  (**(code **)(*param_2 + 0x90))(param_2);
  if (param_5 == '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                      (*(longlong **)(param_1 + 0x38),local_res20);
    if (-1 < iVar1) {
      plVar2 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                         (*(longlong **)(param_1 + 0x38),iVar1);
      iVar1 = (**(code **)(*plVar2 + 0xb8))(plVar2,local_res18);
      if (-1 < iVar1) {
        FUN_004b5390(plVar2,local_20,iVar1);
        FUN_004b4b10(param_2,local_20[0]);
      }
    }
  }
  FUN_00414480(local_20);
  FUN_00414560(&local_res18,2);
  return;
}

