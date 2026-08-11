/* Ghidra address: 01995e50 */
/* Ghidra symbol: FUN_01995e50 */


undefined4
FUN_01995e50(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
            undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  
  uVar2 = 0xfffffffe;
  *param_5 = 0xffffffff;
  lVar4 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  local_38 = param_1;
  local_30 = param_4;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(local_38,iVar5);
      cVar1 = FUN_01995e00(auStack_58,uVar3);
      if (cVar1 != '\0') {
        lVar4 = FUN_00b94e60(local_38,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *local_30 = lVar4;
  if (*local_30 != 0) {
    uVar2 = (**(code **)(*(longlong *)*local_30 + 0x1f8))((longlong *)*local_30,param_2,param_3);
    *param_5 = uVar2;
    uVar2 = (**(code **)(*(longlong *)*local_30 + 0x210))((longlong *)*local_30,*param_5);
  }
  return uVar2;
}

