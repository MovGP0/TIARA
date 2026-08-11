/* Ghidra address: 00b62440 */
/* Ghidra symbol: FUN_00b62440 */


void FUN_00b62440(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  iVar1 = FUN_00b59a10();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),iVar5);
      iVar2 = FUN_00b4e330();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),iVar5);
          uVar4 = FUN_00b4fc70(*(undefined8 *)(lVar3 + 0x10),iVar6);
          FUN_00b4f280(uVar4,&local_30);
          if (local_30 != 0) {
            FUN_00b2ff80(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x70),local_40,local_30);
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00b59a10();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),iVar5);
      iVar2 = FUN_00b353c0();
      iVar6 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar3 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 8),iVar5);
          uVar4 = FUN_00b353d0(*(undefined8 *)(lVar3 + 0x70),iVar6);
          FUN_00b356f0(&local_48,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x70));
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414590(&local_48,2);
  FUN_004144d0(&local_30);
  return;
}

