/* Ghidra address: 01b86a40 */
/* Ghidra symbol: FUN_01b86a40 */


undefined8 FUN_01b86a40(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28[0] = 0;
  local_18 = 0;
  FUN_00414480(param_2);
  iVar1 = FUN_004170c0(L"jumper",*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),1);
  if (iVar1 < 1) {
    local_18 = FUN_01b87150(param_1,0);
  }
  else {
    FUN_01b87150(param_1,1);
    local_18 = FUN_01b87150(param_1,2);
  }
  FUN_01a24fd0(*(undefined8 *)(param_1 + 8));
  if ((*param_2 != 0) && (*(int *)(param_1 + 0x340) == 1)) {
    FUN_00414b50(local_28,*param_2);
    FUN_0043e1a0(&local_38,local_28[0]);
    iVar1 = FUN_004170c0(&LAB_01b86c20,local_38,1);
    if (iVar1 == 1) {
      FUN_01b81be0(param_1,0x3fb999999999999a);
    }
    local_18 = FUN_01b86c30(param_1,local_28[0]);
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_28);
  return local_18;
}

