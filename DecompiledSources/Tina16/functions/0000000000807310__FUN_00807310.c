/* Ghidra address: 00807310 */
/* Ghidra symbol: FUN_00807310 */


void FUN_00807310(longlong *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 local_48 [24];
  
  iVar3 = FUN_00654c00();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00654bc0(param_1,iVar4);
      (**(code **)(*param_1 + 0xe0))(param_1,local_48);
      pcVar2 = (code *)FUN_00411550(uVar1,0xffca);
      (*pcVar2)(uVar1,param_1,local_48);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_007fcbe0(param_1);
  return;
}

