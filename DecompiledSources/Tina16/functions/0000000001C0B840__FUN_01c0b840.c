/* Ghidra address: 01c0b840 */
/* Ghidra symbol: FUN_01c0b840 */


void FUN_01c0b840(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_01be6fe0(param_1);
  if ((char)param_1[0xd0] != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar1 == '\0') {
      lVar2 = param_1[0x93];
      if (lVar2 != 0) {
        cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01bf1690);
        if (cVar1 != '\0') {
          cVar1 = FUN_004113d0(*(undefined8 *)(lVar2 + 0x80),&PTR_FUN_01bdff58);
          if ((cVar1 != '\0') && (param_1[0xd1] == 0)) {
            lVar2 = FUN_01bd83b0(&PTR_FUN_01bd7c80,1,param_1,0);
            param_1[0xd1] = lVar2;
          }
        }
      }
      if (param_1[0xd1] != 0) {
        FUN_01bd85c0(param_1[0xd1],*(undefined8 *)(param_1[0x93] + 0x80));
      }
    }
  }
  return;
}

