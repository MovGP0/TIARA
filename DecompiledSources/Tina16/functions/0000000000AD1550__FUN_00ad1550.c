/* Ghidra address: 00ad1550 */
/* Ghidra symbol: FUN_00ad1550 */


void FUN_00ad1550(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_10;
  
  local_10 = 0;
  do {
    FUN_00ad13c0(param_1);
    uVar4 = FUN_00414480(param_1 + 0x78);
    FUN_00ad12a0(*(undefined8 *)(param_1 + 0x90),uVar4);
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),L"encoding");
    if (iVar3 == 0) {
      if ((*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x3d) &&
         (FUN_00ad13c0(param_1), *(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x22)) {
        uVar4 = FUN_00414480(&local_10);
        FUN_00ad14a0(param_1,uVar4);
        iVar3 = FUN_009f4440(local_10);
        *(bool *)(param_1 + 0x77) = iVar3 != -1;
        if ((*(char *)(param_1 + 0x77) != '\0') &&
           (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x30),
           (*(byte *)(lVar2 + 0x30) & 1) == 0)) {
          if (*(longlong *)(lVar2 + 0x28) == 0) {
            FUN_00a02aa0(lVar2,iVar3,iVar3);
          }
          else {
            FUN_00a02aa0(lVar2,iVar3,*(undefined4 *)(*(longlong *)(lVar2 + 0x28) + 0x1c));
          }
        }
LAB_00ad16d2:
        FUN_00414480(&local_10);
        return;
      }
    }
    else if ((*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x3d) &&
            (FUN_00ad13c0(param_1), *(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x22)) {
      uVar4 = FUN_00414480(&local_10);
      FUN_00ad14a0(param_1,uVar4);
    }
    if (*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x3f) {
      FUN_00ad13c0(param_1);
    }
    sVar1 = *(short *)(*(longlong *)(param_1 + 0x90) + 0x20);
    if ((sVar1 == 0x3e) || (sVar1 == 0)) goto LAB_00ad16d2;
  } while( true );
}

