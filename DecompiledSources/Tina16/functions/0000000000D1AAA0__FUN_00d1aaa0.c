/* Ghidra address: 00d1aaa0 */
/* Ghidra symbol: FUN_00d1aaa0 */


void FUN_00d1aaa0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < (int)param_3) {
    uVar1 = *(uint *)(param_1 + 0x28) & 0x3f;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = 0x80 - uVar1;
      if ((int)param_3 < iVar2) {
        FUN_00409a70(param_2,param_1 + 0x2c + (longlong)(int)uVar1,(longlong)(int)param_3);
        return;
      }
      FUN_00409a70(param_2,param_1 + 0x2c + (longlong)(int)uVar1,(longlong)iVar2);
      (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x2c);
      param_3 = param_3 - iVar2;
    }
    lVar3 = param_2 + iVar2;
    uVar1 = param_3 & 0xffffff80;
    for (; 0x7f < (int)param_3; param_3 = param_3 - 0x80) {
      (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0xd8),lVar3);
      lVar3 = lVar3 + 0x80;
    }
    FUN_00409a70(param_2 + (int)(iVar2 + uVar1),param_1 + 0x2c,(longlong)(int)param_3);
  }
  return;
}

