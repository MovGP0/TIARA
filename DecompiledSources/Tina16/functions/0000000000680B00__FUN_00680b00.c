/* Ghidra address: 00680b00 */
/* Ghidra symbol: FUN_00680b00 */


int FUN_00680b00(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_18;
  int local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  local_18 = (**(code **)(*param_1 + 0x278))(param_1);
  local_14 = (**(code **)(*param_1 + 0x270))(param_1);
  iVar1 = FUN_0064dc90(param_1);
  local_10 = FUN_00442b60(iVar1 + 1);
  uVar2 = FUN_00442b70(local_10);
  FUN_0064dcb0(param_1,local_10,uVar2);
  if (param_3 <= local_14) {
    local_14 = param_3 + -1;
  }
  FUN_00442580(param_2,local_10 + (longlong)local_18 * 2,local_14);
  FUN_00442c30(local_10);
  return local_14;
}

