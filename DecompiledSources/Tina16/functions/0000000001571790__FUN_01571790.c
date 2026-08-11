/* Ghidra address: 01571790 */
/* Ghidra symbol: FUN_01571790 */


undefined8 FUN_01571790(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    cVar1 = FUN_015fd240(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      FUN_00414ad0(param_2,PTR_u_Low_Tina_Reserved_Signal_01f649a8);
      goto code_r0x0157180c;
    }
  }
  FUN_01d43440(&local_10,*(undefined4 *)(param_1 + 0x30));
  FUN_00416cd0(param_2,3,&DAT_01571844,local_10,&LAB_01571854);
code_r0x0157180c:
  FUN_00414480(&local_10);
  return param_2;
}

