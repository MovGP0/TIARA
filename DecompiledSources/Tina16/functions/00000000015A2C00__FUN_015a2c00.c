/* Ghidra address: 015a2c00 */
/* Ghidra symbol: FUN_015a2c00 */


void FUN_015a2c00(longlong param_1,int param_2,longlong param_3)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  short local_48;
  int local_44;
  int local_3c;
  short asStack_30 [24];
  
  local_48 = 0;
  for (local_44 = 1; local_44 < 0x10; local_44 = local_44 + 1) {
    local_48 = (local_48 + *(short *)(param_3 + (longlong)(local_44 + -1) * 2)) * 2;
    asStack_30[local_44] = local_48;
  }
  for (local_3c = 0; local_3c <= param_2; local_3c = local_3c + 1) {
    uVar3 = (uint)*(ushort *)(param_1 + 2 + (longlong)local_3c * 4);
    if (uVar3 != 0) {
      sVar1 = asStack_30[(int)uVar3];
      asStack_30[(int)uVar3] = asStack_30[(int)uVar3] + 1;
      uVar2 = FUN_015a5370(sVar1,uVar3);
      *(undefined2 *)(param_1 + (longlong)local_3c * 4) = uVar2;
    }
  }
  return;
}

