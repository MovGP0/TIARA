/* Ghidra address: 007d5700 */
/* Ghidra symbol: FUN_007d5700 */


void FUN_007d5700(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  if (param_2 == (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xe8))(*(longlong **)(param_1 + 0xb8));
  }
  else {
    cVar1 = FUN_00609f90(param_2);
    if (cVar1 == (&DAT_01e12594)[*(byte *)(param_1 + 0xe0)]) {
      (**(code **)(*param_2 + 0xe8))(param_2);
    }
    else {
      uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
      uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
      (**(code **)(*param_3 + 0xe0))(param_3,uVar2,uVar3);
      FUN_0060bbf0(param_3,(&DAT_01e12594)[*(byte *)(param_1 + 0xe0)]);
      plVar4 = (longlong *)FUN_00609e10(param_3);
      (**(code **)(*plVar4 + 0x88))(plVar4,0,0,param_2);
      (**(code **)(*param_3 + 0xe8))(param_3);
    }
  }
  return;
}

