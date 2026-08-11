/* Ghidra address: 006ee000 */
/* Ghidra symbol: FUN_006ee000 */


void FUN_006ee000(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong local_40 [2];
  
  local_40[0] = 0;
  pcVar2 = (code *)FUN_00411550(param_1,0xffffffff);
  plVar3 = (longlong *)(*pcVar2)(param_1);
  FUN_00419260(local_40,&DAT_006edfb8,1,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10));
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_006ee150(param_1,iVar6);
      puVar1 = (undefined8 *)(local_40[0] + (longlong)iVar6 * 0x10);
      *puVar1 = *(undefined8 *)(lVar4 + 0x18);
      puVar1[1] = *(undefined8 *)(lVar4 + 0x20);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar5 = FUN_0065b870(plVar3);
  thunk_FUN_041b2403(uVar5,0x1041,(longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x10),
                     local_40[0]);
  (**(code **)(*plVar3 + 0x180))(plVar3);
  FUN_00419430(local_40,&DAT_006edfb8);
  return;
}

