/* Ghidra address: 018812e0 */
/* Ghidra symbol: FUN_018812e0 */


void FUN_018812e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined4 param_7,char param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_01881250(param_1,iVar4);
      if (((*(longlong *)(lVar3 + 0x18) != 0) && (*(longlong *)(lVar3 + 0x18) == param_2)) &&
         (*(ushort *)(lVar3 + 0x40) == param_6)) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != 0) {
    FUN_004a0a40(param_2);
  }
  lVar3 = FUN_004b1ca0(param_1);
  *(longlong *)(lVar3 + 0x18) = param_2;
  *(longlong *)(lVar3 + 0x20) = param_3;
  *(undefined4 *)(lVar3 + 0x28) = param_7;
  FUN_00414ad0(lVar3 + 0x30,param_4);
  FUN_00414ad0(lVar3 + 0x38,param_5);
  *(undefined2 *)(lVar3 + 0x40) = (undefined2)param_6;
  *(char *)(lVar3 + 0x42) = param_8;
  if ((param_2 != 0) && (param_8 == '\0')) {
    cVar1 = FUN_00411580(param_2,&PTR_FUN_0191d1a8);
    if ((cVar1 == '\0') && (cVar1 = FUN_00411580(param_2,&PTR_FUN_0191f4f0), cVar1 == '\0')) {
      cVar1 = FUN_00411580(param_2,&PTR_FUN_0191c328);
      if ((cVar1 == '\0') && (cVar1 = FUN_00411580(param_2,&PTR_FUN_0191bda0), cVar1 == '\0')) {
        *(undefined1 *)(lVar3 + 0x42) = 2;
      }
      else {
        *(undefined1 *)(lVar3 + 0x42) = 4;
      }
    }
    else {
      *(undefined1 *)(lVar3 + 0x42) = 1;
    }
  }
  if (param_3 != 0) {
    FUN_00609160(param_3);
  }
  return;
}

