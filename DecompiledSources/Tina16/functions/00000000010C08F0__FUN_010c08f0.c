/* Ghidra address: 010c08f0 */
/* Ghidra symbol: FUN_010c08f0 */


undefined8 FUN_010c08f0(undefined8 param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(param_3);
  *param_4 = 0;
  lVar6 = local_res10[0];
  iVar3 = FUN_004170c0(&DAT_010c0ae4,local_res10[0],1);
  lVar2 = local_res10[0];
  if (iVar3 != 0) {
    iVar4 = 0;
    if (local_res10[0] != 0) {
      iVar4 = *(int *)(local_res10[0] + -4);
    }
    if (iVar3 < iVar4) {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)(iVar3 + 1) * 2);
      uVar5 = uVar1 - 0x30;
      if (uVar5 < 0x10) {
        bVar7 = ((int)CONCAT62((int6)((ulonglong)lVar6 >> 0x10),1) << ((byte)uVar5 & 0x1f) & 0x3ffU)
                != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        *param_4 = uVar1 - 0x30;
        lVar6 = local_res10[0];
        FUN_00416dc0(param_3,local_res10[0],iVar3,2);
        iVar4 = 0;
        if (lVar2 != 0) {
          iVar4 = *(int *)(lVar2 + -4);
        }
        if (iVar3 + 1 < iVar4) {
          uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)(iVar3 + 2) * 2);
          uVar5 = uVar1 - 0x30;
          if (uVar5 < 0x10) {
            bVar7 = ((int)CONCAT62((int6)((ulonglong)lVar6 >> 0x10),1) << ((byte)uVar5 & 0x1f) &
                    0x3ffU) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            *param_4 = *param_4 * 10 + (uint)uVar1 + -0x30;
            FUN_00416dc0(param_3,local_res10[0],iVar3,3);
          }
        }
        FUN_00416dc0(local_res10,local_res10[0],1,iVar3 + -1);
        iVar3 = FUN_004170c0(&LAB_010c0af8,local_res10[0],1);
        if (iVar3 != 0) {
          iVar4 = 0;
          if (local_res10[0] != 0) {
            iVar4 = *(int *)(local_res10[0] + -4);
          }
          if (iVar3 <= iVar4) {
            FUN_00416dc0(local_res10,local_res10[0],1,iVar3 + -1);
          }
        }
      }
    }
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

