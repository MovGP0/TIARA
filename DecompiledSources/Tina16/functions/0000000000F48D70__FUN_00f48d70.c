/* Ghidra address: 00f48d70 */
/* Ghidra symbol: FUN_00f48d70 */


void FUN_00f48d70(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  
  bVar3 = false;
  iVar4 = 0;
  do {
    if ((*(int *)(param_1 + 0x10 + (longlong)iVar4 * 8) == param_4) &&
       (*(int *)(param_1 + 0x14 + (longlong)iVar4 * 8) == param_5)) {
      if (iVar4 == 1) {
        FUN_01cefdf0(param_1 + 0x10,param_1 + 0x18);
        FUN_01cefdf0(param_1 + 0x14,param_1 + 0x1c);
      }
      uVar2 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      bVar3 = true;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 2);
  if ((!bVar3) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_00f48d70(*(undefined8 *)(param_1 + 0x20),param_2,param_3 + 1,param_4,param_5);
  }
  if ((param_3 == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    FUN_00f48d70(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),0,
                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  return;
}

