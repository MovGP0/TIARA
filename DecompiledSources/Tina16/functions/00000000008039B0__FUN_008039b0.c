/* Ghidra address: 008039b0 */
/* Ghidra symbol: FUN_008039b0 */


void FUN_008039b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x10) == 1) {
    uVar2 = FUN_0065b870(param_1);
    iVar1 = FUN_007f9220(uVar2);
    if (iVar1 == 0) {
      uVar2 = FUN_0065b870(param_1);
      iVar1 = thunk_FUN_041b570f(uVar2);
      if (iVar1 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x4d3) = 1;
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x4d3) = 3;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x4d3) = 2;
    }
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else if (*(int *)(param_2 + 0x10) == 3) {
    if (*(char *)((longlong)param_1 + 0x4d3) != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar2,*(undefined4 *)
                                ((longlong)&UNWIND_INFO_01e14eec +
                                (ulonglong)*(byte *)((longlong)param_1 + 0x4d3) * 4 + 8));
      *(undefined1 *)((longlong)param_1 + 0x4d3) = 0;
      if (param_1 == *(longlong **)(DAT_02012668 + 0xa8)) {
        *(undefined1 *)(DAT_02012668 + 0x78) = 0;
      }
      FUN_0080aef0(DAT_02012668,1);
    }
  }
  else {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  return;
}

