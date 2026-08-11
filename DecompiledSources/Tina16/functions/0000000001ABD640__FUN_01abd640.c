/* Ghidra address: 01abd640 */
/* Ghidra symbol: FUN_01abd640 */


longlong * FUN_01abd640(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_res10 [3];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  bVar1 = false;
  FUN_00414ad0(param_1,local_res10[0]);
  iVar3 = FUN_004170c0(&DAT_01abd91c,*param_1,1);
  if (0 < iVar3) {
    iVar3 = FUN_004170c0(&DAT_01abd91c,local_res10[0],1);
    FUN_00416dc0(param_1,*param_1,1,iVar3 + -1);
  }
  FUN_00450070(&local_30,*param_1,&DAT_01abd92c,0,3);
  FUN_00414ad0(param_1,local_30);
  FUN_00450070(&local_38,*param_1,&DAT_01abd940,&DAT_01abd950,3);
  FUN_00414ad0(param_1,local_38);
  FUN_00450070(&local_40,*param_1,&DAT_01abd960,&DAT_01abd970,3);
  FUN_00414ad0(param_1,local_40);
  iVar3 = 0;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + -4);
  }
  iVar7 = 1;
  bVar8 = false;
  if (0 < iVar3) {
    do {
      bVar1 = bVar8;
      uVar2 = *(short *)(*param_1 + -2 + (longlong)iVar7 * 2) - 0x28;
      if (uVar2 < 0x58) {
        uVar5 = ((ulonglong)uVar2 & 0x7f) + 0x20;
        bVar8 = ((byte)(&DAT_01abd970)[(longlong)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0;
      }
      else {
        bVar8 = false;
      }
      if (!bVar8) {
        lVar6 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar6 + -2 + (longlong)iVar7 * 2) = 0x5f;
        bVar1 = true;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + -1;
      bVar8 = bVar1;
    } while (iVar3 != 0);
  }
  if (bVar1) {
    uVar4 = FUN_01abd5a0(local_res10[0]);
    FUN_0043f7c0(&local_48,uVar4);
    FUN_00416ad0(param_1,local_48);
  }
  FUN_004168e0(&local_58,*param_1);
  FUN_00b0cea0(&local_50,local_58,0xfde9);
  FUN_00416880(param_1,local_50);
  FUN_00414520(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_res10);
  return param_1;
}

