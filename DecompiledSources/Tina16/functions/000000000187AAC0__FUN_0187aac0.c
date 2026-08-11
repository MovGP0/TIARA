/* Ghidra address: 0187aac0 */
/* Ghidra symbol: FUN_0187aac0 */


undefined8
FUN_0187aac0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_0046f180(param_2);
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01879fc0(param_1,iVar4);
      if (*(longlong *)(lVar2 + 0xd0) == param_3) {
        lVar2 = FUN_01879fc0(param_1,iVar4);
        FUN_0043ea00(local_30,param_4);
        iVar1 = FUN_0043e6d0(*(undefined8 *)(lVar2 + 200),local_30[0]);
        if (iVar1 == 0) {
          lVar2 = FUN_01879fc0(param_1,iVar4);
          *(undefined4 *)(lVar2 + 0x100) = param_5;
          uVar3 = FUN_01879fc0(param_1,iVar4);
          FUN_01879be0(uVar3,param_2);
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

