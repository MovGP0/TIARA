/* Ghidra address: 01d07250 */
/* Ghidra symbol: FUN_01d07250 */


void FUN_01d07250(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_01d07150(param_1,param_2);
  if (puVar1 == (undefined2 *)0x0) {
    puVar1 = (undefined2 *)FUN_004095c0(0x18);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3f0),puVar1);
  }
  *puVar1 = (short)param_2;
  *(undefined4 *)(puVar1 + 4) = param_3;
  *(undefined4 *)(puVar1 + 2) = param_4;
  *(undefined8 *)(puVar1 + 8) = param_5;
  return;
}

