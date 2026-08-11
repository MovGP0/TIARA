/* Ghidra address: 00c34730 */
/* Ghidra symbol: FUN_00c34730 */


undefined1 FUN_00c34730(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_17 [6];
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_30 = 0;
  local_10 = FUN_004b6da0(param_2);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_17,6);
  if (iVar1 == 6) {
    FUN_00416800(&local_30,local_17,3);
    FUN_0043e130(&local_28,local_30);
    iVar1 = FUN_00416db0(local_28,&DAT_00c34838);
    if (iVar1 == 0) {
      local_11 = 1;
      goto LAB_00c347ba;
    }
  }
  local_11 = 0;
LAB_00c347ba:
  FUN_004b6dc0(param_2,local_10);
  FUN_00414560(&local_30,2);
  return local_11;
}

