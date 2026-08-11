/* Ghidra address: 01b65390 */
/* Ghidra symbol: FUN_01b65390 */


void FUN_01b65390(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = param_1[0x1b4];
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01b5c4f8);
  if (cVar1 != '\0') {
    lVar2 = FUN_004113f0(lVar2,&PTR_FUN_01b5c4f8);
    cVar1 = (**(code **)(*param_1 + 0x498))(param_1,param_2);
    if ((cVar1 == '\0') && (*(char *)(lVar2 + 0x5b) != '\0')) {
      if (*(longlong *)(param_2 + 0x10) != 0) {
        if ((*(ulonglong *)(param_2 + 8) & 2) == 0) {
          (**(code **)(*param_1 + 0x480))(param_1);
          return;
        }
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
      }
      cVar1 = FUN_00f83630(param_2,(longlong)param_1 + 0xd7a);
      if (cVar1 != '\0') {
        if (*(char *)(param_1[0x1b4] + 0x59) == '\0') {
          uVar3 = FUN_0065b870(param_1);
          FUN_00f83670(uVar3,param_2);
        }
        else {
          local_40 = 0;
          local_38 = 0;
          FUN_01b64fa0(param_1,local_48);
        }
      }
    }
  }
  return;
}

