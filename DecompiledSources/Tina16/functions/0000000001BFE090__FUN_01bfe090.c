/* Ghidra address: 01bfe090 */
/* Ghidra symbol: FUN_01bfe090 */


void FUN_01bfe090(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (*(longlong *)(param_1 + 0x80) != param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_00410f20(uVar1);
    *(longlong *)(param_1 + 0x80) = param_2;
    if (param_2 != 0) {
      uVar1 = FUN_01bfd980(param_1);
      pcVar2 = (code *)FUN_00411550(param_1,0xfffd);
      (*pcVar2)(param_1,uVar1,1);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x248))(*(longlong **)(param_1 + 0x80),param_1)
      ;
    }
  }
  return;
}

