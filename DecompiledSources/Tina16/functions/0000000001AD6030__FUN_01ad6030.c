/* Ghidra address: 01ad6030 */
/* Ghidra symbol: FUN_01ad6030 */


void FUN_01ad6030(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  cVar1 = FUN_01acff30(param_1,&local_20);
  if (cVar1 == '\0') {
    FUN_0041ddd0(local_30,&PTR_PTR_01acd590);
    FUN_0072d440(local_30[0],1,4,0);
    FUN_00410f20(local_20);
  }
  else {
    iVar5 = 1;
    while( true ) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
      if (iVar2 < iVar5) break;
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
      uVar4 = FUN_004aeac0(local_20,0);
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0xc0))
                        (*(longlong **)(lVar3 + 0x80),uVar4);
      if (iVar2 != -1) break;
      iVar5 = iVar5 + 1;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    if (iVar2 < iVar5) {
      FUN_00410f20(local_20);
    }
    else {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar5 + -1);
      if (*(byte *)(lVar3 + 0x58) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)lVar3 >> 8),1) << (*(byte *)(lVar3 + 0x58) & 0x1f)
                & 1U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        lVar3 = FUN_004aeac0(local_20,0);
        if (param_2 == '\0') {
          FUN_0114e6b0(*(undefined8 *)(lVar3 + 0xe0),*(undefined8 *)(lVar3 + 200));
        }
        else {
          uVar4 = FUN_019a4600();
          FUN_011439c0(uVar4,*(undefined8 *)(lVar3 + 0xe0),*(undefined8 *)(lVar3 + 200));
        }
        FUN_00410f20(local_20);
      }
      else {
        FUN_004aeac0(local_20,0);
        FUN_00410f20(local_20);
      }
    }
  }
  FUN_00414480(local_30);
  return;
}

