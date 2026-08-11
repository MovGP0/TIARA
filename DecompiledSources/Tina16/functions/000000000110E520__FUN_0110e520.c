/* Ghidra address: 0110e520 */
/* Ghidra symbol: FUN_0110e520 */


void FUN_0110e520(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if (0 < iVar1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105d80);
    *(undefined8 *)(lVar3 + 0x130) = param_2;
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      FUN_01539230(*(longlong *)(lVar3 + 0x20),*(undefined1 *)(lVar3 + 0x110),
                   *(undefined8 *)(lVar3 + 0x120),*(undefined8 *)(lVar3 + 0x118),
                   *(undefined8 *)(lVar3 + 0x130),*(undefined8 *)(lVar3 + 0x128));
      FUN_0110e100(param_1);
    }
  }
  return;
}

