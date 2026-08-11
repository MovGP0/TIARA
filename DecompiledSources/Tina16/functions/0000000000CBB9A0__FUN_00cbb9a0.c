/* Ghidra address: 00cbb9a0 */
/* Ghidra symbol: FUN_00cbb9a0 */


void FUN_00cbb9a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cbb5a8);
  if (cVar1 == '\0') {
    FUN_00cbaae0(param_1,param_2);
  }
  else {
    uVar2 = FUN_00cbaf90(param_1);
    FUN_00cbae80(param_2,uVar2);
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))
              (*(longlong **)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

