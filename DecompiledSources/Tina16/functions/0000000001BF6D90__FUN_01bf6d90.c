/* Ghidra address: 01bf6d90 */
/* Ghidra symbol: FUN_01bf6d90 */


void FUN_01bf6d90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf1690);
  if (cVar1 != '\0') {
    FUN_01bfd990(param_2,local_20);
    iVar2 = FUN_0043e6d0(local_20[0],*(undefined8 *)(param_1 + 0xe8));
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x110) = param_2;
    }
  }
  FUN_00414480(local_20);
  return;
}

