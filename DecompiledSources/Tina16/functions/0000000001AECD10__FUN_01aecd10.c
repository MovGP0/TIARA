/* Ghidra address: 01aecd10 */
/* Ghidra symbol: FUN_01aecd10 */


void FUN_01aecd10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar4 = (undefined8 *)FUN_004095c0(0x18);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),puVar4);
  return;
}

