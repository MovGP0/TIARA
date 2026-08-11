/* Ghidra address: 01b57b40 */
/* Ghidra symbol: FUN_01b57b40 */


void FUN_01b57b40(longlong *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  undefined8 local_2a8;
  undefined1 local_2a0 [168];
  undefined1 local_1f8 [88];
  undefined1 local_1a0 [88];
  undefined1 local_148 [88];
  undefined1 *local_f0;
  undefined1 local_da [81];
  undefined1 local_89 [81];
  double local_38;
  char local_29;
  longlong *local_28;
  
  local_f0 = auStack_2d8;
  local_2a8 = 0;
  puVar1 = auStack_2d8;
  if ((*(char *)((longlong)param_1 + 0x7ed) != '\0') &&
     (local_28 = (longlong *)param_1[0x1ab], puVar1 = auStack_2d8,
     *(char *)((longlong)local_28 + 0x5b) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x9c3) = 1;
    (**(code **)(*local_28 + 0xd8))(local_28,param_1 + 0x110,(char)param_1[0x1a5],&local_29);
    if (((char)local_28[0xb] == '\0') &&
       ((double)param_1[0x1a7] * 10.0 + (double)param_1[0x1a9] < (double)local_28[0x14])) {
      local_38 = ((double)local_28[0x14] - (double)param_1[0x1a9]) / ((double)param_1[0x1a7] * 10.0)
      ;
      lVar2 = FUN_0040c840(local_38);
      local_38 = (double)lVar2 - 0.5;
      param_1[0x1a9] = (longlong)((double)param_1[0x1a9] + local_38 * 10.0 * (double)param_1[0x1a7])
      ;
      FUN_00b90440(param_1[0x198],param_1[0x1a9]);
      FUN_01b581d0(param_1,1);
    }
    if ((char)local_28[0xb] == '\0') {
      local_2b8 = *PTR_DAT_02005310;
      FUN_010c1330(local_148,local_28[0x14],10,local_89);
    }
    else {
      local_2b8 = *PTR_DAT_02005310;
      FUN_010c1330(local_148,local_28[0x14],1,local_89);
    }
    FUN_00414ff0(local_1a0,&DAT_01b57f98);
    FUN_00415110(local_1a0,local_89,0x53);
    FUN_00415020(local_89,local_1a0,0x50);
    local_2b8 = *PTR_DAT_02005310;
    FUN_010c1330(local_148,local_28[0x15],1,local_da);
    FUN_00414ff0(local_1f8,&LAB_01b57f9c);
    FUN_00415110(local_1f8,local_da,0x54);
    FUN_00415020(local_da,local_1f8,0x50);
    FUN_00414ff0(local_2a0,local_89);
    FUN_00415110(local_2a0,local_da,0xa0);
    FUN_004169a0(&local_2a8,local_2a0);
    FUN_010e4140(param_1,local_2a8,0);
    *(undefined1 *)((longlong)param_1 + 0x9c3) = 0;
    *(undefined1 *)(param_1 + 0x1a5) = 0;
    if (local_29 == '\0') {
      FUN_0082a6c0(param_1[0xf8],1);
      (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      puVar1 = local_f0;
    }
    else {
      FUN_01b580b0(param_1,1);
      puVar1 = local_f0;
    }
  }
  local_f0 = puVar1;
  FUN_00414480(&local_2a8);
  return;
}

