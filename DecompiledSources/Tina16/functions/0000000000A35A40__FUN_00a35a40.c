/* Ghidra address: 00a35a40 */
/* Ghidra symbol: FUN_00a35a40 */


char FUN_00a35a40(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_10;
  
  local_10 = 0;
  cVar2 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if (cVar2 != '\0') {
    if (0x100 < param_4) {
      FUN_0041ddd0(&local_10,PTR_PTR_02003370);
      FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d660,local_10);
    }
    FUN_0040d200(param_1 + 0x29,0x100,0xff);
    FUN_00409a70(*(undefined8 *)(param_1 + 8),param_1 + 0x29,(longlong)param_4);
    lVar4 = FUN_00a33f40();
    cVar1 = *(char *)(lVar4 + 0x491);
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    else if (cVar1 == '\x03') {
      iVar5 = 0;
      iVar3 = 0;
      if (-1 < param_4 + -1) {
        do {
          if (*(char *)(param_1 + 0x29 + (longlong)iVar3) != -1) {
            iVar5 = iVar5 + 1;
          }
          iVar3 = iVar3 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
      *(bool *)(param_1 + 0x28) = iVar5 == 1;
    }
  }
  FUN_00414480(&local_10);
  return cVar2;
}

