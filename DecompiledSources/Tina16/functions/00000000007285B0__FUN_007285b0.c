/* Ghidra address: 007285b0 */
/* Ghidra symbol: FUN_007285b0 */


uint FUN_007285b0(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if ((uVar1 & 0x80000000) == 0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffee);
    uVar3 = (*pcVar2)(param_1);
    uVar1 = *(uint *)(&DAT_01e05d1c + (uVar3 & 0xff) * 4);
  }
  plVar4 = (longlong *)FUN_00728d30(param_1);
  (**(code **)(*plVar4 + 0x90))(plVar4);
  return uVar1;
}

