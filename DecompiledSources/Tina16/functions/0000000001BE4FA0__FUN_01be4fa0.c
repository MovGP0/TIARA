/* Ghidra address: 01be4fa0 */
/* Ghidra symbol: FUN_01be4fa0 */


void FUN_01be4fa0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_01c01ac0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf4f40);
    if (cVar1 != '\0') {
      if (*(longlong *)(param_2 + 800) == *(longlong *)(param_1 + 0x658)) {
        *(undefined8 *)(param_1 + 0x658) = 0;
      }
      else if (param_2 == *(longlong *)(param_1 + 0x598)) {
        *(undefined8 *)(param_1 + 0x598) = 0;
      }
    }
  }
  return;
}

