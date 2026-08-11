/* Ghidra address: 01038e30 */
/* Ghidra symbol: FUN_01038e30 */


undefined4 FUN_01038e30(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_4b0 [97];
  undefined4 local_1a8;
  
  puVar2 = local_4b0;
  for (lVar1 = 0x93; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_4b0,&DAT_00f68330);
  FUN_00417740(local_4b0,&DAT_00f68330);
  return local_1a8;
}

