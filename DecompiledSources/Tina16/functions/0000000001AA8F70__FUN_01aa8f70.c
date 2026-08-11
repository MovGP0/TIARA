/* Ghidra address: 01aa8f70 */
/* Ghidra symbol: FUN_01aa8f70 */


ushort FUN_01aa8f70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  bool bVar4;
  ushort local_12;
  undefined8 local_10;
  
  local_10 = 0;
  bVar4 = false;
  uVar3 = 1;
  while ((uVar2 = (ushort)uVar3, !bVar4 && (uVar2 <= *(ushort *)(param_1 + 2)))) {
    bVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4 + uVar3 * 4) == param_2;
    if (!bVar4) {
      uVar3 = (ulonglong)(ushort)(uVar2 + 1);
    }
  }
  if (!bVar4) {
    if (*(ushort *)(param_1 + 2) < 10000) {
      if (param_2 < 0) {
        local_12 = 1;
        uVar2 = local_12;
      }
      else {
        *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
        *(int *)(*(longlong *)(param_1 + 8) + -4 + (ulonglong)*(ushort *)(param_1 + 2) * 4) =
             param_2;
        uVar2 = *(ushort *)(param_1 + 2);
      }
    }
    else {
      uVar1 = FUN_00b89270();
      FUN_00b8e520(uVar1,&local_10,0x500);
      FUN_00414ad0(DAT_02110a68,local_10);
      FUN_01aa37d0(1,&DAT_02110a68);
      FUN_01aa36f0();
      uVar2 = local_12;
    }
  }
  local_12 = uVar2;
  FUN_00414480(&local_10);
  return local_12;
}

