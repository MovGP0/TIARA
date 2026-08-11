/* Ghidra address: 0157e390 */
/* Ghidra symbol: FUN_0157e390 */


void FUN_0157e390(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(char *)(param_1 + 9) == '\0') {
    uVar1 = (**(code **)*param_1)(param_1);
  }
  else {
    uVar1 = FUN_0045ae90();
  }
  FUN_00459ca0(uVar1,&local_10,local_res10[0]);
  FUN_004194b0(param_1 + 7,local_10,&DAT_00406578);
  if (*(byte *)(param_1 + 1) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 1) & 0x1f) &
            0xcU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02004a30);
    FUN_004134c0(uVar1);
  }
  lVar2 = 0;
  if (param_1[7] != 0) {
    lVar2 = *(longlong *)(param_1[7] + -8);
  }
  if (0xffff < lVar2) {
    FUN_00419260(param_1 + 7,&DAT_00406578,1,0xffff);
  }
  FUN_00419430(&local_10,&DAT_00406578);
  FUN_00414480(local_res10);
  return;
}

