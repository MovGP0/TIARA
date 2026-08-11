/* Ghidra address: 008f9250 */
/* Ghidra symbol: FUN_008f9250 */


void FUN_008f9250(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0xc) <= param_2)) {
    FUN_0041ddd0(local_20,PTR_PTR_02005320);
    local_28 = 0;
    local_30[0] = param_2;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_20[0],local_30,0);
    FUN_004134c0(uVar1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined8 *)(param_1[3] + 8 + (longlong)param_2 * 0x10) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00414480(local_20);
  return;
}

