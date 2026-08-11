/* Ghidra address: 01635560 */
/* Ghidra symbol: FUN_01635560 */


void FUN_01635560(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0xd8 + (longlong)param_2 * 8)
                       ,L"<not found>");
  if (iVar1 != 0) {
    FUN_01613110(0);
  }
  FUN_00414ad0(*(longlong *)(param_1 + 0x98) + 0xd8 + (longlong)param_2 * 8,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

