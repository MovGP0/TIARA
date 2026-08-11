/* Ghidra address: 00b3f1b0 */
/* Ghidra symbol: FUN_00b3f1b0 */


void FUN_00b3f1b0(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_29;
  
  local_29 = *(byte *)(param_3 + 0x100);
  bVar3 = *(byte *)(param_3 + 0x101);
  uVar4 = (uint)bVar3;
  iVar5 = 0;
  if (-1 < param_2 + -1) {
    do {
      uVar1 = (ulonglong)(local_29 + 1) % 0x100;
      local_29 = (byte)uVar1;
      uVar2 = (ulonglong)(*(byte *)(param_3 + uVar1) + uVar4) % 0x100;
      uVar4 = (uint)uVar2;
      bVar3 = (byte)uVar2;
      FUN_00b3f0c0(param_3 + uVar1);
      *(byte *)(param_1 + iVar5) =
           *(byte *)(param_1 + iVar5) ^
           *(byte *)(param_3 +
                    (ulonglong)((uint)*(byte *)(param_3 + uVar1) + (uint)*(byte *)(param_3 + uVar2))
                    % 0x100);
      iVar5 = iVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(byte *)(param_3 + 0x100) = local_29;
  *(byte *)(param_3 + 0x101) = bVar3;
  return;
}

