/* Ghidra address: 01798460 */
/* Ghidra symbol: FUN_01798460 */


void FUN_01798460(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xba0) + 0x80);
  FUN_007e2d20(*(longlong *)(param_1 + 0xba0),0);
  *(int *)(param_1 + 0xca0) = param_2;
  if (-1 < param_2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))(*(longlong **)(param_1 + 0xd18));
    if (param_2 < iVar2) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0xca8));
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                        (*(longlong **)(param_1 + 0xd18),param_2);
      uVar4 = FUN_00c3f320(uVar4);
      *(undefined8 *)(param_1 + 0xca8) = uVar4;
      FUN_01798920(param_1,0);
      if (cVar1 == '\0') {
LAB_017984eb:
        uVar3 = 0;
      }
      else {
        uVar4 = FUN_0179d790(param_1);
        if ((char)uVar4 == '\0') goto LAB_017984eb;
        uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      FUN_007e2d20(*(undefined8 *)(param_1 + 0xba0),uVar3);
      goto LAB_01798539;
    }
  }
  if (param_2 == -1) {
    if (*(longlong *)(param_1 + 0xca8) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0xca8));
    }
    uVar4 = FUN_00c3d400(&LAB_00c3a6d0,1);
    *(undefined8 *)(param_1 + 0xca8) = uVar4;
    FUN_01798920(param_1,0);
  }
LAB_01798539:
  FUN_01798610(param_1);
  return;
}

