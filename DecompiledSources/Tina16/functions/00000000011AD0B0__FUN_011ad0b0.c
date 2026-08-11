/* Ghidra address: 011ad0b0 */
/* Ghidra symbol: FUN_011ad0b0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011ad0b0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  DAT_021071f0 = *(undefined8 *)(param_1 + 0x720);
  DAT_021071f8 = *(undefined8 *)(param_1 + 0x728);
  _DAT_02107200 = *(undefined8 *)(param_1 + 0x730);
  _DAT_02107208 = *(undefined8 *)(param_1 + 0x738);
  _DAT_02107210 = *(undefined8 *)(param_1 + 0x740);
  _DAT_02107218 = *(undefined8 *)(param_1 + 0x748);
  _DAT_02107220 = *(undefined8 *)(param_1 + 0x750);
  _DAT_02107228 = *(undefined8 *)(param_1 + 0x758);
  _DAT_02107230 = *(undefined8 *)(param_1 + 0x760);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),uVar1);
  iVar2 = 0;
  puVar3 = &DAT_021071f0;
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
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003af0 + 0x5fe8) = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x9c4;
  return;
}

