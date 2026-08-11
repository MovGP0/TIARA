/* Ghidra address: 01aa8f10 */
/* Ghidra symbol: FUN_01aa8f10 */


void FUN_01aa8f10(longlong param_1,char param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  *(char *)(param_1 + 0x13898) = param_2;
  if (param_2 != '\0') {
    puVar2 = (undefined2 *)(param_1 + 0x1389a);
    do {
      uVar1 = FUN_01aa8f70(param_1,*param_3);
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != '\0');
  }
  return;
}

