/* Ghidra address: 01b05410 */
/* Ghidra symbol: FUN_01b05410 */


void FUN_01b05410(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    iVar5 = *(int *)(param_1 + 0x2d8);
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8) + 0x128)
        ;
        sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if ((sVar2 == 900) || (sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar2 == 0x385)) {
          uVar3 = (**(code **)*plVar1)(plVar1);
          FUN_00418590(uVar3,&DAT_01cf1390);
        }
        FUN_01b052a0(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar4 * 8));
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_004095f0(*(undefined8 *)(param_1 + 0x2b0));
    if (0 < *(int *)(param_1 + 0x2dc)) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x2b8));
      *(undefined4 *)(param_1 + 0x2dc) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
    if (0 < *(int *)(param_1 + 0x2e0)) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x2c0));
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0;
    }
    if (0 < *(int *)(param_1 + 0x2e4)) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x2c8));
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    if (0 < *(int *)(param_1 + 0x2e8)) {
      FUN_004095f0(*(undefined8 *)(param_1 + 0x2d0));
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2d0) = 0;
    }
  }
  FUN_01b053c0(param_1 + 0x510,param_1 + 0x518,param_1 + 0x520);
  *(undefined1 *)(param_1 + 0x50c) = 0;
  if (*(char *)(param_1 + 0x528) != '\0') {
    FUN_01b053c0(param_1 + 0x530,param_1 + 0x538,param_1 + 0x540);
    *(char *)(param_1 + 0x528) = '\0';
  }
  if (*(char *)(param_1 + 0x568) != '\0') {
    FUN_01b053c0(param_1 + 0x570,param_1 + 0x578,param_1 + 0x580);
    *(char *)(param_1 + 0x568) = '\0';
  }
  if (*(char *)(param_1 + 0x548) != '\0') {
    FUN_01b053c0(param_1 + 0x550,param_1 + 0x558,param_1 + 0x560);
    *(char *)(param_1 + 0x548) = '\0';
  }
  return;
}

