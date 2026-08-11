/* Ghidra address: 011aa450 */
/* Ghidra symbol: FUN_011aa450 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011aa450(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  DAT_02107190 = *(undefined8 *)(param_1 + 0x6d8);
  DAT_02107198 = *(undefined8 *)(param_1 + 0x6e0);
  _DAT_021071a0 = *(undefined8 *)(param_1 + 0x6e8);
  _DAT_021071a8 = *(undefined8 *)(param_1 + 0x6f0);
  _DAT_021071b0 = *(undefined8 *)(param_1 + 0x6f8);
  _DAT_021071b8 = *(undefined8 *)(param_1 + 0x700);
  _DAT_021071c0 = *(undefined8 *)(param_1 + 0x708);
  _DAT_021071c8 = *(undefined8 *)(param_1 + 0x710);
  _DAT_021071d0 = *(undefined8 *)(param_1 + 0x718);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),uVar1);
  iVar2 = 0;
  puVar3 = &DAT_02107190;
  do {
    if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < iVar2) {
      FUN_0064dbe0(*puVar3,0);
    }
    else {
      FUN_0064dbe0(*puVar3,1);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 9);
  return;
}

