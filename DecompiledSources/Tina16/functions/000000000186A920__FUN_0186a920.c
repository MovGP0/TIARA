/* Ghidra address: 0186a920 */
/* Ghidra symbol: FUN_0186a920 */


void FUN_0186a920(longlong param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 0x4fa) {
    if (*(longlong *)(param_2 + 2) != 0) {
      (*(code *)**(undefined8 **)(param_2 + 2))((*(undefined8 **)(param_2 + 2))[1]);
    }
  }
  else if (iVar1 == 0x4fb) {
    puVar2 = *(undefined4 **)(param_2 + 2);
    uVar3 = thunk_FUN_041b2403(*(undefined8 *)(param_2 + 4),*puVar2,*(undefined8 *)(puVar2 + 2),
                               *(undefined8 *)(puVar2 + 4));
    *(undefined8 *)(puVar2 + 6) = uVar3;
  }
  else {
    uVar3 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  return;
}

