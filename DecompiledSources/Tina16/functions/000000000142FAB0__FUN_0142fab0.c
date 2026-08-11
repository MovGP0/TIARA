/* Ghidra address: 0142fab0 */
/* Ghidra symbol: FUN_0142fab0 */


undefined1 FUN_0142fab0(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_9 = 1;
  *param_2 = 0;
  iVar4 = 0;
  if (local_res8[0] != 0) {
    iVar4 = *(int *)(local_res8[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      uVar1 = *(ushort *)(local_res8[0] + -2 + (longlong)iVar2 * 2);
      if ((((uVar1 < 0x30) || (0x39 < uVar1)) &&
          ((uVar1 = *(ushort *)(local_res8[0] + -2 + (longlong)iVar2 * 2), uVar1 < 0x41 ||
           (0x46 < uVar1)))) &&
         ((uVar1 = *(ushort *)(local_res8[0] + -2 + (longlong)iVar2 * 2), uVar1 < 0x61 ||
          (0x66 < uVar1)))) {
        local_9 = 0;
        goto LAB_0142fb66;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar3 = FUN_01aa1170(local_res8[0]);
  *param_2 = uVar3;
LAB_0142fb66:
  FUN_00414480(local_res8);
  return local_9;
}

