/* Ghidra address: 01820ef0 */
/* Ghidra symbol: FUN_01820ef0 */


void FUN_01820ef0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00416ba0(param_1 + 0xa8,param_2,&LAB_01820fb4);
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 1;
  uVar1 = FUN_00414cb0(param_2);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))(*(longlong **)(param_1 + 0xb8));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),0);
    iVar3 = *(int *)(param_1 + 0x88);
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        if (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)iVar2 * 2) == 10) {
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),(longlong)iVar2);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

