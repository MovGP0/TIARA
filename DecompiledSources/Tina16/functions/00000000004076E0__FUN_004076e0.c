/* Ghidra address: 004076e0 */
/* Ghidra symbol: FUN_004076e0 */


undefined8 * FUN_004076e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = param_1 + 0x10027U & 0xffffffffffff0000;
  puVar3 = (undefined8 *)thunk_FUN_041b4712(0,uVar4,0x101000,4);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = param_1;
    puVar3[3] = uVar4 | 4;
    FUN_00407690();
    puVar1 = DAT_0200ac50;
    *puVar3 = &DAT_0200ac48;
    puVar2 = puVar3;
    puVar3[1] = DAT_0200ac50;
    DAT_0200ac50 = puVar2;
    *puVar1 = puVar3;
    DAT_0200ac40 = 0;
    puVar3 = puVar3 + 4;
  }
  return puVar3;
}

