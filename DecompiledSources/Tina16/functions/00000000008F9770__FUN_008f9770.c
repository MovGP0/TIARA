/* Ghidra address: 008f9770 */
/* Ghidra symbol: FUN_008f9770 */


undefined8 * FUN_008f9770(longlong *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02005528);
    uVar1 = FUN_0044d490(&PTR_FUN_00471c70,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  uVar2 = (uint)((int)param_1[2] - (int)param_1[3]) >> 1;
  if ((int)param_3 < (int)uVar2) {
    uVar2 = param_3;
  }
  FUN_00416660(param_2,uVar2);
  (**(code **)(*param_1 + 0x18))(param_1,*param_2,uVar2 * 2);
  FUN_00414480(local_20);
  return param_2;
}

