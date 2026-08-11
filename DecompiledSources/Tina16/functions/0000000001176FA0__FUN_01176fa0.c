/* Ghidra address: 01176fa0 */
/* Ghidra symbol: FUN_01176fa0 */


undefined8 FUN_01176fa0(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  
  *(undefined4 *)(*param_2 + 0x15e0) = *(undefined4 *)PTR_DAT_02003d58;
  *(undefined4 *)(*param_2 + 0x15e4) = *(undefined4 *)PTR_DAT_020037d0;
  *(int *)(*param_2 + 0x15e8) = (*(int *)(param_3 + 0x98) - *(int *)PTR_DAT_02002598) + -1;
  *(int *)(*param_2 + 0x15ec) = (*(int *)(param_3 + 0x9c) - *(int *)PTR_DAT_02001f40) + -1;
  *(undefined4 *)(*param_2 + 0x15f0) = 2;
  *(undefined4 *)(*param_2 + 0x15f4) = 0xf;
  *(undefined4 *)(*param_2 + 0x1608) = 0xc0c0c0;
  *(undefined4 *)(*param_2 + 0x160c) = 0xc0c0c0;
  iVar1 = *(int *)(param_1 + 0xd8);
  *(int *)(*param_2 + 0x1610) = iVar1;
  if (iVar1 == 0) {
    dVar3 = (double)FUN_00c42800(*(double *)(param_1 + 0xb8) / *(double *)(param_1 + 0xb0) - 1.0);
    uVar2 = FUN_0040c840(dVar3 + 1.0);
    *(undefined4 *)(*param_2 + 0x15f8) = uVar2;
    *(undefined4 *)(*param_2 + 0x1600) = 10;
  }
  else {
    *(undefined4 *)(*param_2 + 0x15f8) = 5;
    *(undefined4 *)(*param_2 + 0x1600) = 2;
  }
  *(undefined4 *)(*param_2 + 0x1614) = 1;
  *(undefined4 *)(*param_2 + 0x15fc) = 5;
  *(undefined4 *)(*param_2 + 0x1604) = 2;
  return 0;
}

