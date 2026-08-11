/* Ghidra address: 0064e650 */
/* Ghidra symbol: FUN_0064e650 */


void FUN_0064e650(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_007f9b70(param_1,1);
  plVar2 = (longlong *)FUN_00648930();
  if ((((plVar2 != (longlong *)0x0) && (plVar2 != plVar1)) && (plVar2 != param_1)) &&
     (plVar2[0xf] == 0)) {
    (**(code **)(*plVar2 + 0x150))(plVar2,param_2);
  }
  if (*(longlong *)(param_2 + 0x18) == 0) {
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
      pcVar3 = (code *)FUN_00411550(plVar1,0xffc7);
      (*pcVar3)(plVar1,param_2);
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      uVar4 = FUN_0064fca0(param_1,0xb043,*(undefined8 *)(param_2 + 8),
                           *(undefined8 *)(param_2 + 0x10));
      *(undefined8 *)(param_2 + 0x18) = uVar4;
    }
  }
  return;
}

