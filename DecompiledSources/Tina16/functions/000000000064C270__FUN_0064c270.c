/* Ghidra address: 0064c270 */
/* Ghidra symbol: FUN_0064c270 */


void FUN_0064c270(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xffff7fff;
  }
  else {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x8000;
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      pcVar1 = (code *)FUN_00411550(param_1,0xffd9);
      lVar2 = (*pcVar1)(param_1);
      uVar3 = (**(code **)(lVar2 + 0x28))(lVar2,1,param_1);
      *(undefined8 *)(param_1 + 0xc0) = uVar3;
    }
    (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x18))(*(longlong **)(param_1 + 0xc0),param_2);
    lVar2 = *(longlong *)(param_1 + 0xc0);
    *(longlong *)(lVar2 + 0x10) = param_1;
    *(code **)(lVar2 + 8) = FUN_00651c30;
    pcVar1 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar1)(param_1,param_2,(*(ushort *)(param_2 + 0x34) & 1) != 0);
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

