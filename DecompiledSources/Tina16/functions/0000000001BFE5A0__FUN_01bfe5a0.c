/* Ghidra address: 01bfe5a0 */
/* Ghidra symbol: FUN_01bfe5a0 */


void FUN_01bfe5a0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  if (((char)param_1[0xb] != param_2) ||
     ((param_1[0x10] != 0 && (*(char *)(param_1[0x10] + 0xa9) != param_2)))) {
    *(char *)(param_1 + 0xb) = param_2;
    lVar1 = param_1[0x10];
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0xa9) != param_2)) {
      FUN_0064dbe0(lVar1,(char)param_1[0xb]);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0xa9) != param_2) {
        uVar2 = *(undefined8 *)(lVar1 + 0x78);
        cVar3 = FUN_004113d0(uVar2,&PTR_FUN_01bf5ab8);
        if (cVar3 == '\0') {
          FUN_0064dbe0(lVar1,(char)param_1[0xb]);
        }
        else {
          FUN_0064dbe0(uVar2,0);
        }
      }
      if ((*(ushort *)(param_1[3] + 0x34) & 0x10) == 0) {
        (**(code **)(*param_1 + 0x68))(param_1);
      }
    }
  }
  return;
}

