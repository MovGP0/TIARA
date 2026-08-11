/* Ghidra address: 010b0ed0 */
/* Ghidra symbol: FUN_010b0ed0 */


void FUN_010b0ed0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_010afec0(param_1);
  FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
            (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar3);
      uVar2 = FUN_010ae9e0(&DAT_010a8e80,1);
      FUN_010af970(uVar2,uVar1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30),0);
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x58))
            (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
  FUN_010b10b0(param_1,param_2);
  return;
}

