/* Ghidra address: 013b14d0 */
/* Ghidra symbol: FUN_013b14d0 */


void FUN_013b14d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x408));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x400));
  iVar1 = FUN_00429b10(param_2 + 0x3f0);
  if (iVar1 == 0) {
    *(undefined8 *)(param_2 + 1000) = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10);
    uVar2 = FUN_0064d3a0(*(undefined8 *)(param_2 + 1000),param_2 + 0x3f0);
    *(undefined8 *)(param_2 + 0x3f0) = uVar2;
    uVar2 = FUN_0064d3a0(*(undefined8 *)(param_2 + 1000),param_2 + 0x3f8);
    *(undefined8 *)(param_2 + 0x3f8) = uVar2;
    uVar2 = FUN_0065b870(*(undefined8 *)(param_2 + 1000));
    thunk_FUN_03a2fc9d(uVar2,param_2 + 0x3f0,0xffffffff);
    (**(code **)(**(longlong **)(param_2 + 0x430) + 0x30))
              (*(undefined8 *)(param_2 + 0x430),*(undefined4 *)(param_2 + 0x3d8),
               *(undefined4 *)(param_2 + 0x3dc),*(undefined4 *)(param_2 + 0x3e0),
               *(undefined4 *)(param_2 + 0x3e4));
    (**(code **)(**(longlong **)(param_2 + 0x430) + 0x30))
              (*(undefined8 *)(param_2 + 0x430),*(undefined4 *)(param_2 + 0x3c8),
               *(undefined4 *)(param_2 + 0x3cc),*(undefined4 *)(param_2 + 0x3d0),
               *(undefined4 *)(param_2 + 0x3d4));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x3c0));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x3b8));
  if ((*(uint *)(param_2 + 0x3b4) & 1) == 0) {
    if ((*(uint *)(param_2 + 0x3b4) & 2) == 0) {
      if ((*(uint *)(param_2 + 0x3b4) & 4) != 0) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(param_2 + 0x40,&PTR_PTR_013ac8e0);
        FUN_00b8e650(uVar2,param_2 + 0x48,L"Sched.1_sImageIdxErrStr",*(undefined8 *)(param_2 + 0x40)
                    );
        FUN_016fe230(*(undefined8 *)(param_2 + 0x48));
      }
    }
    else {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(param_2 + 0x50,&PTR_PTR_013ac8c0);
      FUN_00b8e650(uVar2,param_2 + 0x58,L"Sched.1_sFreqWarning",*(undefined8 *)(param_2 + 0x50));
      FUN_016fe230(*(undefined8 *)(param_2 + 0x58));
    }
  }
  else {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(param_2 + 0x60,&PTR_PTR_013ac8b0);
    FUN_00b8e650(uVar2,param_2 + 0x68,L"Sched.1_sCMOSErrStr",*(undefined8 *)(param_2 + 0x60));
    FUN_016fd940(*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

