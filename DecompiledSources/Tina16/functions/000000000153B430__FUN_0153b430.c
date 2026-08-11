/* Ghidra address: 0153b430 */
/* Ghidra symbol: FUN_0153b430 */


void FUN_0153b430(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4,
                 longlong param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02004010;
  if (param_5 != 0) {
    puVar1 = (undefined *)(param_5 + 0x492);
  }
  if ((puVar1[0x813] != '\x02') && (puVar1[0x813] != '\x03')) {
    FUN_0153a8e0(param_5);
  }
  *(undefined8 *)(puVar1 + 0x38d) = param_1;
  *(undefined8 *)(puVar1 + 0x395) = param_2;
  *(undefined2 *)(puVar1 + 0x38b) = param_3;
  puVar1[0x39d] = param_4;
  return;
}

