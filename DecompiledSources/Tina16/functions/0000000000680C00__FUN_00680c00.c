/* Ghidra address: 00680c00 */
/* Ghidra symbol: FUN_00680c00 */


undefined8 * FUN_00680c00(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_18;
  int local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  local_14 = (**(code **)(*param_1 + 0x278))(param_1);
  local_18 = (**(code **)(*param_1 + 0x270))(param_1);
  FUN_00414740(param_2,0,local_18);
  if (local_18 != 0) {
    iVar1 = FUN_0064dc90(param_1);
    local_10 = FUN_00442b60(iVar1 + 1);
    uVar2 = FUN_00442b70(local_10);
    FUN_0064dcb0(param_1,local_10,uVar2);
    FUN_00409a70(local_10 + (longlong)local_14 * 2,*param_2,(longlong)(local_18 * 2));
    FUN_00442c30(local_10);
  }
  return param_2;
}

