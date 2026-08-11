/* Ghidra address: 008b9140 */
/* Ghidra symbol: FUN_008b9140 */


longlong * FUN_008b9140(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_008b87a0(param_1,param_2);
  FUN_008b87a0(param_1,param_3);
  FUN_008b8930(param_1,param_2);
  FUN_008b8850(param_1,param_2);
  FUN_008b8890(param_1);
  FUN_008b88d0(param_1,param_2);
  FUN_008b8800(param_1,param_3);
  if (param_2 != param_3) {
    lVar1 = (**(code **)(*param_2 + 0x90))(param_2);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
      uVar2 = (**(code **)(*param_2 + 0x90))(param_2);
      FUN_008b8ea0(uVar2,param_2);
      (**(code **)(*param_1 + 0x50))(param_1,param_2);
    }
    uVar2 = (**(code **)(*param_3 + 0x88))(param_3);
    (**(code **)(*param_1 + 0x68))(param_1,param_3);
    FUN_008b8ea0(param_1,param_3);
    (**(code **)(*param_1 + 0x50))(param_1,param_3);
    (**(code **)(*param_1 + 0x58))(param_1,param_2);
    FUN_008b8da0(param_1,param_2,uVar2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
  }
  return param_3;
}

