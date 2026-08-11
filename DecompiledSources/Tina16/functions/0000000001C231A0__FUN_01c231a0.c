/* Ghidra address: 01c231a0 */
/* Ghidra symbol: FUN_01c231a0 */


void FUN_01c231a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_68 [9];
  
  puVar3 = local_68;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004179d0(local_68,&DAT_01c21008);
  uVar1 = FUN_00418560(0x40,&DAT_01c21008);
  FUN_00417c40(uVar1,local_68,&DAT_01c21008);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x498),uVar1);
  FUN_00417740(local_68,&DAT_01c21008);
  return;
}

