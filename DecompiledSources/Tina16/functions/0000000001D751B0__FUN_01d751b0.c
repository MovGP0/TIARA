/* Ghidra address: 01d751b0 */
/* Ghidra symbol: FUN_01d751b0 */


void FUN_01d751b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *local_38;
  char local_2a;
  char local_29 [9];
  
  puVar2 = (undefined1 *)FUN_00dd1b70(0,&PTR_FUN_01d74ba8);
  local_38 = puVar2;
  uVar1 = FUN_016ebc30(param_1,1);
  *puVar2 = uVar1;
  local_29[0] = '\x01';
  local_2a = '\x0e';
  FUN_01d74ca0(puVar2 + 0x10,&DAT_01fffdfc,9,10,0xc,0xb,0xd,local_29,&local_2a);
  FUN_016e9e20(param_1,local_29[0] + -1);
  FUN_016e9cd0(param_1,local_2a + -0xe);
  FUN_01d74f10(puVar2 + 0x10,param_1,param_2);
  FUN_016e9f40(param_1,FUN_01d75100);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d75190);
  return;
}

