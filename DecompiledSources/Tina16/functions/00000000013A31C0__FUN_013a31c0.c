/* Ghidra address: 013a31c0 */
/* Ghidra symbol: FUN_013a31c0 */


void FUN_013a31c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 *local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00416ad0(param_2,&DAT_013a32f4);
  local_40 = &local_48;
  local_38 = 3;
  local_48 = param_3;
  FUN_00442f70(local_30,L"%10.5e",&local_40,0);
  FUN_00414b50(*(longlong *)(param_1 + 0x100) + 0x48,local_30[0]);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x48);
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x100) + 0x48) + -2 + (longlong)iVar2 * 2
                    ) == 0x2c) {
        lVar1 = FUN_00414de0(*(longlong *)(param_1 + 0x100) + 0x48);
        *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = 0x2e;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00416ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x48));
  FUN_00414480(local_30);
  return;
}

