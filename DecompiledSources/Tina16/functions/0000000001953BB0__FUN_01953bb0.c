/* Ghidra address: 01953bb0 */
/* Ghidra symbol: FUN_01953bb0 */


undefined8 FUN_01953bb0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_0193aeb8);
  if (cVar1 == '\0') {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x118))(param_1);
  }
  if ((param_1 == (longlong *)0x0) || (*(char *)(param_1[0x35] + 0x31) != '\0')) {
    uVar3 = FUN_0194df50(param_2,param_3,param_1);
  }
  else {
    lVar2 = FUN_0196d4a0(param_1[0x33],param_3);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
    }
  }
  return uVar3;
}

