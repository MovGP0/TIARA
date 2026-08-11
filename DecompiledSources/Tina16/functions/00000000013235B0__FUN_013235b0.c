/* Ghidra address: 013235b0 */
/* Ghidra symbol: FUN_013235b0 */


longlong * FUN_013235b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  local_40 = param_1;
  FUN_00414610(param_2);
  local_38 = (longlong *)0x0;
  iVar6 = *(int *)(*(longlong *)(local_40 + 0xa0) + 0x10);
  iVar5 = 0;
  plVar4 = local_38;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(*(undefined8 *)(local_40 + 0xa0),iVar5);
      if ((plVar4 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar4), cVar1 == '\x04')) {
        (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
        iVar2 = FUN_00416db0(local_30,local_res10[0]);
        if (iVar2 == 0) {
          uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          cVar1 = FUN_01323550(auStack_68,uVar3);
          if (cVar1 != '\0') break;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
      plVar4 = local_38;
    } while (iVar6 != 0);
  }
  local_38 = plVar4;
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_38;
}

