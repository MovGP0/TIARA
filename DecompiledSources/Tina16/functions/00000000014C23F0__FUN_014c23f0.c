/* Ghidra address: 014c23f0 */
/* Ghidra symbol: FUN_014c23f0 */


undefined8 FUN_014c23f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  uStack_38 = param_3[2];
  uStack_30 = param_3[3];
  iVar2 = 1;
  while( true ) {
    iVar3 = 0;
    if (param_2 != 0) {
      iVar3 = *(int *)(param_2 + -4);
    }
    if (iVar3 < iVar2) break;
    uVar1 = *(ushort *)(param_2 + -2 + (longlong)iVar2 * 2);
    if (uVar1 < 0x100) {
      bVar4 = (*(byte *)((longlong)&local_48 + ((longlong)(ulonglong)uVar1 >> 3)) >>
               ((ulonglong)uVar1 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
    iVar2 = iVar2 + 1;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    uVar1 = *(ushort *)(param_2 + -2 + (longlong)iVar3 * 2);
    if (uVar1 < 0x100) {
      bVar4 = (*(byte *)((longlong)&local_48 + ((longlong)(ulonglong)uVar1 >> 3)) >>
               ((ulonglong)uVar1 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
  }
  FUN_00414740(param_1,param_2 + -2 + (longlong)iVar2 * 2,(iVar3 - iVar2) + 1);
  return param_1;
}

