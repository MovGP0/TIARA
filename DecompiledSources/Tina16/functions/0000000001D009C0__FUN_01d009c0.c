/* Ghidra address: 01d009c0 */
/* Ghidra symbol: FUN_01d009c0 */


void FUN_01d009c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_48 [13];
  undefined1 local_3b;
  char local_3a;
  undefined1 local_39 [17];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168);
  iVar4 = *(int *)(param_1 + 0x2a8);
  plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x4b0);
  *(longlong **)(lVar2 + (longlong)iVar4 * 99 + 0x5b) = plVar5;
  *(undefined4 *)((longlong)plVar5 + 0xfe) = 0x47535003;
  uVar3 = FUN_01d38290(plVar5,1);
  *PTR_DAT_02002ce0 = uVar3;
  local_3b = (**(code **)(*plVar5 + 0x2d0))(plVar5,0,local_48);
  uVar1 = *(undefined8 *)
           (*(longlong *)PTR_DAT_02003110 + -8 + (longlong)(*(int *)(param_1 + 0x298) + 1) * 0xc);
  puVar6 = (undefined8 *)FUN_01cfde70(plVar5,1,0,&local_3b,&local_3a,local_39);
  if (local_3a == '\x03') {
    *puVar6 = uVar1;
  }
  uVar7 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
  iVar4 = *(int *)(param_1 + 0x298) + 2;
  if (iVar4 <= *(int *)(param_1 + 0x29c)) {
    iVar8 = (*(int *)(param_1 + 0x29c) - iVar4) + 1;
    do {
      FUN_01d3aad0(uVar7,*(undefined8 *)(*(longlong *)PTR_DAT_02003110 + -8 + (longlong)iVar4 * 0xc)
                   ,*(undefined1 *)(*(longlong *)PTR_DAT_02003110 + -0xc + (longlong)iVar4 * 0xc));
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_01539ae0(*(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168) + 0x5b +
                (longlong)*(int *)(param_1 + 0x2a8) * 99),uVar1,uVar7);
  return;
}

