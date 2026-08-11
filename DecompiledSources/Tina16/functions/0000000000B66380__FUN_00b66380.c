/* Ghidra address: 00b66380 */
/* Ghidra symbol: FUN_00b66380 */


void FUN_00b66380(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b4e330();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      uVar5 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
      FUN_00b4f530(uVar5,&local_20);
      iVar2 = FUN_00416420(local_20,0);
      if (iVar2 != 0) {
        lVar4 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        uVar5 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
        uVar3 = FUN_00b4f5c0(uVar5);
        FUN_00b39f90(&local_28,local_20,uVar3);
        if (local_28 != 0) {
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x1b8);
          uVar3 = 0;
          if (local_28 != 0) {
            uVar3 = *(undefined4 *)(local_28 + -4);
          }
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                       CONCAT22((short)((uint)uVar3 >> 0x10),(short)uVar3 + 8));
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x48));
          lVar4 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x48));
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x48));
          lVar4 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x48));
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x48));
          lVar4 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x4a));
          lVar4 = FUN_00b598d0(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                               *(undefined4 *)(param_1 + 0x48));
          lVar4 = FUN_00b4fc70(*(undefined8 *)(lVar4 + 0x10),iVar6);
          FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),*(undefined2 *)(lVar4 + 0x4a));
          uVar5 = FUN_00414df0(&local_28);
          uVar3 = 0;
          if (local_28 != 0) {
            uVar3 = *(undefined4 *)(local_28 + -4);
          }
          FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),uVar5,uVar3);
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004144d0(&local_28);
  FUN_00414520(&local_20);
  return;
}

