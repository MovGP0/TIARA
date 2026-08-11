/* Ghidra address: 013d23c0 */
/* Ghidra symbol: FUN_013d23c0 */


void FUN_013d23c0(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(longlong *)(param_1 + 0x28) == 0) {
LAB_013d2427:
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                          (*(longlong **)(param_1 + 0x18),iVar4);
        FUN_00410f20(uVar3);
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                          (*(longlong **)(param_1 + 0x18),iVar4);
        cVar1 = FUN_013d2640(param_1,uVar3,*(undefined8 *)(param_1 + 0x28));
        if (cVar1 == '\0') goto LAB_013d2427;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

