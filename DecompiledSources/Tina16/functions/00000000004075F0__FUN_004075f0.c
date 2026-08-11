/* Ghidra address: 004075f0 */
/* Ghidra symbol: FUN_004075f0 */


longlong FUN_004075f0(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_00407550();
  puVar3 = (undefined8 *)thunk_FUN_041b4712(0,0x13fff0,0x1000,4);
  puVar1 = DAT_02006b90;
  if (puVar3 == (undefined8 *)0x0) {
    DAT_02006bb8 = 0;
    lVar4 = 0;
  }
  else {
    *puVar3 = &DAT_02006b88;
    puVar2 = puVar3;
    puVar3[1] = DAT_02006b90;
    DAT_02006b90 = puVar2;
    *puVar1 = puVar3;
    puVar3[0x27ffd] = 2;
    DAT_02006bb8 = 0x13ffd0 - param_1;
    lVar4 = (longlong)puVar3 + (0x13fff0 - (ulonglong)param_1);
    DAT_02006bb0 = lVar4;
    *(ulonglong *)(lVar4 + -8) = (ulonglong)(param_1 | 2);
  }
  return lVar4;
}

