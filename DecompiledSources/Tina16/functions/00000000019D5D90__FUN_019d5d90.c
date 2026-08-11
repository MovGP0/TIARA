/* Ghidra address: 019d5d90 */
/* Ghidra symbol: FUN_019d5d90 */


void FUN_019d5d90(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if ((int)uVar3 != 2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if ((int)uVar3 != 3) {
      uVar2 = 0;
      goto LAB_019d5dd2;
    }
  }
  uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
LAB_019d5dd2:
  FUN_019d55e0(param_1,uVar2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (iVar1 == 0) {
    if (param_2 != '\0') {
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)PTR_DAT_02003948);
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02003948 + 8));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02003948 + 0x10));
      FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02003948 + 0x18));
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      FUN_019d5b20(param_1,4,uVar2);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar1 == 1) {
      if (param_2 != '\0') {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(PTR_DAT_020046b0 + 8));
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)PTR_DAT_020046b0);
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_020046b0 + 0x18));
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_020046b0 + 0x10));
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        FUN_019d5b20(param_1,4,uVar2);
      }
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar1 == 2) {
        if (param_2 != '\0') {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)(PTR_DAT_02003e78 + 8));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)PTR_DAT_02003e78);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02003e78 + 0x10));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02003e78 + 0x18));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(PTR_DAT_02003e78 + 0x20));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(PTR_DAT_02003e78 + 0x28));
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                            (*(longlong **)(param_1 + 0x720));
          FUN_019d5b20(param_1,6,uVar2);
        }
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if ((iVar1 == 3) && (param_2 != '\0')) {
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6b8),*(undefined8 *)PTR_DAT_02004ca0);
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),*(undefined8 *)(PTR_DAT_02004ca0 + 8));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6d8),*(undefined8 *)(PTR_DAT_02004ca0 + 0x18));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(PTR_DAT_02004ca0 + 0x10));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x760),*(undefined8 *)(PTR_DAT_02004ca0 + 0x28));
          FUN_00b90440(*(undefined8 *)(param_1 + 0x770),*(undefined8 *)(PTR_DAT_02004ca0 + 0x20));
          uVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                            (*(longlong **)(param_1 + 0x720));
          FUN_019d5b20(param_1,6,uVar2);
        }
      }
    }
  }
  if (param_2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),0);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))(*(longlong **)(param_1 + 0x740),0);
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),0);
  }
  FUN_019d4b00(param_1);
  return;
}

