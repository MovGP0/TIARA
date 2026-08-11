/* Ghidra address: 01d7bc20 */
/* Ghidra symbol: FUN_01d7bc20 */


longlong * FUN_01d7bc20(longlong *param_1,ushort *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  undefined8 local_res20;
  undefined8 local_130;
  int local_128 [2];
  int local_120;
  undefined4 uStack_11c;
  
  local_130 = 0;
  piVar5 = local_128;
  for (lVar4 = 0x22; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar5 = *param_3;
    param_3 = param_3 + 1;
    piVar5 = piVar5 + 2;
  }
  local_res20 = param_4;
  FUN_00414610(param_4);
  if (local_128[0] == 0) {
    if (CONCAT44(uStack_11c,local_120) == 0) {
      FUN_00414480(param_1);
    }
    else {
      FUN_004167d0(param_1,CONCAT44(uStack_11c,local_120));
    }
  }
  else if (local_128[0] == 1) {
    FUN_00414740(param_1,(longlong)param_2 + (ulonglong)(local_120 - 2) + 2,
                 (uint)*param_2 - local_120);
  }
  else if (local_128[0] == 2) {
    uVar1 = FUN_00414ce0(&local_120);
    FUN_00414910(param_1,&local_120,uVar1);
  }
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + -4);
  }
  if ((1 < iVar2) && (*(short *)*param_1 == 0x3f)) {
    uVar3 = *(short *)(*param_1 + 2) - 0x30;
    if (uVar3 < 0x10) {
      bVar6 = ((int)CONCAT62((int6)((ulonglong)*param_1 >> 0x10),1) << ((byte)uVar3 & 0x1f) & 0x3ffU
              ) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      FUN_00450070(&local_130,*param_1,&DAT_01d7bdc8,0,1);
      FUN_00414ad0(param_1,local_130);
    }
  }
  FUN_00414480(&local_130);
  FUN_00414480(&local_res20);
  return param_1;
}

