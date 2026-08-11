/* Ghidra address: 017ca060 */
/* Ghidra symbol: FUN_017ca060 */


ulonglong FUN_017ca060(int param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 unaff_R13;
  ulonglong uVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  lVar1 = (longlong)param_1 * 0x14;
  local_3c = *(undefined8 *)(&DAT_01fa4668 + lVar1);
  uStack_34 = *(undefined8 *)(&DAT_01fa4670 + lVar1);
  uStack_2c = *(undefined4 *)(&DAT_01fa4678 + lVar1);
  iVar4 = 0;
  while( true ) {
    if (iVar4 == 0) {
      uVar2 = local_3c._4_4_;
    }
    else if (iVar4 == 1) {
      uVar2 = (undefined4)local_3c;
    }
    else if (iVar4 == 2) {
      uVar2 = uStack_34._4_4_;
    }
    else {
      uVar2 = 0;
    }
    if (iVar4 == 3) {
      iVar3 = 0;
    }
    else {
      FUN_017c9e20(uVar2,&local_40,&local_44);
      iVar3 = FUN_017c9f90(param_2,local_40,local_44);
    }
    if ((iVar3 == -1) && (iVar4 != 2)) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 4) {
LAB_017ca0ee:
      return uVar5 & 0xffffffff;
    }
  }
  uVar5 = 0;
  goto LAB_017ca0ee;
}

