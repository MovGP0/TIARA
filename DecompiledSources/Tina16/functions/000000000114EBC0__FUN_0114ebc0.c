/* Ghidra address: 0114ebc0 */
/* Ghidra symbol: FUN_0114ebc0 */


void FUN_0114ebc0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *local_48;
  longlong local_40 [2];
  
  cVar3 = FUN_0198a580(param_2);
  if ((cVar3 == '\x04') && (iVar4 = FUN_01cfd2d0(param_2), 0 < iVar4)) {
    iVar4 = FUN_01cfd2d0();
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        cVar3 = (**(code **)(*param_2 + 0x2d0))(param_2,iVar5,local_40);
        lVar2 = local_40[0];
        if (cVar3 == '\x06') {
          if ((*(float *)(local_40[0] + 0x10) != 0.0) ||
             (cVar3 = FUN_0114eb00(*(undefined1 *)(local_40[0] + 0x18),
                                   *(undefined8 *)(local_40[0] + 0x20)), cVar3 != '\0')) {
            if (*(char *)(lVar2 + 0x18) == '\x02') {
              pfVar1 = *(float **)(lVar2 + 0x20);
              if ((*pfVar1 != 0.0) || (pfVar1[1] != 0.0)) {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              }
              if ((*(float *)((longlong)pfVar1 + 9) != 0.0) ||
                 (*(float *)((longlong)pfVar1 + 0xd) != 0.0)) {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            else {
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
            }
          }
        }
        else if ((cVar3 == '\a') && (*(longlong *)(local_40[0] + 0x140) != 0)) {
          local_48 = *(float **)(*(longlong *)(local_40[0] + 0x140) + 0x10);
          for (uVar6 = (uint)*(byte *)(*(longlong *)(local_40[0] + 0x140) + 0x18); uVar6 != 0;
              uVar6 = uVar6 - 1) {
            cVar3 = FUN_0114eb60(local_48);
            if (cVar3 != '\0') {
              if ((*local_48 != 0.0) || (local_48[1] != 0.0)) {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              }
              if ((*(float *)((longlong)local_48 + 0xb) != 0.0) ||
                 (*(float *)((longlong)local_48 + 0xf) != 0.0)) {
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            FUN_00b909d0(&local_48,0x14);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  return;
}

