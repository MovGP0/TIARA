/* Ghidra address: 00603a50 */
/* Ghidra symbol: FUN_00603a50 */


void FUN_00603a50(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  cVar2 = FUN_004113d0(uVar1,*param_2);
  if (cVar2 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,uVar1);
  }
  return;
}

