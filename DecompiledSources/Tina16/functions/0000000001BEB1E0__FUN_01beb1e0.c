/* Ghidra address: 01beb1e0 */
/* Ghidra symbol: FUN_01beb1e0 */


void FUN_01beb1e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,char *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  
  FUN_01c06a80(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_6 != '\0') {
    uVar2 = FUN_01c07120(param_1);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bdc350);
    if (cVar1 != '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
      if ((cVar1 != '\0') && (*(longlong *)(param_2 + 0x58) == *(longlong *)(param_1 + 800))) {
        lVar3 = FUN_01c07120(param_1);
        if (lVar3 != 0) {
          uVar2 = FUN_01c07120(param_1);
          cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bdc350);
          if (cVar1 != '\0') {
            uVar2 = FUN_01c07120(param_1);
            FUN_01be1b80(uVar2);
          }
        }
      }
      if (*(char *)(param_1 + 0x344) == '\0') {
        *(undefined1 *)(param_1 + 0x369) = 1;
        pcVar4 = (code *)FUN_00411550(param_1,0xffea);
        (*pcVar4)(param_1);
      }
    }
  }
  return;
}

