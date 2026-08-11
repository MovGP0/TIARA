/* Ghidra address: 01951c00 */
/* Ghidra symbol: FUN_01951c00 */


void FUN_01951c00(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x28))();
    *(undefined4 *)(param_2 + 0xc4) = 0;
    if (*(int *)(param_2 + 0xc4) <= iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_2 + 0xd8) + 0x18))
                  (*(undefined8 *)(param_2 + 0xd8),param_2 + 0x28,*(undefined4 *)(param_2 + 0xc4));
        uVar2 = (**(code **)(**(longlong **)(param_2 + 200) + 0xb0))
                          (*(undefined8 *)(param_2 + 200),*(undefined8 *)(param_2 + 0x28));
        *(undefined4 *)(param_2 + 0xd0) = uVar2;
        if (-1 < *(int *)(param_2 + 0xd0)) {
          (**(code **)(**(longlong **)(param_2 + 200) + 0x98))
                    (*(undefined8 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xd0));
        }
        *(int *)(param_2 + 0xc4) = *(int *)(param_2 + 0xc4) + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0xd8));
  return;
}

