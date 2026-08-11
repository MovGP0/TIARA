/* Ghidra address: 00705760 */
/* Ghidra symbol: FUN_00705760 */


void FUN_00705760(longlong *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  FUN_0065d100(param_1,param_2,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006a2930);
  if (cVar1 != '\0') {
    if (((char)param_3 == '\0') || (param_1[0xad] == 0)) {
      FUN_007045b0(param_1,*(undefined8 *)(param_2 + 0x140));
    }
    if (((char)param_3 != '\0') && (iVar2 = (**(code **)(*param_1 + 0x260))(param_1), iVar2 == -1))
    {
      return;
    }
    (**(code **)(*param_1 + 0x268))(param_1,*(undefined4 *)(param_2 + 0x180));
  }
  return;
}

