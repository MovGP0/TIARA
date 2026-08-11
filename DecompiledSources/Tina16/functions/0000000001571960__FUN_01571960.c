/* Ghidra address: 01571960 */
/* Ghidra symbol: FUN_01571960 */


undefined8 FUN_01571960(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    cVar1 = FUN_015fd240(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      FUN_00414ad0(param_2,PTR_u_Low_Tina_Reserved_Signal_01f649a8);
      goto code_r0x01571a11;
    }
  }
  if ((*(int *)(param_1 + 0x30) < 1) || (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_01571a60(param_1,param_2);
  }
  else {
    FUN_01571a60(param_1,&local_10);
    FUN_01d43440(&local_18,*(undefined4 *)(param_1 + 0x30));
    FUN_00416cd0(param_2,3,local_10,&LAB_01571a58,local_18);
  }
code_r0x01571a11:
  FUN_00414560(&local_18,2);
  return param_2;
}

