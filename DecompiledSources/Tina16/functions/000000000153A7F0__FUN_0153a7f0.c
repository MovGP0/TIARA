/* Ghidra address: 0153a7f0 */
/* Ghidra symbol: FUN_0153a7f0 */


void FUN_0153a7f0(undefined8 *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  
  if (param_4 == 0) {
    param_4 = FUN_019a4600();
  }
  *param_2 = 0;
  if (param_4 == 0) {
    *param_1 = 0;
  }
  else {
    iVar3 = *(int *)(param_4 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_4,iVar2);
        FUN_0153a640(auStack_58,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = FUN_00409570((longlong)(*param_2 * 8));
    *param_1 = uVar1;
    local_2c = 0;
    iVar3 = *(int *)(param_4 + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_00b94e60(param_4,iVar2);
        FUN_0153a700(auStack_58,uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

