/* Ghidra address: 006eb6d0 */
/* Ghidra symbol: FUN_006eb6d0 */


void FUN_006eb6d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_20;
  
  local_20 = 0;
  puVar1 = (undefined8 *)FUN_00418560(0x10,&DAT_006bdbc8);
  FUN_0043e600(&local_20,param_1);
  FUN_00414ad0(puVar1 + 1,local_20);
  *puVar1 = param_2;
  FUN_004ae7e0(DAT_02012460,puVar1);
  FUN_00414480(&local_20);
  return;
}

