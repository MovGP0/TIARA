/* Ghidra address: 01339740 */
/* Ghidra symbol: FUN_01339740 */


void FUN_01339740(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_950 [2];
  undefined1 local_940 [2108];
  char local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined8 local_b7;
  
  local_950[0] = 0;
  FUN_00417580(local_940,&DAT_01d0d0b8);
  FUN_00417c40(local_940,*(longlong *)(param_1 + 0x770) + 0x5d8,&DAT_01d0d0b8);
  local_b7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x730));
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x708));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0xc0) = uVar1;
  uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 200) = uVar1;
  local_102 = (undefined1)((longlong)(*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4a8) + 1) % 3);
  local_103 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                        (*(longlong **)(param_1 + 0x700));
  local_104 = *(char *)(*(longlong *)(param_1 + 0x6f8) + 0x4a8) + '\x01';
  if ((*(double *)(*(longlong *)PTR_DAT_02003c48 + 200) <=
       *(double *)(*(longlong *)PTR_DAT_02003c48 + 0xc0)) ||
     (*(double *)(*(longlong *)PTR_DAT_02003c48 + 0xc0) <= 0.0 &&
      *(double *)(*(longlong *)PTR_DAT_02003c48 + 0xc0) != 0.0)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,local_950,0x134);
    FUN_013396e0(param_1,local_950[0]);
  }
  *(undefined1 *)(*(longlong *)PTR_DAT_02003c48 + 0x120) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x4a8);
  dVar2 = (double)FUN_00b90090(*(undefined8 *)(param_1 + 0x750));
  *(double *)(*(longlong *)PTR_DAT_02003c48 + 0x58) = dVar2 / 100.0;
  if (*(char *)(param_1 + 0x768) == '\0') {
    FUN_00417c40(*(longlong *)(param_1 + 0x770) + 0x5d8,local_940,&DAT_01d0d0b8);
  }
  FUN_00414480(local_950);
  FUN_00417740(local_940,&DAT_01d0d0b8);
  return;
}

