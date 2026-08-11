/* Ghidra address: 00c6ffe0 */
/* Ghidra symbol: FUN_00c6ffe0 */


void FUN_00c6ffe0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = FUN_004d3e30(param_2);
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_004d3de0(param_2,0);
      FUN_00410f20(uVar2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  FUN_006fd110(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      plVar3 = (longlong *)FUN_00c6ab30(&PTR_FUN_00c6a0e8,1,param_2);
      (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
      FUN_006fa6a0(plVar3,1);
      *(undefined1 *)(plVar3 + 99) = 1;
      FUN_006fa460(plVar3,1);
      uVar2 = FUN_00c6fe60(param_1,iVar1);
      FUN_00c6fa30(uVar2,local_30);
      FUN_0064de00(plVar3,local_30[0]);
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      FUN_00414ad0(plVar3 + 0x1e,*(undefined8 *)(lVar4 + 0x20));
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      FUN_00c6bbe0(plVar3,*(undefined8 *)(lVar4 + 0x28));
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      FUN_00c6bd30(plVar3,*(undefined4 *)(lVar4 + 0x18));
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      FUN_00c6bda0(plVar3,*(undefined4 *)(lVar4 + 0x1c));
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      plVar3[0x6e] = *(longlong *)(lVar4 + 0x58);
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      plVar3[0x6f] = *(longlong *)(lVar4 + 0x60);
      lVar4 = FUN_00c6fe60(param_1,iVar1);
      *(undefined4 *)(plVar3 + 0x70) = *(undefined4 *)(lVar4 + 0x68);
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  FUN_00414480(local_30);
  return;
}

