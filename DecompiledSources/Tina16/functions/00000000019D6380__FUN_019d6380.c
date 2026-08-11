/* Ghidra address: 019d6380 */
/* Ghidra symbol: FUN_019d6380 */


void FUN_019d6380(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined6 uVar5;
  
  uVar5 = (undefined6)((ulonglong)unaff_RDI >> 0x10);
  uVar4 = CONCAT62(uVar5,0x4c);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (iVar1 == 0) {
    uVar4 = CONCAT62(uVar5,0x4c);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar1 == 1) {
      uVar4 = CONCAT62(uVar5,0x48);
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar1 == 2) {
        uVar4 = CONCAT62(uVar5,0x50);
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (iVar1 == 3) {
          uVar4 = CONCAT62(uVar5,0x53);
        }
      }
    }
  }
  if (param_2 != '\0') {
    FUN_0123aad0(*(undefined8 *)(param_1 + 0x14c8),uVar4 & 0xffffffff);
  }
  uVar2 = FUN_019a4600();
  uVar3 = FUN_00741ea0(*(undefined8 *)(param_1 + 0x7b8));
  FUN_019cfe70(*(undefined8 *)(param_1 + 0x818),*(undefined8 *)(param_1 + 0x14c8),uVar2,uVar3,
               *(undefined4 *)(*(longlong *)(param_1 + 0x7b8) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x7b8) + 0x9c));
  FUN_019d2380(*(undefined8 *)(param_1 + 0x818));
  return;
}

