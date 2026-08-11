/* Ghidra address: 01c062d0 */
/* Ghidra symbol: FUN_01c062d0 */


undefined8 FUN_01c062d0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_20;
  
  local_20 = 0;
  cVar2 = FUN_01c06f30(param_1);
  uVar6 = 0;
  if ((cVar2 != '\0') && (uVar6 = local_20, *(char *)(*(longlong *)(param_1 + 800) + 0xa9) != '\0'))
  {
    lVar3 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
    if (*(char *)(lVar3 + 0x49) == '\0') {
      local_20 = 0x2000000020;
      uVar6 = FUN_01bfab50(*(undefined8 *)(param_1 + 800));
      lVar3 = FUN_01bf9620(uVar6);
      uVar6 = local_20;
      if (*(longlong *)(lVar3 + 0x148) != 0) {
        uVar6 = FUN_01bfab50(*(undefined8 *)(param_1 + 800));
        lVar3 = FUN_01bf9620(uVar6);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x148) + 0x90);
        local_20 = 0x2000000020;
        if (0x20 < iVar1) {
          local_20 = CONCAT44(iVar1,0x20);
        }
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x148) + 0x94);
        uVar6 = local_20;
        if ((int)local_20 < iVar1) {
          local_20 = CONCAT44(local_20._4_4_,iVar1);
          uVar6 = local_20;
        }
      }
    }
    else {
      lVar3 = 0;
      lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 800));
      if (lVar4 != 0) {
        lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 800));
        if (*(longlong *)(lVar4 + 0xc0) != 0) {
          lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 800));
          cVar2 = FUN_004113d0(*(undefined8 *)(lVar4 + 0xc0),&PTR_FUN_0061b768);
          if (cVar2 != '\0') {
            lVar3 = FUN_01bfd980(*(undefined8 *)(param_1 + 800));
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xc0) + 0xd0);
          }
        }
      }
      if (lVar3 == 0) {
        lVar4 = FUN_01bfab50(*(undefined8 *)(param_1 + 800));
        if (lVar4 != 0) {
          uVar5 = FUN_01bfab50(*(undefined8 *)(param_1 + 800));
          lVar3 = FUN_01bf9620(uVar5);
          lVar3 = *(longlong *)(lVar3 + 0xd0);
        }
      }
      if (lVar3 != 0) {
        uVar6 = CONCAT44(*(undefined4 *)(lVar3 + 0x90),*(undefined4 *)(lVar3 + 0x94));
      }
    }
  }
  local_20 = uVar6;
  return local_20;
}

