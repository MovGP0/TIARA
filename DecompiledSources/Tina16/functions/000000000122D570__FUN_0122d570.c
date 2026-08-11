/* Ghidra address: 0122d570 */
/* Ghidra symbol: FUN_0122d570 */


void FUN_0122d570(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8) + 0x278))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x7a8));
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_020044a8 + 0x848));
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  if (iVar3 == 0) {
    *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa8) = 0x41;
    FUN_00414ad0(&DAT_021076f0,&DAT_0122d9f8);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    if (iVar3 == 1) {
      *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa8) = 0x46;
      FUN_00414ad0(&DAT_021076f0,&DAT_0122da0c);
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))
                        (*(longlong **)(param_1 + 0x778));
      if (iVar3 == 2) {
        *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa8) = 0x49;
        FUN_00414ad0(&DAT_021076f0,&DAT_0122da20);
      }
    }
  }
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x41) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa8) == 0x49)) {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x278))(*(longlong **)(param_1 + 0x798));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Butterworth");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Chebyshev");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Elliptic");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Inverse Chebyshev");
    *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x42;
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
    plVar2 = *(longlong **)(param_1 + 0x798);
    uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
    (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_20,uVar4);
    FUN_0064de00(plVar2,local_20);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x278))(*(longlong **)(param_1 + 0x798));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Rectang");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Bartlett");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Blackman");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Hamming");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Hanning");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Kaiser");
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"Parks-McCl");
    *(undefined2 *)(PTR_DAT_020021e8 + 0x1fa6) = 0x30;
    (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
    plVar2 = *(longlong **)(param_1 + 0x798);
    uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
    (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_28,uVar4);
    FUN_0064de00(plVar2,local_28);
  }
  sVar1 = *(short *)(PTR_DAT_020021e8 + 0x1fa8);
  if (sVar1 == 0x41) {
    *(undefined8 *)PTR_DAT_02001fd8 = 0x4202a05f20000000;
  }
  else if ((sVar1 == 0x46) || (sVar1 == 0x49)) {
    uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x840));
    *(undefined8 *)(PTR_DAT_020021e8 + 0x40) = uVar5;
    *(double *)PTR_DAT_02001fd8 = *(double *)(PTR_DAT_020021e8 + 0x40) / 2.0;
  }
  FUN_01229220(param_1);
  FUN_00414560(&local_28,2);
  return;
}

