/* Ghidra address: 00c35110 */
/* Ghidra symbol: FUN_00c35110 */


longlong FUN_00c35110(longlong param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  puVar2 = auStack_48;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    FUN_0041ddd0(&local_28,PTR_PTR_02003b68);
    FUN_00c1a320(local_28);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  local_10 = 0;
  plVar1 = *(longlong **)(param_1 + 0x80);
  if ((plVar1 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar1 + 0x50))(plVar1), lVar5 == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      cVar3 = FUN_00c360f0(param_1);
      if (cVar3 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x18);
        if (*(int *)(lVar5 + 0x10) < 1) {
          iVar4 = FUN_00c1aa10(*(undefined8 *)(param_1 + 0x50));
          lVar5 = local_10;
          if (0 < iVar4) {
            uVar6 = FUN_00c2fce0(*(undefined8 *)(param_1 + 0x50),0);
            lVar5 = FUN_00c288b0(uVar6);
          }
        }
        else {
          uVar6 = FUN_00c23250(lVar5);
          *(undefined8 *)(param_1 + 0x60) = uVar6;
          lVar5 = *(longlong *)(param_1 + 0x60);
        }
      }
      else {
        uVar6 = FUN_00c1a180();
        *(undefined8 *)(param_1 + 0x60) = uVar6;
        lVar5 = *(longlong *)(param_1 + 0x60);
      }
    }
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x50))(*(longlong **)(param_1 + 0x80));
  }
  local_10 = lVar5;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  FUN_00414480(&local_28);
  return local_10;
}

