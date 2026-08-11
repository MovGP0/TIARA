/* Ghidra address: 00cbaae0 */
/* Ghidra symbol: FUN_00cbaae0 */


void FUN_00cbaae0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cb9f68);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    FUN_00cbafb0(param_2,*(undefined8 *)(param_1 + 0x18));
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
              (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

