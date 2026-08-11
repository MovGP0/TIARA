/* Ghidra address: 012be1f0 */
/* Ghidra symbol: FUN_012be1f0 */


void FUN_012be1f0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1);
    FUN_00418590(uVar2,&DAT_017feae8);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

