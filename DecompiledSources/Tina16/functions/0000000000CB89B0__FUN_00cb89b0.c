/* Ghidra address: 00cb89b0 */
/* Ghidra symbol: FUN_00cb89b0 */


void FUN_00cb89b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    FUN_0041ddd0(local_20,PTR_PTR_020057b8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cb48e0,1,local_20[0]);
    FUN_004134c0(uVar1);
  }
  FUN_00cb8470(param_1,&local_10,param_6,param_3,param_4);
  FUN_00c8f010(param_2,local_10,0,0xffffffff);
  FUN_00414480(local_20);
  FUN_00419430(&local_10,&DAT_0086e978);
  return;
}

