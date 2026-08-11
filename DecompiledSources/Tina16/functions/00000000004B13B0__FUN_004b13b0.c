/* Ghidra address: 004b13b0 */
/* Ghidra symbol: FUN_004b13b0 */


void FUN_004b13b0(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  FUN_0041b800(param_2);
  if (param_1 != (longlong *)0x0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffffffff);
    lVar3 = (*pcVar2)(param_1);
    if (lVar3 == 0) {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_00486f38);
      if ((cVar1 != '\0') && ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) {
        uVar4 = FUN_0041b800(param_2);
        (**(code **)(*param_1 + 0x70))(param_1,&DAT_004b1468,uVar4);
      }
    }
    else {
      cVar1 = FUN_004113d0(param_1,&PTR_FUN_00486f38);
      if ((cVar1 == '\0') || ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)) {
        uVar4 = FUN_0041b800(param_2);
        FUN_004b13b0(lVar3,uVar4);
      }
    }
  }
  return;
}

