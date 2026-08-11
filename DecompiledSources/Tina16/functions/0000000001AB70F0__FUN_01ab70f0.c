/* Ghidra address: 01ab70f0 */
/* Ghidra symbol: FUN_01ab70f0 */


void FUN_01ab70f0(longlong param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0xe8);
  if (param_2 < iVar2) {
    param_2 = iVar2;
  }
  if (param_3 < iVar2) {
    param_3 = iVar2;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0xec);
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (iVar2 < param_3) {
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xb0) = param_3;
  if (param_4 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 == 0) {
      lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xe8));
    FUN_01d2c460(lVar1,param_3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xe8));
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    }
    *(longlong *)(param_1 + 0xa8) = lVar1;
  }
  else if (param_4 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 == 0) {
      lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xec));
    FUN_01d2c460(lVar1,param_3,*(undefined4 *)(*(longlong *)(param_1 + 0xf0) + 0xec));
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    }
    *(longlong *)(param_1 + 0xa8) = lVar1;
  }
  else if ((byte)(param_4 - 2U) < 2) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 == 0) {
      lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    FUN_01d2c460(lVar1,param_3,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    }
    *(longlong *)(param_1 + 0xa8) = lVar1;
  }
  else if (param_4 == '\x04') {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 == 0) {
      lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    }
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    iVar2 = (param_3 - param_2) / 5;
    FUN_01d2c460(lVar1,param_2 + iVar2,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
                (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    }
    lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2 + iVar2 * 2,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    FUN_01d2c460(lVar1,param_2 + iVar2 * 3,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
              (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    lVar1 = FUN_01d2b190(&PTR_FUN_01d29210,1);
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x10))
              (*(longlong **)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x78));
    FUN_01d2c460(lVar1,param_2 + iVar2 * 4,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    FUN_01d2c460(lVar1,param_3,
                 (longlong)
                 (*(int *)(*(longlong *)(param_1 + 0xf0) + 0xe8) +
                 *(int *)(*(longlong *)(param_1 + 0xf0) + 0xec)) / 2 & 0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
              (*(longlong **)(param_1 + 0x48),L"CurveLine",lVar1);
    *(longlong *)(param_1 + 0xa8) = lVar1;
  }
  return;
}

