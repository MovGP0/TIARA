/* Ghidra address: 01331370 */
/* Ghidra symbol: FUN_01331370 */


void FUN_01331370(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_0132cce0(param_1 + 0x30);
  FUN_0132cce0(param_1 + 0x38);
  FUN_0132e400(param_1 + 0x40);
  FUN_0132cce0(param_1 + 0x78);
  FUN_0132cce0(param_1 + 0xd0);
  FUN_0132cce0(param_1 + 0xd8);
  FUN_0132cce0(param_1 + 0xe0);
  FUN_0132cce0(param_1 + 0xe8);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                          (*(longlong **)(param_1 + 0x130),iVar3);
        uVar2 = FUN_004113f0(uVar2,&DAT_0132f938);
        FUN_00410f20(uVar2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x130));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x138));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x140));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

