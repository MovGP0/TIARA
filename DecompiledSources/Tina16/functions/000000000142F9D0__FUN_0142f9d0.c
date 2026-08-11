/* Ghidra address: 0142f9d0 */
/* Ghidra symbol: FUN_0142f9d0 */


undefined1 FUN_0142f9d0(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
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
  iVar1 = 1;
  if (0 < iVar4) {
    do {
      uVar3 = *(short *)(local_res8[0] + -2 + (longlong)iVar1 * 2) - 0x30;
      if (uVar3 < 8) {
        bVar5 = ((int)CONCAT71((int7)(int3)((uint)iVar1 >> 8),1) << ((byte)uVar3 & 0x1f) & 3U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (!bVar5) {
        local_9 = 0;
        goto LAB_0142fa71;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_01aa10d0(local_res8[0]);
  *param_2 = uVar2;
LAB_0142fa71:
  FUN_00414480(local_res8);
  return local_9;
}

