/* Ghidra address: 01d0f4c0 */
/* Ghidra symbol: FUN_01d0f4c0 */


undefined8 * FUN_01d0f4c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)FUN_004095c0(0x23a);
  puVar4 = param_1;
  puVar5 = puVar1;
  for (lVar3 = 0x47; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
  if (*(longlong *)((longlong)param_1 + 0x11f) != 0) {
    uVar2 = FUN_01d0efe0(&DAT_01d0ae90,1);
    *(undefined8 *)((longlong)puVar1 + 0x11f) = uVar2;
    FUN_01d0f130(uVar2,*(undefined8 *)((longlong)param_1 + 0x11f));
  }
  return puVar1;
}

