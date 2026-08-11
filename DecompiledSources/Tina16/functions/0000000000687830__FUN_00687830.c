/* Ghidra address: 00687830 */
/* Ghidra symbol: FUN_00687830 */


void FUN_00687830(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  
  FUN_0065d100(param_1,param_2,param_3);
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar2 != '\0') {
    if (((char)param_3 != '\0') && (cVar2 = (**(code **)(*param_1 + 0x260))(param_1), cVar2 != '\0')
       ) {
      return;
    }
    lVar1 = param_1[0x92];
    *(undefined1 *)(param_1 + 0x92) = 1;
    (**(code **)(*param_1 + 0x268))(param_1,*(undefined1 *)(param_2 + 0xd8));
    *(char *)(param_1 + 0x92) = (char)lVar1;
  }
  return;
}

