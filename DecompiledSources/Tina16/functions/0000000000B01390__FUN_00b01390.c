/* Ghidra address: 00b01390 */
/* Ghidra symbol: FUN_00b01390 */


void FUN_00b01390(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    lVar4 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + 8 + (longlong)iVar1 * 0x10);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar4 + -8);
    }
    if (lVar3 == 1) {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                        (*(longlong **)(param_1 + 0x700));
      FUN_00b01560(param_1,*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + 8 +
                              (longlong)iVar1 * 0x10) + 8),1);
    }
    else {
      FUN_007e4130(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x80));
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                        (*(longlong **)(param_1 + 0x700));
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + 8 + (longlong)iVar1 * 0x10);
      iVar1 = 0;
      if (lVar4 != 0) {
        iVar1 = (int)*(undefined8 *)(lVar4 + -8);
      }
      iVar5 = 0;
      if (-1 < iVar1 + -1) {
        do {
          lVar4 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
          iVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                            (*(longlong **)(param_1 + 0x700));
          FUN_007e2c60(lVar4,*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x730) + 0x48) + 8 +
                                (longlong)iVar2 * 0x10) + (longlong)iVar5 * 0x10));
          *(longlong *)(lVar4 + 0x18) = (longlong)iVar5;
          *(longlong *)(lVar4 + 0x118) = param_1;
          *(code **)(lVar4 + 0x110) = FUN_00b01320;
          FUN_007e34c0(*(undefined8 *)(*(longlong *)(param_1 + 0x720) + 0x80),lVar4);
          iVar5 = iVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      thunk_FUN_03cc0d62(&local_30);
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0xa8))
                (*(longlong **)(param_1 + 0x720),local_30,local_2c);
    }
  }
  return;
}

