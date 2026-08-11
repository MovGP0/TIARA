/* Ghidra address: 019efd00 */
/* Ghidra symbol: FUN_019efd00 */


undefined8 FUN_019efd00(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_40 = param_2;
  local_38 = param_3;
  FUN_00414480(param_2);
  lVar1 = local_38;
  plVar4 = (longlong *)0x0;
  iVar6 = *(int *)(local_38 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar5);
      cVar2 = FUN_019efca0(auStack_68,uVar3);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FUN_00b94e60(lVar1,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
    FUN_019eecc0(*(undefined8 *)(param_1 + 0xb0),local_40,local_30);
  }
  FUN_00414480(&local_30);
  return local_40;
}

