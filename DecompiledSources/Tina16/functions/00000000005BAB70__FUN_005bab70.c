/* Ghidra address: 005bab70 */
/* Ghidra symbol: FUN_005bab70 */


undefined8 FUN_005bab70(ulonglong *param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  uVar2 = *param_1 - *param_2;
  if ((*param_1 >> 0x3f != *param_2 >> 0x3f) && (*param_1 >> 0x3f != uVar2 >> 0x3f)) {
    FUN_0041ddd0(local_20,PTR_PTR_02001750);
    uVar1 = FUN_0044d490(&PTR_FUN_00434000,1,local_20[0]);
    uVar2 = FUN_004134c0(uVar1);
  }
  FUN_005ba1c0(&local_10,uVar2);
  FUN_00414480(local_20);
  return local_10;
}

