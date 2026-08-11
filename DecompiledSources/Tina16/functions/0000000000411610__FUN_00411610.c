/* Ghidra address: 00411610 */
/* Ghidra symbol: FUN_00411610 */


void FUN_00411610(longlong *param_1,ushort *param_2)

{
  ushort uVar1;
  code *pcVar2;
  
  uVar1 = *param_2;
  if ((uVar1 == 0) || (0xbfff < uVar1)) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else {
    pcVar2 = (code *)FUN_004114d0(*param_1,uVar1);
    if (pcVar2 == (code *)0x0) {
      (**(code **)(*param_1 + -0x38))(param_1,param_2);
    }
    else {
      (*pcVar2)(param_1,param_2);
    }
  }
  return;
}

