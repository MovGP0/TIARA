/* Ghidra address: 00fc2500 */
/* Ghidra symbol: FUN_00fc2500 */


void FUN_00fc2500(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_4b0 [147];
  
  puVar2 = local_4b0;
  for (lVar1 = 0x93; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_4b0,&DAT_00f68330);
  FUN_00414610(param_5);
  FUN_00417c40(param_1 + 0x758,local_4b0,&DAT_00f68330);
  *(undefined8 *)(param_1 + 0xbf0) = param_3;
  *(undefined4 *)(param_1 + 0xbf8) = param_4;
  FUN_00414ad0(param_1 + 0xc00,param_5);
  FUN_00417740(local_4b0,&DAT_00f68330);
  FUN_00414480(&param_5);
  return;
}

