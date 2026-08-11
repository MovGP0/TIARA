/* Ghidra address: 00bd4a20 */
/* Ghidra symbol: FUN_00bd4a20 */


void FUN_00bd4a20(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_6c [20];
  int local_58;
  int local_4c;
  int local_34;
  int local_30;
  int local_2c;
  
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar5 = (longlong)(*(int *)(param_1 + 0xc0) + -1);
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xb8) + lVar5 * 2);
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x40) + lVar5 * 4);
    iVar6 = iVar4;
    if (*PTR_DAT_02001bb8 == '\0') {
      if (uVar1 < 0x100) {
        iVar3 = thunk_FUN_03babe8d(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),uVar1,uVar1,
                                   &local_34);
        if (iVar3 == 0) {
          if (uVar1 < 0xff) {
            thunk_FUN_040f248f(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),local_6c);
            iVar6 = local_58 + local_4c;
          }
        }
        else {
          iVar6 = local_34 + local_30;
          if (-1 < local_2c) {
            iVar6 = local_34 + local_30 + local_2c;
          }
        }
      }
    }
    else {
      cVar2 = FUN_00bd4840(*(undefined8 *)(param_1 + 0x90),uVar1,&local_34);
      if (cVar2 == '\0') {
        if (uVar1 < 0xff) {
          thunk_FUN_040f248f(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),local_6c);
          iVar6 = local_58 + local_4c;
        }
      }
      else {
        iVar6 = local_34 + local_30;
        if (-1 < local_2c) {
          iVar6 = local_34 + local_30 + local_2c;
        }
      }
    }
    if (iVar4 < iVar6) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar6 - iVar4);
      iVar4 = iVar6;
    }
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x40) +
            (longlong)(*(int *)(param_1 + 0xc0) + -1) * 4) = iVar4;
  }
  return;
}

