/* Ghidra address: 00c47900 */
/* Ghidra symbol: FUN_00c47900 */


undefined8 FUN_00c47900(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_400 [125];
  
  if (param_2 == 0) {
    param_2 = thunk_FUN_03ce33a6();
  }
  puVar2 = local_400;
  for (lVar1 = 0x7d; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (param_2 != 0) {
    thunk_FUN_04094731(0x1000,0,param_2,0,local_400,500,0);
    FUN_00416830(param_1,local_400,500);
  }
  return param_1;
}

