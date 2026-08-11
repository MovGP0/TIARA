/* Ghidra address: 01970f30 */
/* Ghidra symbol: FUN_01970f30 */


undefined8 FUN_01970f30(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    lVar1 = FUN_0196d420(*(undefined8 *)(param_1 + 0x170),param_3);
    if (lVar1 == 0) {
      uVar2 = FUN_0180bfb0();
      FUN_01809b60(uVar2,param_2,L"clDSNotIncl");
    }
    else {
      FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x1c8));
    }
  }
  return param_2;
}

