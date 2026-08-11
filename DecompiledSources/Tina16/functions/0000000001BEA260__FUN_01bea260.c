/* Ghidra address: 01bea260 */
/* Ghidra symbol: FUN_01bea260 */


void FUN_01bea260(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,char *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
  if (cVar1 != '\0') {
    lVar3 = param_1[100];
    if (lVar3 == *(longlong *)(param_2 + 0x58)) {
      cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 0x30),&PTR_FUN_01bdc350);
      if (cVar1 != '\0') {
        (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x408))(*(longlong **)(lVar3 + 0x30));
      }
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1[0x6d] + 0x5d0) + 0x580);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 800) == *(longlong *)(param_2 + 0x58))) {
      *(undefined8 *)(*(longlong *)(param_1[0x6d] + 0x5d0) + 0x580) = 0;
    }
  }
  FUN_01c06a80(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*param_6 != '\0') {
    uVar2 = FUN_01c07120(param_1);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01bdc350);
    if (cVar1 != '\0') {
      lVar3 = FUN_01c07120(param_1);
      if (*(char *)(lVar3 + 0x592) != '\0') {
        (**(code **)(*param_1 + 600))(param_1,1);
      }
    }
  }
  return;
}

