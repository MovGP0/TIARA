/* Ghidra address: 00873ec0 */
/* Ghidra symbol: FUN_00873ec0 */


int FUN_00873ec0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined2 *param_4,
                int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 1;
  iVar2 = param_5;
  if (param_5 - 1U < 0x80000000) {
    do {
      *param_4 = CONCAT11(*param_2,*puVar1);
      param_2 = param_2 + 2;
      puVar1 = puVar1 + 2;
      param_4 = param_4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_5;
}

