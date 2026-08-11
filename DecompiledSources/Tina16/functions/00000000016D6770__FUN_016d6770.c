/* Ghidra address: 016d6770 */
/* Ghidra symbol: FUN_016d6770 */


void FUN_016d6770(longlong param_1,int param_2,int param_3,double param_4,char param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    param_2 = 1;
  }
  if (2 < param_2) {
    param_2 = 2;
  }
  iVar2 = FUN_0040c770((double)param_3 * param_4);
  *(int *)(param_1 + 0x34) = iVar2;
  if (iVar2 < 0x3000) {
    *(undefined4 *)(param_1 + 0x34) = 0x3000;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x8000;
  if (0x8000 < *(int *)(param_1 + 0x34)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
  }
  iVar2 = *(int *)(param_1 + 0x38) * param_2 + 2;
  *(int *)(param_1 + 0x38) = iVar2;
  FUN_00419260(param_1 + 0x40,&DAT_004066a0,1,(longlong)iVar2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x24) = param_3;
  *(int *)(param_1 + 0x30) = param_2;
  *(char *)(param_1 + 0x3d) = param_5;
  if (param_5 != '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x3c) = 1;
    uVar3 = FUN_016d3bd0(&PTR_FUN_016d32c8,1,0);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    plVar1 = *(longlong **)(param_1 + 0x48);
    uVar3 = FUN_016d66b0(&DAT_016d50e8,1,param_1);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    FUN_016d3b20(plVar1,*(int *)(param_1 + 0x30) == 2);
    FUN_016d3b50(plVar1,0x10);
    FUN_016d3b90(plVar1,*(undefined4 *)(param_1 + 0x24));
    FUN_016d3ac0(plVar1,0x2000);
    (**(code **)(*plVar1 + 0x298))(plVar1);
  }
  return;
}

