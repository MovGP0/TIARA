/* Ghidra address: 00602c60 */
/* Ghidra symbol: FUN_00602c60 */


void FUN_00602c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  local_20 = 0;
  puVar1 = (undefined8 *)FUN_00418560(0x20,&DAT_006023f8);
  FUN_0043e600(&local_20,param_2);
  FUN_00414ad0(puVar1 + 1,local_20);
  *puVar1 = param_5;
  FUN_00414ad0(puVar1 + 2,param_3);
  *(undefined4 *)(puVar1 + 3) = param_4;
  FUN_004ae7e0(param_1,puVar1);
  FUN_00414480(&local_20);
  return;
}

