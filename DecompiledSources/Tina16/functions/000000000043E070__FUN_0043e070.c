/* Ghidra address: 0043e070 */
/* Ghidra symbol: FUN_0043e070 */


void FUN_0043e070(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  puVar3 = DAT_01dbfb48;
  puVar1 = DAT_01dbfb48 + 1;
  DAT_01dbfb48 = (undefined8 *)*DAT_01dbfb48;
  *(undefined8 *)PTR_PTR_02001588 = *puVar1;
  pcVar2 = (code *)puVar3[2];
  FUN_004095f0(puVar3);
  (*pcVar2)();
  return;
}

