/* Ghidra address: 00703a70 */
/* Ghidra symbol: FUN_00703a70 */


void FUN_00703a70(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006d0410);
  if (cVar1 == '\0') {
    FUN_006a3130(param_1,param_2);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  }
  return;
}

