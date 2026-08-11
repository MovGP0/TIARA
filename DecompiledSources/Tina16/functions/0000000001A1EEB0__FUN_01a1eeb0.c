/* Ghidra address: 01a1eeb0 */
/* Ghidra symbol: FUN_01a1eeb0 */


longlong * FUN_01a1eeb0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res18 [2];
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_res18[0] = param_3;
  local_40 = param_2;
  FUN_00414610(param_3);
  local_38 = (longlong *)0x0;
  iVar6 = *(int *)(local_40 + 0x10);
  iVar5 = 0;
  plVar4 = local_38;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(local_40,iVar5);
      if ((plVar4 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar4), cVar1 == '\x04')) {
        (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
        iVar2 = FUN_00416db0(local_30,local_res18[0]);
        if (iVar2 == 0) {
          uVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
          cVar1 = FUN_01a1ee80(auStack_68,uVar3);
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
  FUN_00414480(local_res18);
  return local_38;
}

