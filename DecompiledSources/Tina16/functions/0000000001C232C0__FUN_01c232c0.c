/* Ghidra address: 01c232c0 */
/* Ghidra symbol: FUN_01c232c0 */


void FUN_01c232c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_58 [7];
  
  puVar3 = local_58;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004179d0(local_58,&DAT_01c210d0);
  uVar1 = FUN_00418560(0x30,&DAT_01c210d0);
  FUN_00417c40(uVar1,local_58,&DAT_01c210d0);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x4a0),uVar1);
  FUN_00417740(local_58,&DAT_01c210d0);
  return;
}

