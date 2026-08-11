/* Ghidra address: 015fbfc0 */
/* Ghidra symbol: FUN_015fbfc0 */


void FUN_015fbfc0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00441a10(local_40,local_res10[0]);
  FUN_0043e130(local_30,local_40[0]);
  iVar4 = FUN_00416db0(local_30[0],L".ASM");
  if (iVar4 == 0) {
    cVar3 = FUN_01d3f210(param_1);
    if (cVar3 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x1a8);
      plVar2 = *(longlong **)(lVar1 + 0xd8);
      (**(code **)(*plVar2 + 0xd8))(plVar2,local_res10[0]);
      plVar2 = *(longlong **)(lVar1 + 0xf8);
      (**(code **)(*plVar2 + 8))(plVar2,0);
    }
  }
  else {
    iVar4 = FUN_00416db0(local_30[0],L".TFC");
    if (iVar4 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x1a8);
      uVar5 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10[0],0);
      plVar2 = *(longlong **)(lVar1 + 0xf8);
      (**(code **)(*plVar2 + 8))(plVar2,0);
      FUN_004b9ef0(*(undefined8 *)(lVar1 + 0xf8),uVar5);
      FUN_00410f20(uVar5);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

