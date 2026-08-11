/* Ghidra address: 00e11d20 */
/* Ghidra symbol: FUN_00e11d20 */


ulonglong FUN_00e11d20(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong unaff_R13;
  int iVar7;
  int local_30;
  
  lVar1 = *(longlong *)(param_3 + 0x40);
  uVar5 = *(undefined8 *)(lVar1 + 0x528);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar3 = FUN_00e11cb0(param_1,param_2,param_3);
  if (-1 < iVar3) {
    uVar4 = FUN_00e11e40(param_1,iVar3,lVar1);
    uVar6 = (ulonglong)uVar4;
    if ((char)uVar4 == '\0') {
      bVar2 = false;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
      local_30 = 0;
      if (-1 < iVar7 + -1) {
        do {
          unaff_R13 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_30);
          if (*(longlong *)(unaff_R13 + 8) == lVar1) {
            bVar2 = true;
            break;
          }
          local_30 = local_30 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (!bVar2) {
        unaff_R13 = FUN_00e11ac0(&DAT_00e10d10,1,uVar5);
      }
      uVar5 = FUN_00e11a10(&DAT_00e10b58,1,iVar3,lVar1);
      FUN_004ae7e0(*(undefined8 *)(unaff_R13 + 0x10),uVar5);
    }
  }
  return uVar6 & 0xffffffff;
}

