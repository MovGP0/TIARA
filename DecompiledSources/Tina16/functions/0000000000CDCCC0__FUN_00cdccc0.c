/* Ghidra address: 00cdccc0 */
/* Ghidra symbol: FUN_00cdccc0 */


void FUN_00cdccc0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00882a80(param_1);
  puVar2 = &DAT_02019fd4;
  puVar3 = (undefined8 *)(param_1 + 0x88);
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
  *(undefined2 *)((longlong)puVar3 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
  *(undefined1 *)((longlong)puVar3 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
  FUN_00877e10(&local_20,PTR_u_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_01eb01a0,0);
  FUN_004194b0(param_1 + 0x80,local_20,&DAT_0086e978);
  *(undefined2 *)(param_1 + 0x108) = 0x3d;
  FUN_00419430(&local_20,&DAT_0086e978);
  return;
}

