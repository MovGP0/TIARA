/* Ghidra address: 01cffc20 */
/* Ghidra symbol: FUN_01cffc20 */


void FUN_01cffc20(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  short sVar7;
  undefined1 local_cb;
  short local_ba;
  longlong local_b8;
  undefined8 local_aa [6];
  char local_77;
  short local_76;
  
  puVar5 = local_aa;
  for (lVar6 = 0xe; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)param_2;
  uVar1 = *(undefined2 *)(param_1 + 0xec);
  cVar2 = '\x01';
  sVar7 = 0;
  if (local_77 == '\n') {
    if (local_76 == 0) {
      local_cb = 0;
    }
    else {
      local_cb = 1;
    }
  }
  plVar4 = (longlong *)FUN_01d013c0(param_1,0);
  do {
    while (cVar2 != '\0') {
      cVar2 = FUN_01d3d920(plVar4,local_77,sVar7,&local_ba);
      if (cVar2 != '\0') {
        cVar3 = (**(code **)(*plVar4 + 0x2d0))(plVar4,local_ba,&local_b8);
        if (cVar3 == '\n') {
          lVar6 = FUN_01d3aab0(*(undefined8 *)(local_b8 + 8),0);
          *(undefined1 *)(lVar6 + 8) = local_cb;
          puVar5 = (undefined8 *)FUN_01d3aab0(*(undefined8 *)(local_b8 + 8),0);
          *puVar5 = 0;
        }
      }
      sVar7 = local_ba + 1;
    }
    FUN_01d018f0(param_1);
    plVar4 = (longlong *)FUN_01d013c0(param_1,0);
  } while (plVar4 != (longlong *)0x0);
  *(undefined2 *)(param_1 + 0xec) = uVar1;
  return;
}

