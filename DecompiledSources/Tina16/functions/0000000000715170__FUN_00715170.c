/* Ghidra address: 00715170 */
/* Ghidra symbol: FUN_00715170 */


undefined1
FUN_00715170(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4,
            undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_39;
  longlong *local_30 [2];
  
  local_30[0] = (longlong *)0x0;
  local_39 = 0;
  if (param_3 != 0) {
    FUN_00414ad0(param_1 + 0x40,param_3);
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      uVar3 = FUN_0041b800(local_30);
      cVar2 = FUN_00452340(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8) + 8)
                           ,&DAT_00715278,uVar3);
      if (cVar2 != '\0') {
        local_39 = (**(code **)(*local_30[0] + 0x80))(local_30[0],param_2,param_3,param_4,param_5);
        break;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0041b800(local_30);
  return local_39;
}

