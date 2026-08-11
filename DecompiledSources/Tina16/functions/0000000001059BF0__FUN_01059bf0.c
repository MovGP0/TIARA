/* Ghidra address: 01059bf0 */
/* Ghidra symbol: FUN_01059bf0 */


undefined8 FUN_01059bf0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_70 [2];
  undefined8 local_60 [3];
  undefined4 local_48;
  
  local_70[0] = 0;
  puVar2 = local_60;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_60,&DAT_010571b8);
  FUN_0043f780(local_70,local_48);
  FUN_00416ba0(param_1,local_70[0],L"000000L");
  FUN_00414480(local_70);
  FUN_00417740(local_60,&DAT_010571b8);
  return param_1;
}

