/* Ghidra address: 014e5000 */
/* Ghidra symbol: FUN_014e5000 */


void FUN_014e5000(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *local_30 [2];
  
  local_30[0] = (short *)0x0;
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    iVar2 = (**(code **)(*param_2 + 0x1c8))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*param_2 + 0x210))(param_2,iVar4);
        uVar3 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x58),uVar3);
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        (**(code **)(*param_2 + 0x288))(param_2,local_30);
        if ((local_30[0] != (short *)0x0) && (*local_30[0] != 0x58)) {
          uVar3 = (**(code **)(*param_2 + 0x210))(param_2,iVar4);
          uVar3 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x54),uVar3);
          *(undefined4 *)(param_1 + 0x54) = uVar3;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

