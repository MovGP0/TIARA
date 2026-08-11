/* Ghidra address: 019ae8a0 */
/* Ghidra symbol: FUN_019ae8a0 */


void FUN_019ae8a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 local_res10 [3];
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_019ae9f0(param_1,param_3,local_20,&local_24);
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)FUN_004095c0(0x10);
    plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(longlong **)(puVar4 + 2) = plVar5;
    *(undefined2 *)((longlong)plVar5 + 0x2c) = 0x20;
    iVar2 = (**(code **)(*plVar5 + 0xb0))(plVar5,local_res10[0]);
    if (iVar2 == -1) {
      (**(code **)(**(longlong **)(puVar4 + 2) + 0x78))(*(longlong **)(puVar4 + 2),local_res10[0]);
    }
    *puVar4 = param_3;
    FUN_01b1c970(*(undefined8 *)(param_1 + 0x418),puVar4,FUN_019ae880);
  }
  else {
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x418),local_24);
    iVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0xb0))
                      (*(longlong **)(lVar3 + 8),local_res10[0]);
    if (iVar2 == -1) {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x418),local_24);
      (**(code **)(**(longlong **)(lVar3 + 8) + 0x78))(*(longlong **)(lVar3 + 8),local_res10[0]);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

