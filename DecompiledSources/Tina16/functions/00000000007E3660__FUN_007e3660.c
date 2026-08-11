/* Ghidra address: 007e3660 */
/* Ghidra symbol: FUN_007e3660 */


void FUN_007e3660(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x90) == 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffee);
      lVar2 = (*pcVar1)(param_1);
      uVar3 = (**(code **)(lVar2 + 0x28))(lVar2,1,param_1);
      *(undefined8 *)(param_1 + 0x90) = uVar3;
    }
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))(*(longlong **)(param_1 + 0x90),param_2);
    lVar2 = *(longlong *)(param_1 + 0x90);
    *(longlong *)(lVar2 + 0x10) = param_1;
    *(code **)(lVar2 + 8) = FUN_007e3a70;
    pcVar1 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar1)(param_1,param_2,(*(ushort *)(param_2 + 0x34) & 1) != 0);
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

