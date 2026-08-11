/* Ghidra address: 01be2c50 */
/* Ghidra symbol: FUN_01be2c50 */


undefined8 FUN_01be2c50(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined8 local_34;
  
  puVar8 = local_58;
  for (lVar7 = 6; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_68 = 0;
  uVar6 = 0;
  lVar7 = *(longlong *)(param_1 + 0x5d0);
  if (lVar7 != 0) {
    iVar2 = FUN_00611650(*(undefined8 *)(lVar7 + 0x648));
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        lVar3 = thunk_FUN_04129e10(local_34);
        uVar4 = FUN_01be08f0(*(undefined8 *)(lVar7 + 0x648),iVar2);
        lVar5 = FUN_0065b870(uVar4);
        if (lVar3 == lVar5) {
          uVar6 = FUN_01be08f0(*(undefined8 *)(lVar7 + 0x648),iVar2);
          local_60 = FUN_0064d3a0(uVar6,&local_34);
          uVar6 = FUN_00656230(uVar6,&local_60,1,0,0);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01bf4f40);
    if (cVar1 != '\0') {
      local_68 = uVar6;
    }
  }
  return local_68;
}

