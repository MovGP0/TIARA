/* Ghidra address: 0187abd0 */
/* Ghidra symbol: FUN_0187abd0 */


undefined8
FUN_0187abd0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
            undefined8 param_5,undefined8 param_6,longlong param_7,uint param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong local_50;
  undefined8 local_40 [2];
  longlong *local_30;
  
  local_40[0] = 0;
  local_30 = (longlong *)0x0;
  uVar4 = FUN_0041b800(&local_30);
  cVar1 = FUN_00452370(param_7,&DAT_0187ae18,uVar4);
  local_50 = param_3;
  if (cVar1 != '\0') {
    local_50 = (**(code **)(*local_30 + 0x18))(local_30);
  }
  FUN_0046f180(param_2);
  iVar2 = FUN_00416db0(param_5,&DAT_0187ae34);
  if (iVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    iVar2 = FUN_00416db0(param_5,&DAT_0187ae48);
    if (iVar2 == 0) {
      cVar1 = '\x01';
    }
    else {
      iVar2 = FUN_00416db0(param_5,&DAT_0187ae5c);
      if (iVar2 == 0) {
        cVar1 = '\x02';
      }
      else {
        iVar2 = FUN_00416db0(param_5,&LAB_0187ae70);
        if (iVar2 == 0) {
          cVar1 = '\x03';
        }
        else {
          cVar1 = '\x04';
        }
      }
    }
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = FUN_01879fc0(param_1,iVar6);
      if ((*(longlong *)(lVar5 + 0xd0) == local_50) &&
         (lVar5 = FUN_01879fc0(param_1,iVar6), *(char *)(lVar5 + 8) == cVar1)) {
        lVar5 = FUN_01879fc0(param_1,iVar6);
        FUN_0043ea00(local_40,param_6);
        iVar3 = FUN_0043e6d0(*(undefined8 *)(lVar5 + 0x20),local_40[0]);
        if (((iVar3 == 0) &&
            (((param_7 == 0 ||
              (lVar5 = FUN_01879fc0(param_1,iVar6), *(longlong *)(lVar5 + 0x10) == param_7)) &&
             (lVar5 = FUN_01879fc0(param_1,iVar6),
             (bool)*(char *)(lVar5 + 0x18) == ((param_8 & 1) != 0))))) &&
           (lVar5 = FUN_01879fc0(param_1,iVar6),
           (bool)*(char *)(lVar5 + 0x19) == ((param_8 & 2) != 0))) {
          lVar5 = FUN_01879fc0(param_1,iVar6);
          *(undefined4 *)(lVar5 + 0x100) = param_4;
          uVar4 = FUN_01879fc0(param_1,iVar6);
          FUN_01879be0(uVar4,param_2);
          break;
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_40);
  FUN_0041b800(&local_30);
  return param_2;
}

