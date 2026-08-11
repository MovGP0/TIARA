/* Ghidra address: 0195f970 */
/* Ghidra symbol: FUN_0195f970 */


void FUN_0195f970(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00414ad0(param_1 + 100);
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
    uVar2 = FUN_0196dc70(*(undefined8 *)(lVar1 + 0x278),param_1[100]);
    FUN_019644e0(param_1,uVar2);
  }
  return;
}

