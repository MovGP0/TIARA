/* Ghidra address: 00b28460 */
/* Ghidra symbol: FUN_00b28460 */


undefined8 FUN_00b28460(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_50;
  undefined1 local_47 [7];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00414520(param_2);
  FUN_00414520(&local_38);
  FUN_00414520(local_30);
  FUN_00414520(&local_40);
  lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),param_3);
  iVar1 = FUN_00b286f0(param_1);
  if ((int)(uint)*(ushort *)(lVar3 + 0x10) < iVar1) {
    FUN_00b28670(param_1,&local_40,*(undefined2 *)(lVar3 + 0x10));
  }
  iVar1 = FUN_00b22360();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b22330(*(undefined8 *)(lVar3 + 0x18),local_47,iVar4);
      FUN_00b20f20(&local_50,local_47);
      FUN_00415f40(&local_38,local_50);
      iVar2 = FUN_00416420(local_38,0);
      if (iVar2 != 0) {
        iVar2 = FUN_00416420(local_40,0);
        if (iVar2 != 0) {
          FUN_00416310(&local_38,5,&DAT_00b28640,local_40,&DAT_00b28640,&DAT_00b28648,local_38);
        }
        iVar2 = FUN_00416420(local_30[0],0);
        if (iVar2 != 0) {
          FUN_00415f90(local_30,&LAB_00b28650);
        }
        FUN_00415f90(local_30,local_38);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414b90(param_2,local_30[0]);
  FUN_004144d0(&local_50);
  FUN_004145c0(&local_40,3);
  return param_2;
}

