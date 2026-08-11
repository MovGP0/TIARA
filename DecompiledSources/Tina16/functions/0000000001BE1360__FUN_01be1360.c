/* Ghidra address: 01be1360 */
/* Ghidra symbol: FUN_01be1360 */


void FUN_01be1360(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  
  if (param_1 != 0) goto LAB_01be1412;
  iVar1 = *(int *)(param_3 + 0x10);
  if (iVar1 < 0x1b) {
    if (iVar1 == 0x1a) {
      if (DAT_02111448 != (code *)0x0) {
        (*DAT_02111448)();
      }
      goto LAB_01be1412;
    }
    if (iVar1 != 5) {
      if (iVar1 == 6) {
        cVar2 = FUN_004113d0(DAT_02111468,&PTR_FUN_01bdd620);
        if (((cVar2 != '\0') && (DAT_02111468 != (longlong *)0x0)) &&
           ((char)DAT_02111468[0xcc] == '\0')) {
          (**(code **)(*DAT_02111468 + 0x408))(DAT_02111468);
        }
      }
      goto LAB_01be1412;
    }
  }
  else if ((iVar1 != 0x221) && (iVar1 != 0x229)) goto LAB_01be1412;
  FUN_01be1240(auStack_48);
LAB_01be1412:
  thunk_FUN_04186711(DAT_02111458,param_1,param_2,param_3);
  return;
}

