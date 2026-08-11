/* Ghidra address: 004b5f70 */
/* Ghidra symbol: FUN_004b5f70 */


int FUN_004b5f70(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int unaff_R13D;
  int iVar5;
  undefined8 *local_40;
  int local_34;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  uVar2 = FUN_00416740(param_2);
  iVar5 = (uint)*(byte *)((longlong)param_1 + 0x4a) * 2 +
          (uint)((*(byte *)((longlong)param_1 + 0x32) & 8) != 0);
  local_40 = (undefined8 *)param_1[7];
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00416740(*local_40);
      if (iVar5 == 0) {
        unaff_R13D = FUN_004428c0(lVar3,uVar2,iVar4);
      }
      else if (iVar5 == 1) {
        unaff_R13D = FUN_0043e7e0(lVar3,uVar2,iVar4);
      }
      else if (iVar5 == 2) {
        unaff_R13D = FUN_00442880(lVar3,uVar2,iVar4);
      }
      else if (iVar5 == 3) {
        unaff_R13D = FUN_0043e7a0(lVar3,uVar2,iVar4);
      }
      if ((unaff_R13D == 0) && (*(short *)(lVar3 + (longlong)iVar4 * 2) == (short)param_1[6])) {
        return local_34;
      }
      local_40 = local_40 + 2;
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

