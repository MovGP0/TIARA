/* Ghidra address: 007071a0 */
/* Ghidra symbol: FUN_007071a0 */


void FUN_007071a0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_00707f20(uVar1);
  cVar2 = FUN_0065be20(uVar4);
  if (cVar2 != '\0') {
    uVar4 = FUN_00707f20(uVar1);
    uVar4 = FUN_0065b870(uVar4);
    thunk_FUN_041b2403(uVar4,0x1096,(longlong)*(int *)(param_1 + 0x28),0);
  }
  lVar5 = FUN_00707f20(uVar1);
  uVar4 = *(undefined8 *)(lVar5 + 0x4e0);
  lVar5 = FUN_00707f20(uVar1);
  if (*(char *)(lVar5 + 0x510) == '\0') {
    iVar3 = FUN_006efc30();
    iVar7 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar5 = FUN_006efcb0(uVar4,iVar7);
        if (*(int *)(lVar5 + 0x48) == *(int *)(param_1 + 0x28)) {
          uVar6 = FUN_006efcb0(uVar4,iVar7);
          FUN_006eeef0(uVar6,0xffffffff);
        }
        iVar7 = iVar7 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  FUN_00707d70(uVar1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

