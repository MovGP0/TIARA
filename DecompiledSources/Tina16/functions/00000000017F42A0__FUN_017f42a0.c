/* Ghidra address: 017f42a0 */
/* Ghidra symbol: FUN_017f42a0 */


uint FUN_017f42a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar2 = 0;
  iVar3 = *(int *)(param_1 + 8) + -1;
  dVar5 = (double)(**(code **)(param_1 + 0x28))(&local_48,*(undefined8 *)(param_1 + 0x20));
  if (-1 < iVar3) {
    do {
      uVar4 = uVar2 + iVar3 >> 1;
      dVar6 = (double)(**(code **)(param_1 + 0x28))
                                (*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x10,
                                 *(undefined8 *)(param_1 + 0x20));
      if (dVar5 <= dVar6) {
        if (dVar6 <= dVar5) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      else {
        iVar1 = -1;
      }
      if (iVar1 < 0) {
        uVar2 = uVar4 + 1;
      }
      else {
        iVar3 = uVar4 - 1;
        if (iVar1 == 0) {
          uVar2 = uVar4;
        }
      }
    } while ((int)uVar2 <= iVar3);
  }
  return uVar2;
}

