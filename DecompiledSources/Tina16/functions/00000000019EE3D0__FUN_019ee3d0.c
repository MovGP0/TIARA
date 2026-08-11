/* Ghidra address: 019ee3d0 */
/* Ghidra symbol: FUN_019ee3d0 */


undefined8 FUN_019ee3d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 local_res18 [2];
  short *local_20;
  
  local_20 = (short *)0x0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414b50(&local_20,local_res18[0]);
  iVar5 = 1;
  if ((*(char *)(param_1 + 0xc0) == '\x04') && (*local_20 == 0x21)) {
    iVar5 = 2;
  }
  while( true ) {
    iVar2 = 0;
    if (local_20 != (short *)0x0) {
      iVar2 = *(int *)(local_20 + -2);
    }
    if (iVar2 < iVar5) break;
    lVar6 = (longlong)iVar5;
    sVar1 = local_20[lVar6 + -1];
    uVar4 = sVar1 - 0x30;
    if (uVar4 < 0x50) {
      bVar7 = ((byte)(&DAT_019ee558)[(longlong)(short)(uVar4 & 0x7f) >> 3] >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      if (sVar1 == 0x2b) {
        lVar3 = FUN_00414de0(&local_20);
        *(undefined2 *)(lVar3 + -2 + lVar6 * 2) = 0x50;
        FUN_00416ea0(&PTR_DAT_019ee570,&local_20,iVar5 + 1);
      }
      else if (sVar1 == 0x2d) {
        lVar3 = FUN_00414de0(&local_20);
        *(undefined2 *)(lVar3 + -2 + lVar6 * 2) = 0x4e;
        FUN_00416ea0(&LAB_019ee584,&local_20,iVar5 + 1);
      }
      else {
        lVar3 = FUN_00414de0(&local_20);
        *(undefined2 *)(lVar3 + -2 + lVar6 * 2) = 0x5f;
      }
    }
    iVar5 = iVar5 + 1;
  }
  FUN_00414ad0(param_2,local_20);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return param_2;
}

