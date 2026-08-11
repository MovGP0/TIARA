/* Ghidra address: 00bc5680 */
/* Ghidra symbol: FUN_00bc5680 */


longlong * FUN_00bc5680(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00414ad0(param_2,&DAT_00bc5820);
  cVar2 = FUN_00bc5b70(param_1,1);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5830);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5830,*param_2);
  }
  cVar2 = FUN_00bc5b70(param_1,2);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5840);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5840,*param_2);
  }
  cVar2 = FUN_00bc5b70(param_1,3);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5850);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5850,*param_2);
  }
  cVar2 = FUN_00bc5b70(param_1,4);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5860);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5860,*param_2);
  }
  cVar2 = FUN_00bc5b70(param_1,5);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5870);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5870,*param_2);
  }
  cVar2 = FUN_00bc5b70(param_1,6);
  if (cVar2 == '\0') {
    FUN_00416ad0(param_2,&DAT_00bc5880);
  }
  else {
    FUN_00416ba0(param_2,&DAT_00bc5880,*param_2);
  }
  iVar3 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  if (*(short *)(*param_2 + -2 + (longlong)iVar3 * 2) == 0x2d) {
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_2,uVar4,1);
  }
  return param_2;
}

