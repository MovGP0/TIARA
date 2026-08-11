/* Ghidra address: 009e08b0 */
/* Ghidra symbol: FUN_009e08b0 */


void FUN_009e08b0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = FUN_00427dd0();
    *(undefined4 *)(param_1 + 0xc) = uVar2;
  }
  cVar1 = FUN_009e0930(param_1);
  if (cVar1 == '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar3 = FUN_00427dd0();
      if (*(uint *)(param_1 + 0x20) < (uint)(iVar3 - *(int *)(param_1 + 0x10))) {
        iVar3 = FUN_00427dd0();
        (**(code **)(param_1 + 0x18))(iVar3 - *(int *)(param_1 + 0xc));
      }
    }
  }
  else {
    FUN_00805200(*(undefined8 *)(param_1 + 0x38));
  }
  uVar2 = FUN_00427dd0();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}

