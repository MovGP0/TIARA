/* Ghidra address: 00ea4190 */
/* Ghidra symbol: FUN_00ea4190 */


undefined8 FUN_00ea4190(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_10;
  
  local_10 = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = *(int *)(param_3 + -4);
  }
  FUN_00419260(&local_10,&DAT_004065c0,1,(longlong)(iVar5 * 2));
  iVar4 = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = *(int *)(param_3 + -4);
  }
  iVar2 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = *(ushort *)(param_3 + (longlong)iVar2 * 2);
      uVar6 = (ulonglong)uVar1;
      if (uVar6 < 0x2d) {
        if (uVar6 != 0) {
          if (((uVar6 != 0x24) && (uVar6 != 0x26)) && (3 < uVar6 - 0x28)) goto LAB_00ea42c9;
          goto LAB_00ea4280;
        }
        *(undefined2 *)(local_10 + (longlong)iVar4 * 2) = 0x5c;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(local_10 + (longlong)iVar4 * 2) = 0x30;
      }
      else {
        if (uVar6 < 0x3e) {
          if ((1 < uVar6 - 0x2d) && (uVar6 - 0x2d != 0xf)) {
LAB_00ea42c9:
            *(ushort *)(local_10 + (longlong)iVar4 * 2) = uVar1;
            goto LAB_00ea42d5;
          }
        }
        else if (((1 < uVar6 - 0x3e) && (3 < uVar6 - 0x5b)) && (2 < uVar6 - 0x7b))
        goto LAB_00ea42c9;
LAB_00ea4280:
        *(undefined2 *)(local_10 + (longlong)iVar4 * 2) = 0x5c;
        iVar4 = iVar4 + 1;
        *(undefined2 *)(local_10 + (longlong)iVar4 * 2) =
             *(undefined2 *)(param_3 + (longlong)iVar2 * 2);
      }
LAB_00ea42d5:
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar3 = 0;
  if (local_10 != 0) {
    lVar3 = *(longlong *)(local_10 + -8);
  }
  FUN_00456310(param_2,local_10,lVar3 + -1,0,iVar4);
  FUN_00419430(&local_10,&DAT_004065c0);
  return param_2;
}

