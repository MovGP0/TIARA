/* Ghidra address: 01424f60 */
/* Ghidra symbol: FUN_01424f60 */


void FUN_01424f60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  
  FUN_016ed320(param_1,2,0,0,0);
  FUN_016ed320(param_1,3,0,0,0);
  cVar1 = (char)param_3;
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
    pdVar3 = (double *)FUN_016eae40(param_1,1);
    local_48 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,1);
    local_40 = *(double *)(lVar2 + 8);
  }
  else if ((byte)(cVar1 - 7U) < 2) {
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_48 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar5);
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_40 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
  }
  if ((local_48 == 1.0) && (local_40 == 0.0)) {
    if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
      pdVar3 = (double *)FUN_016eae40(param_1,1);
      local_48 = *pdVar3;
      lVar2 = FUN_016eae40(param_1,1);
      local_40 = *(double *)(lVar2 + 8);
      puVar4 = (undefined8 *)FUN_016eae40(param_1,2);
      local_58 = *puVar4;
      lVar2 = FUN_016eae40(param_1,2);
      local_50 = *(undefined8 *)(lVar2 + 8);
      FUN_00c44460(local_88,0x3ff0000000000000,0);
      FUN_00c44b10(local_98,local_88,&local_48);
      FUN_00c44460(local_88,0x3ff0000000000000,0);
      FUN_00c44ac0(local_a8,local_88,&local_48);
      FUN_00c44b60(local_88,local_98,local_a8);
      FUN_00c44460(local_a8,0x3ff0000000000000,0);
      FUN_00c44b60(local_98,local_a8,&local_58);
      FUN_00c44720(local_88,local_98,&local_78);
      FUN_016ed320(param_1,3,local_78,0,0);
    }
    else if ((byte)(cVar1 - 7U) < 2) {
      lVar2 = FUN_016eae40(param_1,1);
      uVar5 = FUN_016ed7f0(param_2,param_3);
      local_48 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar5);
      lVar2 = FUN_016eae40(param_1,1);
      uVar5 = FUN_016ed7f0(param_2,param_3);
      local_40 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
      lVar2 = FUN_016eae40(param_1,2);
      uVar5 = FUN_016ed7f0(param_2,param_3);
      local_58 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar5);
      lVar2 = FUN_016eae40(param_1,2);
      uVar5 = FUN_016ed7f0(param_2,param_3);
      local_50 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
      FUN_00c44460(local_88,0x3ff0000000000000,0);
      FUN_00c44b10(local_98,local_88,&local_48);
      FUN_00c44460(local_88,0x3ff0000000000000,0);
      FUN_00c44ac0(local_a8,local_88,&local_48);
      FUN_00c44b60(local_88,local_98,local_a8);
      FUN_00c44460(local_a8,0x3ff0000000000000,0);
      FUN_00c44b60(local_98,local_a8,&local_58);
      FUN_00c44720(local_88,local_98,&local_78);
      FUN_016ed320(param_1,3,local_78,local_70,0);
    }
  }
  else if ((cVar1 == '\x01') || ((byte)(cVar1 - 5U) < 2)) {
    pdVar3 = (double *)FUN_016eae40(param_1,1);
    local_48 = *pdVar3;
    lVar2 = FUN_016eae40(param_1,1);
    local_40 = *(double *)(lVar2 + 8);
    puVar4 = (undefined8 *)FUN_016eae40(param_1,2);
    local_58 = *puVar4;
    lVar2 = FUN_016eae40(param_1,2);
    local_50 = *(undefined8 *)(lVar2 + 8);
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44ac0(local_98,local_88,&local_48);
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44b10(local_a8,local_88,&local_48);
    FUN_00c44b60(local_88,local_98,local_a8);
    FUN_00c44720(local_88,&local_58,&local_68);
    dVar6 = (double)FUN_00c44590(&local_68);
    if (dVar6 < 1e-06) {
      uVar5 = FUN_00c445d0(&local_68);
      local_68 = (double)FUN_0040bcd0(uVar5);
      local_68 = local_68 * 1e-06;
      local_60 = (double)FUN_0040bdd0(uVar5);
      local_60 = local_60 * 1e-06;
    }
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44790(local_88,&local_68,&local_68);
    FUN_016ed320(param_1,2,local_68,0,0);
  }
  else if ((byte)(cVar1 - 7U) < 2) {
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_48 = (double)FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar5);
    lVar2 = FUN_016eae40(param_1,1);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_40 = (double)FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
    lVar2 = FUN_016eae40(param_1,2);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_58 = FUN_01d3c350(*(undefined8 *)(lVar2 + 0x10),uVar5);
    lVar2 = FUN_016eae40(param_1,2);
    uVar5 = FUN_016ed7f0(param_2,param_3);
    local_50 = FUN_01d3c530(*(undefined8 *)(lVar2 + 0x10),uVar5);
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44ac0(local_98,local_88,&local_48);
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44b10(local_a8,local_88,&local_48);
    FUN_00c44b60(local_88,local_98,local_a8);
    FUN_00c44720(local_88,&local_58,&local_68);
    dVar6 = (double)FUN_00c44590(&local_68);
    if (dVar6 < 1e-06) {
      uVar5 = FUN_00c445d0(&local_68);
      local_68 = (double)FUN_0040bcd0(uVar5);
      local_68 = local_68 * 1e-06;
      local_60 = (double)FUN_0040bdd0(uVar5);
      local_60 = local_60 * 1e-06;
    }
    FUN_00c44460(local_88,0x3ff0000000000000,0);
    FUN_00c44790(local_88,&local_68,&local_68);
    FUN_016ed320(param_1,2,local_68,local_60,0);
  }
  return;
}

