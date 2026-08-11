/* Ghidra address: 00f2f9e0 */
/* Ghidra symbol: FUN_00f2f9e0 */


int FUN_00f2f9e0(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int local_res18;
  longlong local_10;
  
  local_10 = 0;
  FUN_00414b50();
  iVar5 = 0;
  uVar6 = 0;
  if (local_10 != 0) {
    uVar6 = (ulonglong)*(uint *)(local_10 + -4);
  }
  local_res18 = param_3;
  if (0 < (int)uVar6) {
    do {
      lVar4 = (longlong)(iVar5 + 1);
      if ((local_10 == 0) || ((ulonglong)*(uint *)(local_10 + -4) <= lVar4 - 1U)) {
        lVar4 = FUN_00410a90();
      }
      uVar2 = *(ushort *)(local_10 + -2 + lVar4 * 2);
      iVar1 = local_res18 + 1;
      uVar3 = (undefined1)uVar2;
      if (0xff < uVar2) {
        uVar3 = FUN_00410a90();
      }
      uVar7 = (ulonglong)local_res18;
      if ((param_2 == 0) || (*(ulonglong *)(param_2 + -8) <= uVar7)) {
        uVar3 = FUN_00410a90();
      }
      *(undefined1 *)(param_2 + uVar7) = uVar3;
      iVar5 = iVar5 + 1;
      local_res18 = iVar1;
    } while (iVar5 < (int)uVar6);
  }
  FUN_00414480(&local_10);
  return local_res18;
}

