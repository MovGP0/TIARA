/* Ghidra address: 006eb410 */
/* Ghidra symbol: FUN_006eb410 */


void FUN_006eb410(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  code *pcVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  iVar1 = *(int *)(lVar2 + 0x10);
  if (iVar1 == 0x701) {
    (**(code **)(*param_1 + 0x2b8))(param_1,lVar2 + 0x18);
  }
  else if (iVar1 == 0x702) {
    pcVar4 = (code *)FUN_00411550(param_1,0xffab);
    (*pcVar4)(param_1);
  }
  else if (iVar1 == 0x704) {
    cVar3 = FUN_006eb500(param_1,*(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30));
    if (cVar3 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  else if (iVar1 == 0x708) {
    cVar3 = FUN_006eb4b0(param_1,*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c));
    if (cVar3 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

