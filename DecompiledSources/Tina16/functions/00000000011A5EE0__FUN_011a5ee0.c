/* Ghidra address: 011a5ee0 */
/* Ghidra symbol: FUN_011a5ee0 */


void FUN_011a5ee0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_0064b380(param_1[0x1a],3,(int)param_1[0x13]);
  FUN_0064b380(param_1[0x1a],2,*(undefined4 *)((longlong)param_1 + 0x9c));
  DAT_020c6578 = 0x32;
  DAT_020c6574 = 0x96;
  (**(code **)(*param_1 + 0x118))(param_1,0);
  iVar6 = 0x100;
  puVar3 = &DAT_020c6580;
  puVar4 = &DAT_020c6d80;
  puVar5 = &DAT_020c7180;
  do {
    FUN_00414480(puVar3);
    *puVar4 = 0;
    iVar2 = 0x100;
    puVar1 = puVar5;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar5 = puVar5 + 0x100;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)PTR_DAT_02004708 = 4000;
  return;
}

